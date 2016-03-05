#include<stdio.h>
int main()
{
	char res[20],str[20],i,j=0,count=1,flag=0,k;
	printf("\nenter the string");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
		{
			res[j]=str[i];
			j++;
		}
	}
	for(i=1;i<j;i++)
	{
		flag=0;
		for(k=0;k<i;k++)
		{
			if(res[k]==res[i])
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			count++;
		}
	}
	printf("%d",count);
}
