#include <stdio.h>
#include <string.h>

//���ڿ� ��ġ��
void my_strcat(char *pa, char *pb)
{
	//�迭 pa�� ���� ���� �ƴҶ����� pa(�ּҰ�)�� 1�� ������Ŵ
	while (*pa != '\0')
	{
		pa++;
	}

	//pa�� null��ġ�� pb���� ���� pa,pb 1�������ϰ� �������� �ι��� ����
	while (*pb != '\0')
	{
		*pa = *pb;
		pa++;
		pb++;
	}
	*pa = '\0';
}

//���ڿ� ���ڼ� ����
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
	char a[80] = "�ȳ�";
	char b[80] = "�ϼ���";

	puts(a);
	puts(b);

	my_strcat(a, b);
	my_strlen(b);
	printf("������ ���ڿ� : %s\n", a);
	printf("%s�� ���ڼ� : %d\n",a,my_strlen(a));
}