#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

typedef struct {
	int id;
	char car;
} student;

int win(student a, student b) {
	int v;
	if (a.car == 'S') {
		switch (b.car){
			case 'S':
			v = 0;
			break;

			case 'E':
			v = a.id;
			break;

			case 'P':
			return b.id;
			break;
		}

	} else if (a.car == 'E') {
		switch (b.car){
			case 'E':
			v = 0;
			break;

			case 'P':
			v = a.id;
			break;

			case 'S':
			v = b.id;
			break;
		}

	} else {
		switch (b.car){
			case 'P':
			v = 0;
			break;

			case 'S':
			v = a.id;
			break;

			case 'E':
			v = b.id;
			break;
		}
	}
	return v;
}


int main() {
	int n, m, p1, p2;
	student studenti[50];

	scanf("%d %d\n", &n, &m);

	for (int i = 0; i < n; ++i) {
		scanf("%d %c\n", &studenti[i].id, &studenti[i].car);
	}

	for (int i = 0; i < m; ++i) {
		scanf("%d %d\n", &p1, &p2);
		printf("Pobjednik je: %d\n", win(studenti[p1-1], studenti[p2-1]));
	}

	return 0;
}