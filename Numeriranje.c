#include<stdio.h>
#include<math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main()
{
	int n, zbr = 0, str = 1;
	scanf("%d\n", &n);
	while (zbr < n) {
		str++;
		zbr += floor(log10(str)) + 1;
	}
	printf("%d\n", str-1);
    return 0;
}