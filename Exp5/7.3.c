#include <stdio.h>
#include <stdlib.h>

int max(int, int); //��������
int main() {
    int a, b;
    printf("Please enter two number:");
    scanf("%d%d", &a, &b);
    printf("max = %d", max(a, b));
    system("pause");
    return 0;
}

//��������
int max(int a, int b) {
    return a > b ? a : b;
}
