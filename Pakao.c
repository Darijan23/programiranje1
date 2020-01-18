#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() {
	float artikli[3][4];
	float cijene[3][4];
	int kupljeno[4] = {0, 0, 0, 0};
	int u = 1;
	int l = 0;
	float b;

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 4; ++j) {
			scanf("%f %f ", &artikli[i][j], &cijene[i][j]);
		}
	}
	scanf("\n %f", &b);

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 4; ++j){
			if (artikli[i][j] > 50 && cijene[i][j] <= b && kupljeno[j] == 0) {
				kupljeno[j] = 1;
				l += artikli[i][j];
				b -= cijene[i][j];
			}
		}
	}

	for (int j = 0; j < 4; ++j){
		if (artikli[2][j] > 0 && cijene[2][j] <= b && kupljeno[j] == 0) {
			kupljeno[j] = 1;
				l += artikli[2][j];
				b -= cijene[2][j];
		}
	}

	if (b < 0) {
		printf("Ispadate"); //Ispao mi život porkoladro
	} else {
		for (int i = 0; i < 4; ++i) {
			if (kupljeno[i] == 0) {
				u = 0;
				break;
			}
		}
		if (u == 1) {
			printf("%d", l);
		} else {
			printf("Ispadate");
		}
	}
	return 0;
}