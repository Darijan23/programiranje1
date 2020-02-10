#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	int n, m, i, j, c = 0, uvjet = 0;
	int matrica[15][15];
	scanf("%d %d\n", &n, &m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d ", &matrica[i][j]);
		}
	}

	for (j = 0; j < m; j++) {
		uvjet = 0;
		if (matrica[0][j] == 0) {
			uvjet = 1;
			for (int i = 0; i < n; i++) {
				if (matrica[i][j]) {
					uvjet = 0;
					break;
				}
			}
		}
		if (uvjet) {
			c++;
		}
	}

	printf("%d", c);

	return 0;
}