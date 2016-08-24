#include<stdio.h>
void main()
{
int i,n;
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i!=0)
continue;
else break;
}
if(n/2+1==i)
printf("prime");
else
printf("not prime");
}
