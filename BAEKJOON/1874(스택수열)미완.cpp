#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

//stack.push(������) : ���ÿ� ������ �߰�
//stack.pop() : ������ top ������ ����
//stack.top() : ������ top �� ��ȯ
//stack.size() : ������ ������ ��ȯ
//stack.empty() : ������ ����ִ��� Ȯ��
//stack.swap(stack1,stack2) : ����1�� ����2 �ٲ�

//����ڿ��� n�� �Է¹ް� n����ŭ�� ������ �Է¹޴´�
//���ÿ� push�� ������������ ����
//push������ �ϸ� '+', pop������ �ϸ� '-' ���

int main()
{
	int n;
	int a = 1;
	
	cin >> n;
	vector<int> sort_vector;
	vector<int> vector(n,0);
	
	stack<int> stack;

	for (int i = 0; i < n; i++)
	{
		cin >> vector[i];
	}
	 
	sort_vector = vector;

	sort(sort_vector.begin(), sort_vector.end());

	for (int i = 0; i < vector.size(); i++)
	{
		cout << vector[i] << ' ';
	}

	cout << endl;

	for (int i = 0; i < vector.size(); i++)
	{
		cout << sort_vector[i] << ' ';
	}

	



	
	






	return 0;
}