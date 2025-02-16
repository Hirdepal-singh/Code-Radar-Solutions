// Your code here...
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=0;j--)
        {
            printf("*",j);
        }
        printf("\n");
    }
}