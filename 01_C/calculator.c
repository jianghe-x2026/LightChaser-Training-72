#include <stdio.h>

int main()
{
    while(1)
    {
        int n;
        int a,b;
        printf("选择工具: 1.+ 2.- 3.* 4./\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:printf("a=");scanf("%d",&a);printf("b=");scanf("%d",&b);printf("结果：%d\n",a+b);break;
            case 2:printf("a=");scanf("%d",&a);printf("b=");scanf("%d",&b);printf("结果：%d\n",a-b);break;
            case 3:printf("a=");scanf("%d",&a);printf("b=");scanf("%d",&b);printf("结果：%d\n",a*b);break;
            case 4:printf("a=");scanf("%d",&a);printf("b=");scanf("%d",&b);printf("结果：%d，余：%d\n",a/b,a%b);break;
        }

    }
    return 0;
}