#include <stdio.h>
#include <math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

struct bakterija {
	char p1;
	char p2;
	char p3;
	char p4;
};

int main() {
	int i, n, m, a, b;
	struct bakterija petrijevka[10];
	scanf("%d %d\n", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%c %c %c %c\n", &petrijevka[i].p1, &petrijevka[i].p2, &petrijevka[i].p3, &petrijevka[i].p4);
	}

	for (i = 0; i < m; i++) {
		scanf("%d %d\n", &a, &b);
		a--; b--;		

		if (petrijevka[a].p1 == '/') {
			petrijevka[a].p1 = petrijevka[b].p1;
		}
		if (petrijevka[a].p2 == '/') {
			petrijevka[a].p2 = petrijevka[b].p2;
		}
		if (petrijevka[a].p3 == '/') {
			petrijevka[a].p3 = petrijevka[b].p3;
		}
		if (petrijevka[a].p4 == '/') {
			petrijevka[a].p4 = petrijevka[b].p4;
		}

		if (petrijevka[b].p1 == '/') {
			petrijevka[b].p1 = petrijevka[a].p1;
		}
		if (petrijevka[b].p2 == '/') {
			petrijevka[b].p2 = petrijevka[a].p2;
		}
		if (petrijevka[b].p3 == '/') {
			petrijevka[b].p3 = petrijevka[a].p3;
		}
		if (petrijevka[b].p4 == '/') {
			petrijevka[b].p4 = petrijevka[a].p4;
		}
	}

	for (i = 0; i < n; i++) {
		printf("%c %c %c %c\n", petrijevka[i].p1, petrijevka[i].p2, petrijevka[i].p3, petrijevka[i].p4);
	}

	return 0;
}