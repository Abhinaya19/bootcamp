#include<stdio.h>
int res[30];
int swap(int i,int j)
{
	int temp;
	while(i>=0)
		{
			temp=res[i];
			res[i]=res[j];
			res[j]=temp;
			i--;
			j--;
		}
}

int main()
{
	int num,count=0,num1,i=0,j,size,mid;
	printf("enter the number:");
	scanf("%d",&num);
	num1=num;
	while(num1>0)
	{
		num1=num1/10;
		i++;
	}
	size=i;
	i=size-1;
	while(i>=0)
	{
		res[i]=num%10;
		num=num/10;
		i--;
	}
	if((size)%2==0)
	{
		i=(size-1)/2;
		j=size-1;
		swap(i,j);
	}
	else
	{
		mid=size/2;
		i=mid-1;
		j=size-1;
		swap(i,j);
	}
	for(i=0;i<size;i++)
	{
		printf("\n%d",res[i]);
	}
	
}
