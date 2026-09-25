#include <stdio.h>

int main()
{
    while(1)
    {
        int n,x;
        int a,b;
        printf("选择工具: 1.+ 2.- 3.* 4./\n");//\n是换行
        scanf("%d",&n);//输入要&取地址
        switch(n)//比if方便
        {
            case 1:printf("a=");scanf("%d",&a);printf("b=");scanf("%d",&b);printf("结果：%d\n",a+b);break;
            case 2:printf("a=");scanf("%d",&a);printf("b=");scanf("%d",&b);printf("结果：%d\n",a-b);break;
            case 3:printf("a=");scanf("%d",&a);printf("b=");scanf("%d",&b);printf("结果：%d\n",a*b);break;
            case 4:
                printf("a=");scanf("%d",&a);printf("b=");scanf("%d",&b);
                if(b == 0)
                {
                    printf("除数不能为0\n");
                }
                else
                {
                    printf("结果：%d,余：%d\n",a/b,a%b);
                }
                break;
            default:
                printf("无效输入\n");
                break;
        }
        printf("结束请按1,否请按2:");
        scanf("%d",&x);
        if(x == 2)
        {
            return 0;
        }

    }
}