// Created by VoidEmpty on 2023/3/9.
#include <stdio.h>
#include <stdlib.h>

void InputArray(int *p, int m, int n);

int FindMax(int *p, int m, int n, int *pRow, int *pCol);

int main() {
    int a[10][10], m, n, row, col, max;
    printf("������������к���:");
    scanf("%d %d", &m, &n);
    InputArray(a, m, n);
    max = FindMax(a, m, n, &row, &col);
    printf("��������ֵ�ǣ�%d\n�±�Ϊa[%d][%d]\n", max, row, col);
    system("pause");
    return 0;
}

void InputArray(int *p, int m, int n) {
    printf("�������������ݡ�����\n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", p + i * n + j);
        }
    }
}

//�������ֵ��ͨ��ָ������޸��±�����Ĵ�С
int FindMax(int *p, int m, int n, int *pRow, int *pCol) {
    int max = *p;
    *pRow = 0, *pCol = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (*(p + i * n + j) > max) {
                max = *(p + i * n + j);
                *pRow = i;
                *pCol = j;
            }
        }
    }
    return max;
}

