#include<stdio.h>
#include<math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main()
{
	int n, par = 0, nepar = 0, c = 1, z;
	scanf("%d\n", &n);
	while (n > 0) {
		z = n % 10;
		if ((z % 2 == 0) && (c % 2 == 0)) {
			par += z;
		} else if ((z % 2 != 0) && (c % 2 != 0)) {
			nepar += z;
		}
		c++;
		n /= 10;
	}
	printf("%d\n%d", par, nepar);
    return 0;
}