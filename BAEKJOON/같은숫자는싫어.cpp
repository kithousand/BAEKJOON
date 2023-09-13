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


vector<int> solution(vector<int> arr)
{   
	vector<int> answer; 

	if (arr.size() == 0) {
		return arr;
	}
	
	answer.push_back(arr[0]);
	
	for (int i = 1; i < arr.size()-1; i++)
	{
		if (arr[i] != answer.back())
		{
			answer.push_back(arr[i + 1]);
		}
		else
		{
			continue;
		}
		
		
	}
	return answer;
}



int main()
{
	vector<int> hi = {15,15,15,15,15,14,13,12,2,2,2,2,2,2,0,1};
	
	hi = solution(hi);

	for (int i = 0; i < hi.size(); i++)
	{
		cout << hi[i] << "\n";
	}


	return 0;
}