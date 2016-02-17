#include <stdio.h>

int main()
{
    int n,s,d,r[20],i;
    char type[2];
    printf("enter number, start number and difference");
    scanf("%d%d%d",&n,&s,&d);
    printf("enter type of series");
    scanf("%s",type);
    if(type[0]=='A')
    {
        for(i=0;i<n;i++)
        {
            r[i]=s;
            s=s+d;
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            r[i]=s;
            s=s*d;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",r[i]);
    }
}
