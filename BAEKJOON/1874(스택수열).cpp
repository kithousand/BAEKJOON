#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

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