#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG(...)printf(_VA_ARGS_)
#endif

int main() {
	int a, b, c, d, r1, r2, r3, r4;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	r1 = (a+b)*(c-d);
	r2 = (b+c)*(d-a);
	r3 = (c+d)*(a-b);
	r4 = (d+a)*(b-c);
	if (r1 > r2 && r1 > r3 && r1 > r4) {
		printf("%d %d %d %d", a, b, c, d);
	} else if (r2 > r1 && r2 > r3 && r2 > r4) {
		printf("%d %d %d %d", b, c, d, a);
	} else if (r3 > r1 && r3 > r2 && r3 > r4) {
		printf("%d %d %d %d", c, d, a, b);
	} else {
		printf("%d %d %d %d", d, a, b, c);
	}
	return 0;
}