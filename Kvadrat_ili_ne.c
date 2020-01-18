//Ne prolaze dva test primjera

#include <stdio.h>
#include <math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

typedef struct{
	int x;
	int y;
} point;

float dist(point p1, point p2) {
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main() {
	int i, indiag; //indiag je indeks udaljenosti dijagonale
	float lens[3], diag = 0.0, sum = 0.0;
	point pts[4];

	for (i = 0; i < 4; i++) {
		scanf("%d %d\n", &pts[i].x, &pts[i].y);
	}

	for (i = 0; i < 3; i++) {
		lens[i] = dist(pts[0], pts[i]);
		if (dist(pts[0], pts[i]) > diag) {
			diag = dist(pts[0], pts[i]);
			indiag = i;
		}
	}

	for (i = 0; i < 3; i++) {
		if (i != indiag) {
			sum += pow(lens[i], 2);
		}
	}

	if (round(pow(diag, 2)) == round(sum)) {
		printf("Kombiniram kvadrat");
	} else {
		printf("Ne kombiniram");
	}


	return 0;
}
