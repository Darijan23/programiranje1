#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	float n, m, m0, m1;
	char i, t;
	scanf("%f %f %c %c", &n, &m, &i, &t);
	m0 = m;
	switch (i) {
		case 'p':
			m = pow(m, 2);
			break;
		case 'd':
			m /= 2.0;
			break;
		case 'a':
			m = fabsf(m);
			break;
		case 'o':
			m /= 7;
			break;
	}

	m1 = m;

	switch (t) {
		case 'p':
			m = pow(m, 2);
			break;
		case 'd':
			m /= 2.0;
			break;
		case 'a':
			m = fabsf(m);
			break;
		case 'o':
			m /= 7;
			break;
	}

	if (m > n)	{
		printf("JARE\n");
	} else {
		printf("PAJO\n");
	}

	if (m >= m0 && m >= m1) {
		printf("%.2f ", m);
		if (m > n) {
			printf("DA");
		} else {
			printf("NE");
		}
	} else if (m0 >= m && m0 >= m1) {
		printf("%.2f ", m0);
		if (m0 > n) {
			printf("DA");
		} else {
			printf("NE");
		}
	} else {
		printf("%.2f ", m1);
		if (m1 > n) {
			printf("DA");
		} else {
			printf("NE");
		}
	}

	return 0;
}