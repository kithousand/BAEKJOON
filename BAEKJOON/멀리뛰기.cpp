#include <string>
#include <vector>

using namespace std;

//피보나치수열

long long solution(int n) {
    long long answer = 0;
    long long n0 = 1;
    long long n1 = 2;
    if (n == 1)
    {
        return 1;
    }

    else if (n == 2)
    {
        return 2;
    }


    for (int i = 3; i <= n; ++i)
    {
        answer = n0 + n1;
        answer = answer % 1234567;
        n0 = n1;
        n1 = answer;
    }

    return answer;
}