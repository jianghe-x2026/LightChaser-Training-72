#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("要几个数：");
    if(scanf("%d",&n)!=1)return 1;

    int *arr =(int*)malloc(n*sizeof(int));//n个盒子，每个盒子sizeof(int)个字节，计算后申请内存
    if(arr == NULL)//检查内存够不够
    {
        printf("内存不足");
        return 1;
    }

    for(int i=0;i<n;i++)//输入
    {
        printf("第%d个数:",i+1);
        scanf("%d",&arr[i]);
    }
    int x=0;
    for(int i=0;i<n;i++)
    {
        x=x+arr[i];

    }
    float t;
    t=(float)x/n;//x,n是int整型，转浮点计算
    printf("平均数：%f",t);
    free(arr);//释放内存
    arr=NULL;
    return 0;
}