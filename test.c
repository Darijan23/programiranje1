#include <stdio.h>
#include <math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	int aaa[4] = {0, 0, 0, 1};
	printf("%d\n", aaa[4]);
	printf("%d\n", aaa[3]);
	aaa[5] = 16;
	printf("%d %d %lu\n", aaa[3], aaa[5], sizeof(aaa)/sizeof(aaa[0]));
}
