// Created by VoidEmpty on 2022/12/6.
#include <stdio.h>
#include <stdlib.h>

#define N 50

void swap(int *a, int *b);

int main() {
    int n, a[N], b[N];

    // ��������ĳ���
    printf("�붨�������С��");
    scanf("%d", &n);

    // �����һ������
    printf("�������һ�������Ԫ��ֵ��\n");
    for (int i = 0; i < n; ++i) {
        printf("Input a[%d]:", i);
        scanf("%d", &a[i]);
    }

    // ����ڶ�������
    printf("������ڶ��������Ԫ��ֵ��\n");
    for (int i = 0; i < n; ++i) {
        printf("Input b[%d]:", i);
        scanf("%d", &b[i]);
    }

    // ������������
    printf("���潫��������������������...\n");
    for (int i = 0; i < n; ++i) {
        swap(&a[i], &b[i]);
    }

    // �����������
    printf("a[]:");
    for (int i = 0; i < n; ++i) {
        printf("%3d", a[i]);
    }
    printf("\n");
    printf("b[]:");
    for (int i = 0; i < n; ++i) {
        printf("%3d", b[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}

// �������ܣ���������������ֵ
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
