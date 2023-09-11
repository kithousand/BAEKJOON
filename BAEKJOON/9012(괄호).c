#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ��ȣ ���ڿ��� ���ϴ� �Լ�
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
                return 1;  // ��ȣ ����ġ
            }
        }
    }

    if (cnt1 == cnt2) {
        return 0;  // �ùٸ� ��ȣ
    }
    else {
        return 1;  // ��ȣ ����ġ
    }
}

int main() {
    int n;  // n�� �Է��� ���ڿ��� ����
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
