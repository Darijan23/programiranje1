#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	int brojevi[50];
	int i, a, n, br = 0, dul = 0, pos = 0, uvjet = 1;
	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%d ", &a);
		DEBUG("%d ", a);
		brojevi[i] = a;
	}
	DEBUG("\n");

	while ((pos < n) && uvjet && (br < 500)) {
		DEBUG("%d Uvjet\n", pos);
		for (i = pos+1; i < n; i++) {
			DEBUG("%d ", brojevi[i]);
			if (brojevi[i] % 2 == 0) {
				DEBUG("Paran\n");
				if (i-pos >= dul) {
					dul = i-pos;
				}
				if (brojevi[pos+1] % 2 != 0) {
					uvjet = 0;
					break;
				} else {
					pos = i+1;
					br++;
					uvjet = 1;
					break;
				}
			} else {
				DEBUG("Neparan\n");
				uvjet = 0;
			}
		}
	}

	if (brojevi[n-1] % 2) {
		br *= 2;
	}

	printf("%d %d\n", dul, br);
	return 0;
}
