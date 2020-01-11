#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	int f1, b1, p1, f2, b2, p2, f3, b3, p3, f, b, p;
	scanf("%d %d %d %d %d %d %d %d %d", &f1, &b1, &p1, &f2, &b2, &p2, &f3, &b3, &p3);
	if (f1 >= f2 && f1 >= f3)	{
		f = f1;
		if (b2 >= b3) {
			b = b2;
			p = p3;
		} else {
			b = b3;
			p = p2;
		}
	} else if (f2 > f1 && f2 >= f3)	{
		f = f2;
		if (b1 >= b3) {
			b = b1;
			p = p3;
		} else {
			b = b3;
			p = p1;
		}
	} else if (f3 > f1 && f3 > f2)	{
		f = f3;
		if (b1 >= b2) {
			b = b1;
			p = p2;
		} else {
			b = b2;
			p = p1;
		}
	}

	printf("%d", f + b + p);
	return 0;
}