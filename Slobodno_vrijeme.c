#include <stdio.h>
#include <math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

typedef struct {
	int h;
	int m;
	int s;
} time;

typedef struct {
	time strt;
	time end;
	char mtry;
} class;

time diff(time t1, time t2) {
	int tot1 = t1.h * 3600 + t1.m * 60 + t1.s, tot2 = t2.h * 3600 + t2.m * 60 + t2.s;
	int tot = tot2 - tot1;
	time delta;
	delta.h = tot / 3600;
	tot -= delta.h * 3600;
	delta.m = tot / 60;
	tot -= delta.m * 60;
	delta.s = tot;

	return delta;
}


int main() {
	int i, n;
	class day[10];
	time free;
	free.h = 24;
	free.m = 00;
	free.s = 00;

	scanf("%d\n", &n);

	for (i = 0; i < n; i++) {
		scanf("%d %d %d %d %d %d %c\n", 
				&day[i].strt.h, &day[i].strt.m, &day[i].strt.s, 
				&day[i].end.h, &day[i].end.m, &day[i].end.s, 
				&day[i].mtry);
		if (day[i].mtry == 'O') {
			free = diff(diff(day[i].strt, day[i].end), free);
		}
	}

	printf("%d %d %d", free.h, free.m, free.s);

	return 0;
}