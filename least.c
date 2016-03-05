#include<stdio.h>
int least(int arr[],int n,int s)
{
	int i,k=-1;
	for(i=0;i<s;i++)
	{
		if(arr[i]>n)
		{
			k=i;
			break;
		}
	}
	return k;
}
	
int main()
{
	int arr[30],i,size,num,res;7
	printf("\nenter the size of array");
	scanf("%d",&size);
	printf("\nenter the sorted array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nenter the number");
	scanf("%d",&num);
	res=least(arr,num,size);
	printf("\nOUTPUT=%d",res);
	return 0;
}
	
