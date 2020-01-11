#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

void pldrm(int n) {
	int i, c = 0, dul = 0, uvjet = 1;
	char a, izraz[1000];
	for (i = 0; i < n; i++) {
		scanf("%c", &a);
		if (a != ' ') {
			izraz[dul] = a;
			dul++;
		}
	}

	char rev[c];

	for (i = 0; i < dul; i++) {
		rev[dul-i-1] = izraz[i];
	}

	for (i = 0; i < dul; i++) {
		if (izraz[i] != rev[i]) {
			uvjet = 0;
			break;
		}
	}

	if (uvjet) {
		printf("PALINDROM\n");
	} else {
		printf("NIJE PALINDROM");
	}

}

int main() {
	int n;
	scanf("%d\n", &n);
	pldrm(n);
	return 0;
}