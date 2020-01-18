#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	char path[1000];
	int i, n, pos = 0, c = 0;
	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%c ", &path[i]);
	}

	while (pos >= 0 && pos < n) {
		switch (path[pos]) {
			case ('#'):
				pos += c + 2;
				break;

			case ('B'):
				path[pos] = 'I';
				c++;
				pos--;
				break;

			case ('Z'):
				c = 0;
				pos = -1;
				break;

			case ('I'):
				pos = -1;
				break;
		}
	}

	printf("%d", c);

	return 0;
}
