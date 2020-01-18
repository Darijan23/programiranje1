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
	int i, uvjet = 0;
	float lens[3];
	point pts[4];

	for (i = 0; i < 4; i++) {
		scanf("%d %d\n", &pts[i].x, &pts[i].y);
	}

	for (i = 0; i < 3; i++) {
		lens[i] = dist(pts[0], pts[i+1]);
	}


 	if (round(pow(lens[2], 2)) == round(pow(lens[0], 2) + pow(lens[1], 2))){
    	uvjet = 1;
 	}
 	if (round(pow(lens[1], 2)) == round(pow(lens[0], 2) + pow(lens[2], 2))){
    	uvjet = 1;
 	}
 	if (round(pow(lens[0], 2)) == round(pow(lens[1], 2) + pow(lens[2], 2))){
    	uvjet = 1;
  	}


	if (uvjet) {
		printf("Kombiniram kvadrat");
	} else {
		printf("Ne kombiniram");
	}


	return 0;
}
