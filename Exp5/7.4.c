#include <stdio.h>
#include <stdlib.h>

int LCM(int, int);

int main() {
    int a, b;
    printf("Input a b:");
    scanf("%d%d", &a, &b);
    printf("LCM = %d", LCM(a, b));
    system("pause");
    return 0;
}

//LCM�������ܣ�����ٷ�������������������С������
int LCM(int a, int b) {
    if (a < b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    for (int i = 2; i > 0; ++i) {
        if (a * i % b == 0)
            return a * i;
    }
}