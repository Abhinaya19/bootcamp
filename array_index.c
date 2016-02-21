#include <stdio.h>
int n;
int inarray(int arr[],int num)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[50],index,num,i;
    printf("\nenter the size of array");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number to be found");
    scanf("%d",&num);
    index=inarray(arr,num);
    if(index==-1)
    {
        printf("number not found in array");
    }


    else
    {
        printf("the num %d is found at %d index",num,index);
    }
}
