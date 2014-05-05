#include <stdio.h>

#define  MAX_CALORIE  200
short    candy[MAX_CALORIE+1];

int	distribute()
{
	int a=0,b =0;
	int i,c;
	for(i = MAX_CALORIE; i>=0; --i)
	{
		for(c=0; c<candy[i]; c++)
		{
			if(a<b){
				a+= i;
			}else{
				b+= i;
			}
		}
	}
	return (a-b < 0)?b-a:a-b;
}


int main()
{
	int  N,k,c,i;

	scanf ("%d", &N);
	for(i=0; i<N; i++)
	{
		scanf("%d %d",&k, &c);
		if(candy[c]){
			candy[c]+= k;
		}else{
			candy[c] = k;
		}
	}
	printf("%d", distribute());
	return 0;
}
