#include <stdio.h>
#include <math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

struct odgovor {
	int ans;
	int val;
};

int main() {
	int i, mon = 0;
	struct odgovor pitanja[15];
	struct odgovor odgovori[15];
	for (i = 0; i < 15; ++i) {
		scanf("%d ", &pitanja[i].ans);
		pitanja[i].val = i*500;
	}

	for (i = 0; i < 15; ++i) {
		scanf("%d ", &odgovori[i].ans);
		odgovori[i].val = i*500;
		if (odgovori[i].ans == pitanja[i].ans) {
			mon += odgovori[i].val;
		} else {
			break;
		}
	}

	printf("%d", mon);

	return 0;
}