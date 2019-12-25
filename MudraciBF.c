#include <stdio.h>
#include <math.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	int m1 = 0, s1 = 0, m2 = 0, s2 = 0, m3 = 0, s3 = 0, m4 = 0, s4 = 0, m5 = 0, s5 = 0;
	int i, k;
	char m;
	scanf("%d ", &k);
	for (i = 0; i < k; i++) {
		scanf("%c\n", &m);
		switch (m) {
			case '1':
				s1 = 1;
				s2 = 0;
				s5 = 0;
				break;
			case '2':
				s2 = 1;
				s1 = 0;
				s3 = 0;
				break;
			case '3':
				s3 = 1;
				s2 = 0;
				s4 = 0;
				break;
			case '4':
				s4 = 1;
				s3 = 0;
				s5 = 0;
				break;
			case '5':
				s5 = 1;
				s1 = 0;
				s4 = 0;
				break;
		}
		m1 += s1;
		m2 += s2;
		m3 += s3;
		m4 += s4;
		m5 += s5;
	}

	printf("%d %d %d %d %d", m1, m2, m3, m4, m5);
    return 0;
}