#include<stdio.h>

#define N	10
//#define MAX(a,b)	((a)>(b)?(a):(b))
#define SEC	(365*24*60*60UL)
#define SWAP(a,b)	\
	do {\
		typeof(a) t;\
		t = a;\
		a = b;\
		b = t;\
	}while(0)
						
int main(void)
{
	int score;
	int i;
	int c = 3,d = 5;
#if 0
	for(i = 0;i<N;i++)
	{
		scanf("%d",&score);
		printf("%d",score);

	}
#endif
	//printf("%d\n",MAX(a,b));
	printf("%d\n",__LINE__);
	printf("%s\n",__FUNCTION__);
	printf("%s\n",__DATE__);
	printf("%s\n",__TIME__);
	int a = 2,b = 3;
	SWAP(a,b);
	printf("a=%d,b=%d\n",a,b);
	printf("%d",SEC);
	return 0;
}
