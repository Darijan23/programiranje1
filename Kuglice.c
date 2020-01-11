#include<stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main() 
{
	int kutije[10] = {0, 0, 0, 0, 0};
	int a, b, n1, n2, aiuto, i;
	scanf("%d %d\n", &a, &b);
	kutije[a-1] = 1;
	kutije[b-1] = 1;
	for (i = 0; i < 5; i++) {
		scanf("%d %d\n", &n1, &n2);
		aiuto = kutije[n1-1];
		kutije[n1-1] = kutije[n2-1];
		kutije[n2-1] = aiuto;
	}

	for (i = 0; i < 10; i++) {
		if (kutije[i]) {
				printf("%d ", i+1);
		}	
	}

	return 0;
}
