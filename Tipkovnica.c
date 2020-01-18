#include <stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int in(char c, char string[], int n) {
	int i, u = 0;
	for (i = 0; i < n; i++) {
		if (string[i] == c) {
			u = 1;
			break;
		}
	}
	return u;
}

int finger(char c, char keymap[8][9]) {
	int i;
	for (i = 0; i < 8; i++) {
		if (in(c, keymap[i], sizeof(keymap[i])/sizeof(keymap[i][0]))) {
			break;
		}
	}
	return i;
}

int main() {
	int n, i;
	char input[50];
	char keys[][9] = {
		{'1', 'Q', 'A', 'Z'},                       //L4
		{'2', 'W', 'S', 'X'}, 					    //L3
		{'3', 'E', 'D', 'C'}, 					    //L2
		{'4', 'R', 'F', 'V', '5', 'T', 'G', 'B'},   //L1
		{'6', 'Y', 'H', 'M', '7', 'U', 'J', 'N'},   //R1
		{'8', 'I', 'K', ','},       	            //R2
		{'9', 'O', 'L', '.'},      	                //R3
		{'0', 'P', ';', '/', '-', '[', ']', '=', '\''}    //R4
	};

	int fingers[] = {0, 0, 0, 0, 0, 0, 0, 0};


	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%c", &input[i]);
	}

	for (i = 0; i < n; i++) {
		fingers[finger(input[i], keys)]++;
	}

	for (i = 0; i < 8; i++) {
		printf("%d\n", fingers[i]);
	}
	return 0;
}