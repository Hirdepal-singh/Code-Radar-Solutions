// Your code here...
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("");
    scanf("%d",&n);
    for(i=n;i<=1;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*",j);
        }
        printf("\n");
    }
}