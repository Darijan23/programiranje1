#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	int a, b, c;
	float d;
	scanf("%d %d %d", &a, &b, &c);
	d = pow(b, 2) - 4*a*c;
	DEBUG("%f\n", d);
	if (d > 0) {
		printf("%.1f\n%.1f", ((-b-sqrt(d))/(2.0*a)), ((-b+sqrt(d))/(2.0*a)));
	} else if (d == 0) {
		printf("%.1f\n", (-b/(2.0*a)));
	} else {
		printf("%.1f + %.1fi\n", (-b/(2.0*a)), (sqrt(fabsf(d))/(2.0*a)));
		printf("%.1f - %.1fi", (-b/(2.0*a)), (sqrt(fabsf(d))/(2.0*a)));
	}
	return 0;
}