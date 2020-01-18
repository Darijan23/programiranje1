#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

struct karton {
	int sif;
	float c;
	char s;
	int br;
};

int main() {
	int i, n, curr, min = 0, minind;
	struct karton pacijenti[100];
	scanf("%d %d\n", &n, &curr);
	for (i = 0; i < n; i++) {
		scanf("%d %f %c %d\n", &pacijenti[i].sif, &pacijenti[i].c, &pacijenti[i].s, &pacijenti[i].br);
	}

	for (i = 0; i < n; i++) {
		if (pacijenti[i].br >= curr) {
			min = pacijenti[i].br;
			break;
		}
	}

	for (i = 0; i < n; i++) {
		if (pacijenti[i].br >= curr && pacijenti[i].br <= min) {
			min = pacijenti[i].br;
			minind = i;
		}
	}

	min = minind;

	printf("Sifra: %d\nCijena: %f\nSpol: %c\nBroj: %d", pacijenti[min].sif, pacijenti[min].c, pacijenti[min].s, pacijenti[min].br);

	return 0;
}