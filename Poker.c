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
	int i, n;
	player table[7];
	scanf("%d\n", &n);

	for (i = 0; i < n; ++i)	{
		scanf("%d\n%c %c\n%c %c ", &table[i].pos, &table[i].c1.col, &table[i].c1.val, &table[i].c2.col, &table[i].c2.val);
	}

	return 0;
}