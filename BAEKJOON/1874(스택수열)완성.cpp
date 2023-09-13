#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

//https://www.acmicpc.net/problem/1874


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
	
	
	cin >> n;
	
	vector<char> resultV;
	vector<int> vector(n,0);
	stack<int> stack;
	int num = 1;
	bool result = true;

	//����ڿ��� n����ƴ�� ������ �Է¹ޱ�
	for (int i = 0; i < n; i++)
	{
		cin >> vector[i];
	}

	for (int i = 0; i < vector.size(); i++)
	{
		int su = vector[i]; //���� ������ ���� su�� ����
		
		 
		if (su >= num) //������ ���� num�� ���� ������������ push 
		{
			while (su >= num)
			{
				stack.push(num++);
				resultV.push_back('+');
			}
			stack.pop();
			resultV.push_back('-');
		}
		
		// ���� ������ < num : pop�� �����Ͽ� ���� ������
		else
		{
			int n = stack.top();
			stack.pop();

			//������ �������� ���� �������ϴ� ������ ������ ũ�ٸ� ��� �Ұ�
			if (n > su) 
			{
				cout << "NO" << "\n";
				result = false;
				break;
			}
			else
			{
				resultV.push_back('-');
			}
		}	
	}

	//������
	if (result)
	{
		for (int i = 0; i < resultV.size(); i++)
		{
			//endl�� �޸𸮿뷮�� ���������ؼ� �����Ͻð��þ 
			cout << resultV[i] << "\n";
		}
	}

	return 0;
}