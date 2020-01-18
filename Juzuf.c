//Jozefova matematika, da ne bude zabune

#include <stdio.h>
#include <math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

long unsigned int fak(int n) {
	long unsigned int f = 1;
	int i;
	for (i = 1; i <= n; i++) {
		f *= i;
	}
	return f;
}

int main() {
	int x, a, b, c;
	double z;
	scanf("%d %d %d %d", &x, &a, &b, &c);
	z = fak(x)/(double)(a*pow(x, 2) + b*x + c);
	printf("%.0lf", floor(z));
	return 0;
}