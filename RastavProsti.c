#include <stdio.h>
#include <math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	int i, j, n, k;
	scanf("%d %d", &n, &k);
	for (i = 0; i < k; i++) {
		for (j = 2; j <= n; j++) {
			if (n % j == 0) {
				n /= j;
				printf("%d ", j);
				break;
			}
		}
	}
    return 0;
}