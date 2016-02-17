#include <stdio.h>

int main()
{
        int s,n,d,r[20],i;
        printf("enter  no , start and difference");
        scanf("%d%d%d",&n,&s,&d);
        for(i=0;i<n;i++)
        {
            r[i]=s;
            s+=d;
        }
        for(i=0;i<n;i++)
        {
            printf("%d\t",r[i]);
        }
}
