#include<stdio.h>
#include<math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main()
{
	int m, n, i;
	scanf("%d %d\n", &m, &n);
	for (i = 0; i < n; i++) {
		m += (m%10) * pow(10, floor(log10(m))+1);
		m /= 10;
	}
	printf("%d\n", m);
    return 0;
}