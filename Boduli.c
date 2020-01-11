#include<stdio.h>
#include<math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main()
{
	int n, i, j, b = 0;
	char c;
	scanf("%d %c", &n, &c);
	for (i = 0; i < floor(n/2); ++i) {
		for (int j = 0; j < n; ++j)	{
			if (j == b || j == n-1-b) {
				printf("%c", c);
			} else {
				printf(".");
			}
		}
		b++;
		printf("\n");
	}

	for (i = 0; i <= n/2; ++i) {
		for (int j = 0; j < n; ++j)	{
			if (j == b || j == n-1-b) {
				printf("%c", c);
			} else {
				printf(".");
			}
		}
		b--;
		printf("\n");
	}
    return 0;
}