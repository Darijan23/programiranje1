#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	int brojevi[50];
	int i, n, br = -1, max = 0, dul = 0;
	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%d ", &brojevi[i]);
	}

	for (i = 0; i < n; i++) {
		if (brojevi[i] % 2 == 0) {
			br++;

			if (dul > max) {
				max = dul;
			}
			dul = 1;
		} else {
			dul++;
		}
	}

	if (brojevi[n-1] % 2 && br != 0) {
		br *= 2;
	} else if (br == 0) {
		max = 0;
	}

	printf("%d %d\n", max, br);
	return 0;
}
