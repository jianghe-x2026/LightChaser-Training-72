#include <stdio.h>

int main()
{   
    int n=0;
    for(int i=1;i<=100;i++)
    {
        if((i % 2) ==1)
        {
            n=n+i;
        }
    }
    printf("奇数和：%d",n);
    return 0;
}