#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i;
    scanf("%d",&n);
    int arr[n+1];
    int odd=0,ev=0;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1; i<=n; i++)
    {
        if(arr[i]%2==0)
            ev++;
        else
            odd++;
    }
    if(odd>ev)
    {
        for(i=1; i<=n; i++)
        {
            if(arr[i]%2==0)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    else
    for(i=1; i<=n; i++)
        {
            if(arr[i]%2==1)
            {
                printf("%d\n",i);
                break;
            }
        }
    return 0;
}
