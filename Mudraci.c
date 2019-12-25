#include <stdio.h>
#include <math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	int mudraci[5] = {0, 0, 0, 0, 0};
	int mudrolije[5] = {0, 0, 0, 0, 0};
	int i, j, k, m;
	scanf("%d", &k);
	for (i = 0; i < k; i++) {
		scanf("%d\n", &m);
		m -= 1;
		//DEBUG("%d\n", m);
		mudraci[m] = 1;
		//Prekid zdesna
		if (m > 0) {
			mudraci[m-1] = 0;
			//DEBUG("%d\n", m-1);
		} else if (m == 0) {
			mudraci[4] = 0;
			//DEBUG("%d\n", 4);
		}
		//Prekid slijeva
		if (m < 4) {
			mudraci[m+1] = 0;
			//DEBUG("%d\n", m+1);
		} else if (m == 4) {
			mudraci[0] = 0;
			//DEBUG("%d\n", 0);
		}

		//Provjera po mudracima
		for (j = 0; j < 5; j++) {
			if (mudraci[j] == 1) {
				mudrolije[j] += 1;
			}
		}
	}

	for (i = 0; i < 5; i++) {
		printf("%d ", mudrolije[i]);
	}
    return 0;
}