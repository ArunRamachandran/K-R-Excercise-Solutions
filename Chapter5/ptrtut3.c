#include<stdio.h>

char strA[80] = "A string is to be used for demonstration purposes";
char strB[80];

int main(void)
{
	
	char *pA;
	char *pB;
	puts(strA);
	pA = strA;
	puts(pA);
/*	putchar(*pA);*/ 
	pB = strB;
	putchar('\n');
	while ( *pA != '\0') {
		*pB++ = *pA++;
	}
	*pB = '\0';
	puts(strB);
	return 0;
}
