#include <stdio.h>
int add(int a,int b,int c)
{
    int d;
    d=a+b+c;
    return d;
}

int main()
{
    int a,b,c,d,ar[4],sum=0,i,f;
    printf("using three variables");
    printf("\nenter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    printf("\nsum=%d",a+b+c);
    printf("\nusing arrays");
    printf("\nenter three numbers");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }
    printf("\nsum using array=%d",sum);
    printf("\nusing functions:");
    f=add(a,b,c);
    printf("\nsum using function=%d",f);
}
