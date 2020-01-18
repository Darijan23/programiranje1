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

int isect(struct iglu i1,struct iglu i2) {
	float d = sqrt(pow(i1.x - i2.x, 2) + pow(i1.y -i2.y, 2));
	return d < i1.r + i2.r;
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
			if (odobreno[j] && isect(pleme[i], pleme[j])) {
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