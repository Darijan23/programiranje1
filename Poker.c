#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

typedef struct {
	char col;
	char val;
} card;

typedef struct {
	int pos;
	card c1;
	card c2;
} player;

int main() {
	int i;
	int par[] = {0, 0, 0, 0, 0, 0, 0};
	player table[7];

	for (i = 0; i < 3; ++i)	{
		scanf("%d\n%c %c\n%c %c ", &table[i].pos, &table[i].c1.col, &table[i].c1.val, &table[i].c2.col, &table[i].c2.val);
		if (table[i].c1.col == table[i].c2.col) {
			printf("Igrac na poziciji %d ima mogucnost: boja\n", table[i].pos);
		} else if (table[i].c1.val == table[i].c2.val) {
			printf("Igrac na poziciji %d ima mogucnost: par\n", table[i].pos);
		} else {
			printf("Igrac na poziciji %d ima mogucnost: nista\n", table[i].pos);
		}

		if (table[i].c1.val == table[i].c2.val) {
			par[i] = table[i].pos;
		}
	}

	printf("Par imaju igraci:");
	for (i = 0; i < 3; ++i) {
		if (par[i]) {
			printf(" %d", par[i]);
		}
	}
	return 0;
}