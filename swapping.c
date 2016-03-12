#include <stdio.h>
int divide(int s,int num)
{
   int i;
   for(i=0;i<s;i++)
   {
       num=num/10;
   }
   return num;
   
}
int multiply(int s,int num)
{
    int i;
    for(i=0;i<s;i++)
    {
        num=num*10;
    }
    return num;
    
}

int main()
{
    int num,n,count=0,s,m,m1,res,m3,m2;
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    s=count/2;
    m=divide(s,num);
    m1=num-multiply(s,m);
    if(count%2==0)
    {
        res=multiply(s,m1)+m;
        printf("%d",res);
    }
    else
    {
        m2=m/10;
        m3=m%10;
        res=multiply(s+1,m1)+multiply(s,m3)+m2;
        printf("%d",res);
        
     }
}

