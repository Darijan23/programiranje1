#include<stdio.h>
#include<math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main()
{
	int n, i, j;
	char c;
	scanf("%d %c\n", &n, &c);
	for (i = 1; i <= n; i++)	{
		for (j = n - i; j > 0; j-- ) {
  			printf(".");
  		}	

  	for (j = 0; j < i; j++) {
  			printf("%c", c);
  		}
			printf("\n");
	}

	for (i = n-1; i > 0; i--)	{
		for (j = n - i; j > 0; j-- ) {
	  		printf(".");
	  	}

	  	for (j = 0; j < i; j++) {
	  		printf("%c", c);
	  	}
	  	printf("\n");
	}

    return 0;
}