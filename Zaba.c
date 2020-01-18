#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	int path[1000];
	int i, a, n, c = 0, pos = 0;
	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%d ", &path[i]);
	}

	while (pos >= 0 && pos < n) {
		c++;
		if (path[pos] / 10 > 0) {
			a = path[pos] % 10;
			path[pos] /= 10;
			if (a % 2) {
				pos += a;
			} else {
				pos -= a;
			}
		} else if (path[pos] / 10 == 0 && path[pos] != 0) {
			a = path[pos] % 10;
			path[pos] = 0;
			if (a % 2) {
				pos += a;
			} else {
				pos -= a;
			}
		} else {
			pos = -1;
		}
	}

	if (pos < 0) {
		printf("Ukleta lokva");
	} else {
		printf("%d", c);
	}

	return 0;
}
