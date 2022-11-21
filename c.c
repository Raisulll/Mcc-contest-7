#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,i;
        scanf("%d",&n);
        int arr1[n+1];
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr1[i]);
        }
        int m;
        scanf("%d",&m);
        int arr2[m+1];
        for(i=1; i<=m; i++)
        {
            scanf("%d",&arr2[i]);
        }
        int res,z=0;
        for(i=1; i<=m; i++)
        {
            z+=arr2[i];
            if(z>=n)
            {
                z=z-n;
            }
            res=arr1[z];
        }
        printf("%d\n",res);
    }

    return 0;
}
