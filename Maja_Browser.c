#include<stdio.h>

#ifndef DEBUG
#define DEBUG(...)printf(_VA_ARGS_)
#endif

int main() 
{
	int n;
	char c1, c2, c3, c4;

  scanf("%d\n%c %c %c %c", &n, &c1, &c2, &c3, &c4);

	if(n == 1)
	{
		switch(c2) {
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
	}

   if(n == 2)
	{
		switch(c2) {
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