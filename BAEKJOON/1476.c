#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int E = 0;
	int e = 0;
	
	
	int S = 0;
	int s = 0;
	
	
	int M = 0;
	int m = 0;
	
	
	int year = 0;

	scanf("%d %d %d", &E, &S, &M);


	while (1)
	{
		if (E == e && S == s && M == m)
			break;
		
		year++;
		e++;
		s++;
		m++;
		
		if (e >15)
		{
			e = 1;
		}
		if (s > 28)
		{
			s = 1;
		}
		if (m > 19)
		{
			m = 1;
		}
	}

	printf("%d\n", year);

	
	return 0;
}

