#include <stdio.h>
#include <math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

struct point{
	int x;
	int y;
};

float dist(struct point p1, struct point p2) {
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main() {
	int i;
	struct point pts[4];

	for (i = 0; i < 4; i++) {
		scanf("%d %d\n", &pts[i].x, &pts[i].y);
	}


	return 0;
}
