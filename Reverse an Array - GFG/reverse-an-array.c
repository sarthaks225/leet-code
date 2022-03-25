#include <stdio.h>

int main() {
	int T,N,array[100],i;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d",&N);
	    for(i=0; i<N; ++i) scanf("%d",&array[i]);
	   
	    for(i=N-1; i>=0; --i) printf("%d ",array[i]);
        printf("\n");
	}
	return 0;
}