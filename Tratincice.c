#include<stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() 
{
	char c, vrt[10][10];
	int n, m, i, j, k, l;
	scanf("%d %d\n", &n, &m);

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%c", &c);
			vrt[i][j] = c;
		} 
		scanf("\n");
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (vrt[i][j] == 'S') {
				for (k = -1; k < 2; k++) {
					for (l = -1; l < 2; l++) {
						if (i+k < n && i+k >= 0 && j+l < m && j+l >= 0) {
							if (vrt[i+k][j+l] != 'S') {
								vrt[i+k][j+l] = 'T';
							}
						}
					}
				}
			}
		} 
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%c", vrt[i][j]);
		} 
		printf("\n");
	}
	
	return 0;
}
