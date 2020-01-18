#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

typedef struct {
	int alfa;
	int beta;
	int gama;
	char type;
} trokut;

int vibecheck(trokut t) {
	return t.alfa + t.beta + t.gama == 180;
}

int main() {
	int i, c = 0;
	char ans[3];
	trokut t[3];

	for (i = 0; i < 3; i++) {
		scanf("%c\n", &ans[i]);
		scanf("%d %d %d\n", &t[i].alfa, &t[i].beta, &t[i].gama);
		if (t[i].alfa + t[i].beta + t[i].gama == 180) {
			if (t[i].alfa == 90 || t[i].beta == 90 || t[i].gama == 90) {
				t[i].type = 'P';
			} else if (t[i].alfa > 90 || t[i].beta > 90 || t[i].gama > 90) {
				t[i].type = 'T';
			} else {
				t[i].type = 'S';
			}
		} else {
			t[i].type = 'N';
		}
		if (ans[i] == t[i].type) {
			c++;
		}
	}

	printf("Prvi trokut je vrste: %c\n", t[0].type);
	printf("Drugi trokut je vrste: %c\n", t[1].type);
	printf("Treci trokut je vrste: %c\n\n", t[2].type);
	printf("Sreckov broj tocnih rjesenja: %d", c);

	return 0;
}