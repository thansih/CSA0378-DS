#include<stdio.h>
int main()
{
int a[10],search,c,n;
printf("enter the size of a array");
scanf("%d",&n);
printf("enter %d integers\n",n);
for (c=0;c<n;c++)
scanf("%d",&a[c]);
printf("enter a number to search");
scanf("%d",&search);
for (c=0;c<n;c++)
{
if (a[c]==search)
{
printf("%d is present at location %d\n",search,c+1);
break;
}
}
if (c==n)
{
printf("%d is not present in array\n",search);
}
return 0;
}
