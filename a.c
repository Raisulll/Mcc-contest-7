#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("1 ");
    int count=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1; j++)
       {
         if(arr[j]==count)
        {
            printf("%d ",j+2);
            count++;
            break;
        }
       }
    }
    return 0;
}
