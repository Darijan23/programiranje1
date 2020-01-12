#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(_VA_ARGS_)
#endif

int main() {
	int n;
	float a;
	scanf("%d %f", &n, &a);	
	printf("%f", n*a);
	return 0;
}