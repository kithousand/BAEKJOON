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