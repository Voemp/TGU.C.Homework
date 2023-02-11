// Created by VoidEmpty on 2022/11/27.
#include <stdio.h>

#define N 40

int ReadScore(int score[]);

int Average(int score[], int n);

int main() {
    int score[N], ave, n, m = 0;
    n = ReadScore(score); //���ú���ReadScore()����ɼ�������ѧ������
    printf("Total students are %d\n", n);
    ave = Average(score, n);
    for (int i = 0; i < n; ++i) {
        if (score[i] > ave)
            m += 1;
    }
    printf("Number of people whose scores are higher than the average:%d", m);
    return 0;
}

int ReadScore(int score[]) {
    int i = -1;
    do {
        i++;
        printf("Input score:");
        scanf("%d", &score[i]);
    } while (score[i] >= 0);
    return i;
}

//�������ܣ�����ƽ����
int Average(int score[], int n) {
    float total = 0;
    for (int i = 0; i < n; ++i) {
        total += score[i];
    }
    return total / n;
}