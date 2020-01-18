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
			//ova dva fora prolaze kroz polje i traže 'S'
			if (vrt[i][j] == 'S') {
				for (k = -1; k <= 1; k++) {
					for (l = -1; l <= 1; l++) {
						//nakon što nađe 'S', vrti od -1 do 1 po x i y (k i l) i to dodaje indeksu na kojem se nalazi 'S'
						if (i+k < n && i+k >= 0 && j+l < m && j+l >= 0) {   	//ovim ifom izbjegne granične slučajeve
							if (vrt[i+k][j+l] != 'S') { 						//ovim ifom ignoriramo stablo
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
