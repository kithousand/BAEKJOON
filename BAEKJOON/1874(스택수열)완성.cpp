#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

//https://www.acmicpc.net/problem/1874


//stack.push(데이터) : 스택에 데이터 추가
//stack.pop() : 스택의 top 데이터 삭제
//stack.top() : 스택의 top 값 반환
//stack.size() : 스택의 사이즈 반환
//stack.empty() : 스택이 비어있는지 확인
//stack.swap(stack1,stack2) : 스택1과 스택2 바꿈

//사용자에게 n을 입력받고 n개만큼의 수열을 입력받는다
//스택에 push는 오름차순으로 들어간다
//push연산을 하면 '+', pop연산을 하면 '-' 출력

int main()
{
	int n;
	
	
	cin >> n;
	
	vector<char> resultV;
	vector<int> vector(n,0);
	stack<int> stack;
	int num = 1;
	bool result = true;

	//사용자에게 n개만틈의 수열을 입력받기
	for (int i = 0; i < n; i++)
	{
		cin >> vector[i];
	}

	for (int i = 0; i < vector.size(); i++)
	{
		int su = vector[i]; //현재 수열의 수를 su에 저장
		
		 
		if (su >= num) //수열의 수와 num의 값과 같아질때까지 push 
		{
			while (su >= num)
			{
				stack.push(num++);
				resultV.push_back('+');
			}
			stack.pop();
			resultV.push_back('-');
		}
		
		// 현재 수열값 < num : pop을 수행하여 원소 꺼내기
		else
		{
			int n = stack.top();
			stack.pop();

			//스택의 가장위의 수가 만들어야하는 수열의 수보다 크다면 출력 불가
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

	//결과출력
	if (result)
	{
		for (int i = 0; i < resultV.size(); i++)
		{
			//endl은 메모리용량을 많이차지해서 컴파일시간늘어남 
			cout << resultV[i] << "\n";
		}
	}

	return 0;
}