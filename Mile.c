#include <stdio.h>
#include <math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

double sum(int x, int n) {
	double f = 0.0;
	int i;
	for (i = 0; i <= n; i++) {
		f += pow(x, i);
	}
	return f;
}

double den(int x){
	return pow(x, 2) + x;
}

void sol(long unsigned int br, int nz) {
	printf("%.0lf", br/(double)nz);
}

int main() {
	int x, n;
	scanf("%d %d", &x, &n);
	sol(sum(x, n), den(x));
	return 0;
}