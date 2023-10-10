#include <stdio.h>
#include <string.h>

//문자열 합치기
void my_strcat(char *pa, char *pb)
{
	//배열 pa의 값이 널이 아닐때까지 pa(주소값)을 1씩 증가시킴
	while (*pa != '\0')
	{
		pa++;
	}

	//pa의 null위치에 pb값이 들어가고 pa,pb 1씩증가하고 마지막에 널문자 삽입
	while (*pb != '\0')
	{
		*pa = *pb;
		pa++;
		pb++;
	}
	*pa = '\0';
}

//문자열 글자수 세기
int my_strlen(char* pa)
{
	int cnt = 0;
	while (*pa)
	{
		pa++;
		cnt++;
	}
	return cnt;
}


int main()
{
	int count = 0;
	char a[80] = "안녕";
	char b[80] = "하세요";

	puts(a);
	puts(b);

	my_strcat(a, b);
	my_strlen(b);
	printf("합쳐진 문자열 : %s\n", a);
	printf("%s의 글자수 : %d\n",a,my_strlen(a));
}