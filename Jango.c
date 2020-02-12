#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif


int zbroj(int a, int b) {
	int rez = b, i = 0;
	while (a > 0) {
		rez -= (b % 10) * pow(10, i);
		rez += ((b%10 + a%10)%10) * pow(10, i);
		a /= 10;
		b /= 10;
		i++;
	}
	return rez;
}


int main() {
	int n, zar = 0, pot = 0, iznos;
	char t;

	scanf("%d\n", &n);

	for (int i = 0; i < n; ++i) {
		scanf("%c %d\n", &t, &iznos);
		if (t == 'u') {
			zar = zbroj(iznos, zar);
		} else {
			pot = zbroj(iznos, pot);
		}
	}

	printf("%d\n%d", zar, pot);

	return 0;
}