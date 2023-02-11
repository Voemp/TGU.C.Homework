#include <stdio.h>
#include <stdlib.h>

int Gcd1(int, int); //����ٷ��������������������Լ��
int Gcd2(int, int); //��ŷ������㷨�������������������Լ��
int Gcd3(int, int); //�õݹ鷽���������������������Լ��

int main() {
    int a, b, s;
    printf("Input a b:");
    scanf("%d%d", &a, &b);
    printf("��ѡ����㷽����\n1.��ٷ� 2.ŷ����÷��� 3.�ݹ鷽��\n�������֣�1��2��3�������س���ȷ��...\n");
    scanf("%d", &s);
    switch (s) {
        case 1:
            printf("GCD = %d\n", Gcd1(a, b));
            break;
        case 2:
            printf("GCD = %d\n", Gcd2(a, b));
            break;
        case 3:
            printf("GCD = %d\n", Gcd3(a, b));
            break;
    }
    system("pause");
    return 0;
}

//Gcd1�������ܣ�����ٷ��������������������Լ��
int Gcd1(int a, int b) {
    int min(int, int); //����min����
    int t = min(a, b);
    for (int i = t; i > 0; --i) {
        if (a % i == 0 && b % i == 0)
            return i;
    }
}

//Gcd2�������ܣ���ŷ������㷨�������������������Լ��
int Gcd2(int a, int b) {
    int r;
    do {
        r = a % b; //ȡ��
        a = b;
        b = r;
    } while (r != 0); //շת���
    return a;
}

//Gcd3�������ܣ��õݹ鷽���������������������Լ��
int Gcd3(int a, int b) {
    if (a > b) {
        a = a - b;
        return Gcd3(a, b);
    } else if (a < b) {
        b = b - a;
        return Gcd3(a, b);
    } else
        return a;
}

//min�������ܣ����㲢������������н�С����
int min(int a, int b) {
    return a > b ? b : a;
}