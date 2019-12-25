#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG(...)printf(_VA_ARGS_)
#endif

int main() {
	int n;
	char l, c1, c2, r;
	scanf("%d", &n);
	if (n == 1) {
		scanf("\n%c%c%c", &l, &c1, &r);
		switch (c1) {
			case 'a':
				printf("link");
				break;

			case 'b':
				printf("bold");
				break;

			case 'i':
				printf("italic");
				break;

			case 'u':
				printf("underline");
				break;

			case 's':
				printf("strong");
				break;
		}
	} else {
		scanf("\n%c%c%c%c", &l, &c1, &c2, &r);
		switch (c1) {
			case 'b':
				printf("novi red");
				break;

			case 'h':
				printf("horizontalna crta");
				break;

			case 'e':
				printf("emphasised");
				break;
		}
	}
	return 0;
}