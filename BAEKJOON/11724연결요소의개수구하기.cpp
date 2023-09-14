#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <string>
#include <time.h>
using namespace std;

//https://www.acmicpc.net/problem/11724



vector<vector <int>> A;
vector<bool> visited;
void DFS(int v);

int main()
{
	int N, M;
	
	cin >> N >> M;

	visited = vector<bool>(N + 1, false);
	A.resize(N + 1); //정점은 1부터 시작하기때문에 하나늘려줌
	

	for (int i = 0; i < M; i++)
	{
		int s, e;
		cin >> s >> e;
		A[s].push_back(e);
		A[e].push_back(s);
	}

	int count = 0;

	for (int i = 1; i < N + 1; i++)
	{
		if (!visited[i])
		{
			count++;
			DFS(i);
		}
	}

	cout << count << "\n";

}

void DFS(int v)
{
	if(visited[v])
	{
		return;
	}

	visited[v] = true;

	for(int i : A[v])
	{
		if (visited[i] == false) 
		{
			DFS(i);
		}
	}
}