#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
int tt(char a);

int main()
{
	//ABC = 65~67 3sec
	//DEF = 68~70 4sec
	//GHI = 71~73 5sec
	//JKL = 74~76 6sec
	//MN0 = 77~79 7sec
	//PQRS = 80~83 8sec
	//TUV = 84~86 9sec
	//WXYZ = 87~90 10sec

	char input[50] = "";
	int sec = 0;

	fgets(input,sizeof(input), stdin);
	
	//printf("%d\n", input[0]);
	//printf("%s\n", input);

	for (int i = 0; i<strlen(input)-1; i++)
	{	
		sec += tt(input[i]);	
	}

	printf("%d\n", sec);

	
	return 0;
}

int tt(char a)
{	
	if(65 <= a && a <= 67)
		return 3;
	
	if (68 <= a && a <= 70)
		return 4;
		
	if (71 <= a && a <= 73)
		return 5;
		
	if (74 <= a && a <= 76)
		return 6;

	if (77 <= a && a <= 79) 
		return 7;

	if (80 <= a && a <= 83) 
		return 8;
		
	if (84 <= a && a <= 86) 
		return 9;

	if (87 <= a && a <= 90) 
		return 10;
}