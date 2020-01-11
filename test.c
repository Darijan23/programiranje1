#include <stdio.h>
#include <math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	printf("%d %d %d\n", 2%5, 1%5, (-1)%5);
}