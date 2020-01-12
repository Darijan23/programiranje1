#include <stdio.h>
#include <math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	float x0, x1, xp, a, b, c, d, e, f, f0, f1;
	int i, n, pr = 1;
	scanf("%f %f\n", &x0, &x1);
	scanf("%f %f %f %f %f %f\n", &a, &b, &c, &d, &e, &f);
	scanf("%d\n", &n);
	f0 = a * pow(x0, 5) + b * pow(x0, 4) + c * pow(x0, 3) + d * pow(x0, 2) + e * x0 + f; 
	f1 = a * pow(x1, 5) + b * pow(x1, 4) + c * pow(x1, 3) + d * pow(x1, 2) + e * x1 + f;

	if (f0 * f1 >= 0.0) {
			printf("DOU");
			pr = 0;
		} else {
			for (i = 0; i < n; i++) {
				f0 = a * pow(x0, 5) + b * pow(x0, 4) + c * pow(x0, 3) + d * pow(x0, 2) + e * x0 + f; 
				f1 = a * pow(x1, 5) + b * pow(x1, 4) + c * pow(x1, 3) + d * pow(x1, 2) + e * x1 + f;
				xp = x1;
				x1 = x1 - f1 * (x1 - x0)/(f1 - f0);
				x0 = xp;
				pr += 1;				
			}
		}

	if (pr) {
		printf("%.5f", x0);
	}
}