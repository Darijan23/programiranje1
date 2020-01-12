#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int check(char memin[], int n) {
	int i, c = 0;
	int polje[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int l = 7;
	while (n > 0) {
		polje[l] = n%2;
		n /= 2;
		l--;
	}
	for (i = 0; i < 8; i++) {
		if (memin[i]-'0' != polje[i]) {
			c++;
		}
	}
	return c;
}

int main() {
	int n, i, j, a, brojac = 0;
	char c;
	char memorija[100][8];
	scanf("%d\n", &n);

	scanf("|");

	for (i = 0; i < n; i++) {
		for (j = 0; j < 8; j++) {
			scanf("%c", &c);
			memorija[i][j] = c;
		}
		scanf("|");
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		brojac += check(memorija[i], a);
	}

	printf("%d\n", brojac);

	return 0;
}