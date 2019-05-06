
#include<stdio.h>
int main()
{
int x,y;
int a=input();
int s=compute(a);
output(s);
}
int input()
{
int x;
printf("Enter a number");
scanf("%d",&x);
return x;
}
int compute(int x)
{
int su=x+1;
return su;
}
void output(int sum)
{
printf("The sum is %d",sum);
}



