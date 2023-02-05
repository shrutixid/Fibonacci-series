#include<stdio.h>
void main()
{
printf("The following program is to find the fibonacci series till the given digits\n");
int a=0,b=1,new,num;//'a' serving as first number 'b' serving as second number and'new'is the result which will create the new number after the sum of a and b
printf("Enter a number:-");
scanf("%d",&num);
printf("\n%d %d ",a,b);
for(int i=2;i<num;i++)//A for loop to control the length of the series
{
  new=a+b;
  printf("%d ",new);
  a=b;
  b=new;
}
}
