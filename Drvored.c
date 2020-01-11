#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(_VA_ARGS_)
#endif

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d", (n-1)*k);
	return 0;
}