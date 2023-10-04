#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    
    vector<long long> answer;
    
    int cnt = x;
    
    answer.push_back(x);

    for (int i = 0; i < n - 1; i++)
    {
        x = x + cnt;
        answer.push_back(x);
    }
    return answer;
}