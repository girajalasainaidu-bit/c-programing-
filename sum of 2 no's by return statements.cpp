#include<stdio.h>
int sum(int,int);
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("sum=%d",c);
	return 0;
}
int sum(int a,int b)
{
	int x;
	x=a+b;
	return x;
}
