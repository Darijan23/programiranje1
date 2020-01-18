#include <stdio.h>
#include <math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

struct iglu {
	int x;
	int y;
	int r;
};


int isect(int x1, int y1, int r1, int x2, int y2, int r2) {
	float d = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
	return d < r1+r2;
}


int main() {
	int i, j, n, c = 0, uvjet;
	struct iglu pleme[100];
	int odobreno[100];

	scanf("%d\n", &n);

	for (i = 0; i < n; i++) {
		scanf("%d %d %d\n", &pleme[i].r, &pleme[i].x, &pleme[i].y);
		odobreno[i] = 0;
		uvjet = 1;
		for (j = 0; j < i; j++) {
			if (odobreno[j] && isect(pleme[i].x, pleme[i].y, pleme[i].r, pleme[j].x, pleme[j].y, pleme[j].r)) {
				uvjet = 0;
				break;
			}
		}

		if (uvjet) {
			c++;
			odobreno[i] = 1;
		}
	}

	printf("%d", c);

	return 0;
}