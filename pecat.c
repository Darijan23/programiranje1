#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	int t1, t2, t3, t, m, s;
	scanf("%d %d %d", &t1, &t2, &t3);
	t = t1 + t2 + t3;
	m = floor(t/60);
	s = (t-m*60);
	printf("%02d:%02d", m, s);
    return 0;
}