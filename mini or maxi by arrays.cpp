#include<stdio.h>
int main()
{
	int a[100],n,i,mini,maxi;
	printf("enter size of the array");
	scanf("%d",&n);
	printf("enter array values");
	for(i=0;i<n;i++)
	{ 
	scanf("%d",&a[i]);
	}
	mini=maxi=a[0];
	for(i=1;i<n;i++)
	{
		if(mini >a[i])
		mini=a[i];
		else if(maxi<a[i])
		maxi=a[i];
	}
	printf("mini value =%d",mini);
	printf("maxi value =%d",maxi);
	return 0;
}
