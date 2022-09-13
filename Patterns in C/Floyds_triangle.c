#include <stdio.h>
#include <conio.h>

int main()
{
    int n = 5;
    int num=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}