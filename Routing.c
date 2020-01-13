#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	int i, j, n, a, b, c = 0, pos;
	int table[10][10];
	scanf("%d %d %d", &n, &a, &b);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d ", &table[i][j]);
		}
	}

	pos = a-1;

	while (pos != b-1) {
		pos = table[pos][b-1] -1;
		c++;
	}

	printf("%d", c);

	return 0;
}
