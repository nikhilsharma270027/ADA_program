#include<stdio.h>
#include<conio.h>

int gcd(int a,int b)
{
  if(b==0)
    return a;
  else
    return gcd(b,a % b);
}

int main()
{
  int num1,num2,result;
  clrscr();

  printf("Enter the gcd nimbers : ");
  scanf("%d %d",&num1,&num2);

  result=gcd(num1,num2);

  printf("GCD of %d and %d is %d",num1,num2,result);

  getch();
}

