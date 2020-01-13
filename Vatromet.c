#include <stdio.h>
#include <math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

/*
IT'S THE FINAL COUNTDOWN
dududu duuuu
dududu du duuu
DUDUDU DUUUU
DUDUDUDU DU DU DU DUUU
*/

int sljedeci(int n) {
	int next = 0, i = 0, num;
	while (n > 0) {
		num = n % 10;
		if (num != 0) {
			next += (num - 1) * pow(10, i);
			i++;
		}
		n /= 10;
	}
	return next;
}

void countdown(int n) {
	printf("%d\n", n);
	while(n > 0) {
		n = sljedeci(n);
		printf("%d\n", n);	
	}
}

int main() {
	int n;
	scanf("%d\n", &n);

	countdown(n);

	return 0;
}