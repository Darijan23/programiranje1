#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

void vibecheck(char field[100][100], int m) {
	int i, j, k, l, check = 0;
	for (i = 1; i < m - 1; i++) {
		for (j = 1; j < m - 1; j++) {
			check = 0;
			if (field[i][j] != '*') {
				check = 1;
				for (k = -1; k <= 1; k++) {
					for (l = -1; l <= 1; l++) {
						if (field[i+k][j+l] != '*' && !(k == 0 && l == 0)) {
							check = 0;
							break;
						}
					}
				}
				if (check) {
					i = j = k = l = m;
					break;
				}
			}
		}
	}
	if (check) {
		printf("Kvarner je spasen");
	} else {
		printf("Trazi dalje");
	}
}

int main() {
	int m, i, j;
	char polje[100][100];

	scanf("%d\n", &m);

	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			scanf("%c", &polje[i][j]);
		}
		scanf("\n");
	}

	vibecheck(polje, m);

	return 0;
}