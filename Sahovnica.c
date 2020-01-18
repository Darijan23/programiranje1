#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

void redak(int r, int s, int a, int b) {
	int i, j, k;
	if (r % 2) {
		for (i = 0; i < a; i++) {
			for (j = 0; j < s; j++) {
				if (j % 2) {
					for (k = 0; k < b; k++) {
						printf("X");
					}
				} else {
					for (k = 0; k < b; k++) {
						printf(".");
					}
				}
			}
			printf("\n");
		}
	} else {
		for (i = 0; i < a; i++) {
			for (j = 0; j < s; j++) {
				if (j % 2) {
					for (k = 0; k < b; k++) {
						printf(".");
					}
				} else {
					for (k = 0; k < b; k++) {
						printf("X");
					}
				}
			}
			printf("\n");
		}
	}
}

int main() {
	int r, s, a, b, i;
	scanf("%d %d %d %d", &r, &s, &a, &b);

	for (i = 0; i < r; i++) {
		redak(i, s, a, b);
	}

	return 0;
}