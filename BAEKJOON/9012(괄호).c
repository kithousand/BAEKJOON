#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 괄호 문자열을 평가하는 함수
int evaluateParentheses(char* input) {
    int cnt1 = 0, cnt2 = 0;
    size_t length = strlen(input);

    for (int i = 0; i < length; i++) {
        if (input[i] == '(') {
            cnt1++;
        }
        else {
            cnt2++;
            if (cnt2 > cnt1) {
                return 1;  // 괄호 불일치
            }
        }
    }

    if (cnt1 == cnt2) {
        return 0;  // 올바른 괄호
    }
    else {
        return 1;  // 괄호 불일치
    }
}

int main() {
    int n;  // n은 입력할 문자열의 개수
    scanf("%d", &n);

    for (int j = 0; j < n; j++) {
        char input[50];

        scanf("%s", input);

        int result = evaluateParentheses(input);

        if (result == 0) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}
