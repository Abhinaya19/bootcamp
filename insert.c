#include <stdio.h>

int main()
{
    int arr[30],i,size,n,in,flag=0;
    printf("enter array size:");
    scanf("%d",&size);
    printf("enter array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nenter number to be inserted:");
    scanf("%d",&n);
    printf("\nenter index:");
    scanf("%d",&in);
    for(i=size;flag!=1;i--)
    {
        if(i==in)
        {
            arr[i+1]=arr[i];
            arr[i]=n;
            flag=1;
        }
        else
        {
            arr[i+1]=arr[i];
            arr[i]=0;
        }
    }
    for(i=0;i<size+1;i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0;
}
