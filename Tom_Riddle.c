#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int charin(char c, char popis[], int n) {
	int stanje = 0;
	for (int i = 0; i < n; ++i) {
		if (c == popis[i]) {
			stanje++;
		}
	}
	return stanje;
}


int main() {
	int n, m, i, j, b1 = 0, b2 = 0, uvjet;
	scanf("%d %d\n", &n, &m);
	char c;
	char str1[50];
	char str2[50];

	for (i = 0; i < n; ++i)	{
		scanf("%c", &c);
		if (c != ' ') {
			str1[b1] = c;
			b1++;
		}
	}

	scanf("\n");

	for (i = 0; i < m; ++i)	{
		scanf("%c", &c);
		if (c != ' ') {
			str2[b2] = c;
			b2++;
		}
	}

	for (i = 0; i < b1; ++i) {
		if (charin(str1[i], str1, b1) == charin(str1[i], str2, b2)) {
			uvjet = 1;			
		} else {
			uvjet = 0;
			break;
		}	
	}

	for (i = 0; i < b2; ++i) {
		if (charin(str2[i], str1, b1) == charin(str2[i], str2, b2)) {
			uvjet = 1;			
		} else {
			uvjet = 0;
			break;
		}	
	}

	if (uvjet) {
		printf("Liquid Luck\n");
	} else {
		printf("Mandrake\n");
	}

	return 0;
}