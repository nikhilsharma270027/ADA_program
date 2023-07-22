#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a[10],sum=0,count=0;
clrscr();
count=count+1;
printf("Enter the size of array:");
scanf("%d",&n);
count=count+1;
printf("Enter he elements:\n");
for(i=0;i<n;i++)
   {
   count=count+1;
   scanf("%d",&a[i]);
   }
count=count+1;
for(i=0;i<n;i++)
   {
    count=count+1;
    sum=sum+a[i];
    count=count+1;
   }
count=count+1;
printf("The sum of %d value is %d &count is %d",n,sum,count);
getch();
}
