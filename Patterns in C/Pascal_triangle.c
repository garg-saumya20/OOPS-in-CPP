#include <stdio.h>
#include <conio.h>

int main()
{
    int n = 5;
    int val;
    for (int i = 1; i <= 5; i++)
    {
         val = 1;
        printf("\n");
        for(int space=1;space<=5-i;space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", val);
            
           val=val*(i-j)/j;
        }
    }
    return 0;
}