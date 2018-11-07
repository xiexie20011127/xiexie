#include <stdio.h>
int main()
{
    int n,i,j,k=1;
    while(scanf("%d",&n))
    {
        if(n==0)
        return 0;
        printf("Case %d:\n",k);
        for(i=1;i<=3*n;i++)
        {
        for(j=1;j<=n-1;j++)
        printf("XTU");
        printf("XTU\n");
        }
        printf("\n");
        k++;
    }
}

