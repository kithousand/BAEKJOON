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

//���ڿ�������
void reverse_str(char *a)
{
	int start = 0;
	int end = strlen(a)-1;

	while (start<end)
	{
		char temp;
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}

	printf("%s", a);
	
}


int main()
{
	int count = 0;
	char a[80] = "ice";
	char b[80] = "hihi";
	//char* a = "ice";
	//char* b = "cream";

	char* dd;
	dd = a;
	char* bb;
	bb = b;

	//puts(a);
	//puts(b);

	//my_strcat(dd, bb);
	//my_strlen(bb);
	//printf("������ ���ڿ� : %s\n", dd);
	//printf("%s�� ���ڼ� : %d\n",dd,my_strlen(dd));

	reverse_str(a);
}