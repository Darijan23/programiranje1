#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

void pldrm(char input[], int dul) {
	int i, uvjet = 1;
	char rev[dul];

	for (i = 0; i < dul; i++) {
		rev[dul-i-1] = input[i];
	}

	for (i = 0; i < dul; i++) {
		if (input[i] != rev[i]) {
			uvjet = 0;
			break;
		}
	}

	if (uvjet) {
		printf("DA\n");
	} else {
		printf("NE\n");
	}

}

int main() {
	int i, j, len, n, a, b, c;
	char string[30];
	char substring[30];
	scanf("%d\n", &len);
	for (i = 0; i < len; i++) {
		scanf("%c", &string[i]);
	}

	scanf("\n");

	scanf("%d\n", &n);

	for (i = 0; i < n; i++) {
		scanf("%d %d\n", &a, &b);
		c = 0;
		for (j = a; j <= b; j++) {
			substring[c] = string[j-1];
			c++;
		}
		len = b-a+1;
		pldrm(substring, len);
	}
	return 0;
}