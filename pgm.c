#include<stdio.h>
int main()
{
int a,b,c;
printf("\n enter the number a and b and c");
scanf("%d%d%d",&a,&b,&c);
if(a<b)
{
if(a<c)
{
printf("a is greater");
}
else if(b<c)
{
printf("\n b is greater");
}
else
{
printf("\n c is greater");
}
}
