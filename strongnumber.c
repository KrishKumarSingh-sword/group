#include <stdio.h>
int main()
{
   int n;
   printf("entre the range 1 to n \n");
   scanf("%d", &n);
   for(int j=1;j<=n;j++)
{   
   int b=j;
   int a=b;
   int d;
   int prod=1;
   int sum=0;

do
{
   
   d=a%10;
   for(int i=1;i<=d;i++)
   {
      prod=prod*i;
   }
   sum=sum+prod;
   prod=1;
   a=a/10;
}
while(a!=0);
printf("%d",j);
if(sum==b)
{
   printf("strong");
}
else
{
   printf("not strong");
}
printf("\n");
sum=0;
prod=1;

}
}