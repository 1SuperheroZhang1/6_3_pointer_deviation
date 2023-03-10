#include <stdio.h>
/*
 * 6.3 指针的偏移使用场景
 *  Ⅰ、指针的偏移
 *      > 指针的偏移就是对指针进行加减
 *      > 指针变量加1后，偏移的长度是其基类型的长度，也就是偏移sizeof(int)，这样通过*(p+1)就可以得到元素a[1]
 *      > 编译器在编译时，数组取下标的操作正是转换为指针偏移来完成。
 *  Ⅱ、指针与一维数组
 * */

#define N 5 //符号常量
//指针的偏移
//int main() {
//    int a[N]={1,2,3,4,5};
//    int *p;
//    p=a;//保证等号两边的数值类型一致
//    int i;
//    for(i=0;i<N;i++){
//        printf("%d ",*(p+i));//等价于a[i]
//    }
//    printf("\n");
//    printf("---------------------------\n");
//    p=&a[4];//让p指向最后一个元素
//    //逆序输出
//    for(i=0;i<N;i++){
//        printf("%d ",*(p-i));//等价于a[i]
//    }
//    return 0;
//}

//指针与一维数组的传递
//数组名作为实参传递给子函数时，是弱化为指针的
void change(char *d){//等价于char d[]
    *d='H'; //指针法
    d[1]='E'; //下标法
    *(d+2)='L';
}
int main(){
    char c[10]="hello";
    change(c);
    puts(c);
    return 0;
}
