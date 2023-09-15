#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;

    string num = to_string(n);

    vector<char> array(num.begin(), num.end());

    sort(array.rbegin(), array.rend());

    string sorted(array.begin(), array.end());

    answer = stoll(sorted);

    return answer;
}