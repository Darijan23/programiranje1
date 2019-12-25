#include <stdio.h>
#include <math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	int i, j, a, b, p, c;
	scanf("%d %d\n", &a, &b);
	if (a < b) {
		p = a;
		a = b;
		b = p;
	}

	for (i = a; i > b; i--)	{
		c = 0;
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j == 0)	{
				c += 1;
				break;
			}
		}
		if (c == 0 && i >= 1)   //Ne bi trebalo biti >= nego samo >
		{
			printf("%d\n", i);
		}
	}
}