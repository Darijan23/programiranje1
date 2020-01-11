#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(_VA_ARGS_)
#endif

int main() {
	float o, b;
	scanf("%f %f", &o, &b);	
	printf("%f", o+b);
	return 0;
}