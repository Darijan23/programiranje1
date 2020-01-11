#include<stdio.h>
#include<math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main()
{
	int k, a, b, o, nos = 1, t = 0, n = 0;
	char p, jd;
	scanf("%d\n", &k);
	while (nos < k) {
		scanf("%d%c%d%c%d\n", &a, &p, &b, &jd, &o);
		DEBUG("%d, %d %c %d %d\n", nos, a, p, b, o);
		switch (p) {
			case 'o':
				if ((a == 1 || b == 1) && o == 1) {
					t++;
					DEBUG("Tocno\n");
				} else if (a == 0 && b == 0 && o == 0) {
					t++;
					DEBUG("Tocno\n");
				} else {
					nos *= 2;
					n++;
					DEBUG("Netocno\n");
				}
				break;

			case 'a':
				if ((a == 0 || b == 0) && o == 0) {
					t++;
					DEBUG("Tocno\n");
				} else if (a == 1 && b == 1 && o == 1) {
					t++;
					DEBUG("Tocno\n");
				} else {
					nos *= 2;
					n++;
					DEBUG("Netocno\n");
				}
				break;
		}
	}

	printf("%d %d", t, n);
    return 0;
}