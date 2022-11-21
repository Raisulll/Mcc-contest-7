#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k,i;
        scanf("%d%d",&n,&k);
        int arr[101];
        for(i=1; i<=n; i++)
        {
            scanf("%d",&arr[i]);
        }
        int max=arr[1];
        for(i=2; i<=n; i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
        int a[max+1];
        for(i=1;i<=max; i++)
        {
            a[i]=0;
        }
        for(i=1; i<=n;i++)
        {
            a[arr[i]]+=1;
        }
        int count=0;
        for(i=1;i<=max; i++)
        {
            if(a[i]>=k)
            {
                count++;
            }
        }
        for(i=1; i<=n; i++)
        {
            if(arr[i]==i && a[i]>=k)
            {
                count--;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
