#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	int i, n, uvjet = 0, c = 0;
	int brojevi[15];
	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%d ", &brojevi[i]);
	}

	while (!uvjet) {
		for (i = 0; i < n; i++) {
			if (brojevi[i] % 2 == 0 && i == n-1) {
				uvjet = 1;
				break;
			} else if (brojevi[i] % 2 && i < n-1) {
				brojevi[i]++;
				brojevi[i+1]--;
				c++;
			} else if (brojevi[i] % 2  && i == n-1) {
				brojevi[i]++;
				c++;
			}
		}
	}

	printf("%d", c);

	return 0;
}