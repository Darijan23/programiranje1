#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

typedef struct {
	char b;
	char c;
	int j;
} slicica;

int main() {
	int n, i, c = 0;
	slicica kolekcija[25];
	slicica nova;
	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%c %c %d\n", &kolekcija[i].b, &kolekcija[i].c, &kolekcija[i].j);
	}
	scanf("%c %c %d", &nova.b, &nova.c, &nova.j);

	for (int i = 0; i < n; i++) {
		if (nova.b == kolekcija[i].b && nova.c == kolekcija[i].c && nova.j == kolekcija[i].j) {
			c++;
		}
	}

	if (c) {
		printf("%d", c);
	} else {
		printf("Unikat");
	}

	return 0;
}