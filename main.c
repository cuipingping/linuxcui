#include"hw21.h"
#include<stdio.h>
int main(void)
{
	int n,a,b,c,d,e;
	mulTable();
	scanf("%d",&n);
	int sum = plasticSum(n);
	printf("%d\n",sum);
	scanf("%d",&a);

	printStar(a);
	scanf("%d",&b);
	printLetter(b);
	scanf("%d %d %d",&c,&d,&e);
	int f = maxValue(c,d,e);
	printf("%d",f);
	return 0;
}
