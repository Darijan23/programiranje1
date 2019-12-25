#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(_VA_ARGS_)
#endif

int main() {
	int g, v;
	float p;
	scanf("%d %f %d", &g, &p, &v);
	printf("%f", p*g*v/100);
	return 0;
}