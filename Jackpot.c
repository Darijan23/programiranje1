#include<stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main()
{
	int n, automat[10][10], i, j, u, jackpot = 0;
	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j <n; j++) {
			scanf("%d\n", &u);
			automat[i][j] = u;
		}
	}

	for (i = 0; i < n; i++) {
		if (automat[i][0] == 7) {
			jackpot = 1;
			for (j = 0; j < n; j++) {
				if (automat[i][j] != 7) {
					jackpot = 0;
					break;
				}
			}
		}
	}

	for (i = 0; i < n; i++) {
		if (automat[0][i] == 7) {
			jackpot = 1;
			for (j = 0; j < n; j++) {
				if (automat[i][j] != 7) {
					jackpot = 0;
					break;
				}
			}
		}
	}

	if (automat[0][0]) {
		jackpot = 1;
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (i == j && automat[i][j] != 7) {
					jackpot = 0;
					break;
				}				
			}
		}
	}

	if (jackpot) {
		printf("JACKPOT\n");
	} else {
		printf("GUBITNIK\n");
	}

	return 0;
}
