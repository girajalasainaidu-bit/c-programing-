#include<stdio.h>
void mul(int,int);
int main()
{
	int x=10,y=10;
	mul(x,y);
	return 0;
}
 void mul(int x,int y)
 {
 	int z;
 	z=x*y;
 	printf("mul=%d",z);
 }
	
