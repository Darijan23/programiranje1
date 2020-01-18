#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int max(int list[]) {
	int i, m = 0, p;
	for (i = 0; i <= 9; i++) {
		if (list[i] >= m) {
			p = i;
			m = list[i];
		}
	}
	return p;
}

int repeat(long unsigned int acc, int d) {
	int c = 0;
	while (acc > 0) {
		if (acc % 10 == d) {
			c++;
		}
		acc /= 10;
	}
	return c;
}

int main() {
	int i, j, n;
	long unsigned int bank[20];
	int dig[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	scanf("%d\n", &n);

	for (i = 0; i < n; i++) {
		scanf("%lu\n", &bank[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j <= 9; j++) {
			dig[j] = repeat(bank[i], j);
		}
		if (max(dig) > 5) {
			printf("Vidim bogatstvo\n");
		} else if (max(dig) == 5) {
			printf("Vidim neizvjesnost\n");
		} else {
			printf("Vidim siromastvo\n");
		}
	}

	return 0;
}