#include <stdio.h>

void exchange(int *a,int *b)//a,b交换
{
    int t=*a;//a的指向赋给t
    *a=*b;//b的指向赋给a
    *b=t;//t的指向赋给b
}
int main()
{
    int a=2;
    int b=3;
    printf("%d ,%d\n",a,b);
    exchange(&a,&b);//int *a定义的是指针，所以应该&a取地址
    printf("%d ,%d",a,b);
    return 0;
}