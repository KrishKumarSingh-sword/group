#include <stdio.h>
int main()
{
   int n;
   printf("entre the range 10 to n\n");
   scanf("%d", &n);
   for(int j=10;j<n;j++)
{   
   int b=j;
   int a=b;
   int d;
   int prod=1;
   int sum=0;

do
{
   d=a%10;
   sum=sum+d;
   a=a/10;
}
while(a!=0);


printf("%d  ", j);
if((b%sum)==0)
{
   printf("arshad");
}
else
{
   printf("not arshad");
}
printf("\n");
sum=0;
prod=1;

}
}