#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(_VA_ARGS_)
#endif

int main() {
	int h, w, x, y;
	scanf("%d %d %d %d", &h, &w, &x, &y);
	printf("%d %d", h*x/100, w*y/100);
	return 0;
}