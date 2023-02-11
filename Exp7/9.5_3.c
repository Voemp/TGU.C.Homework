// Created by VoidEmpty on 2022/12/9.
#include <stdio.h>
#include <stdlib.h>

int DayofYear(int year, int month, int day);

void MonthDay(int year, int yearDay, int *pMonth, int *pDay);

void Menu(void);

int dayTab[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                     {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int main() {
    int year, month, day, yearDay;
    char c;
    Menu(); /* ����Menu������ʾһ���̶�ʽ�˵� */
    c = getchar(); /* ����ѡ�� */
    switch (c) /* �ж�ѡ����Ǻ��ֲ��� */
    {
        case '1':
            printf("Please enter year, month, day:");
            scanf("%d,%d,%d", &year, &month, &day);
            yearDay = DayofYear(year, month, day);
            printf("yearDay = %d\n", yearDay);
            break;
        case '2':
            printf("Please enter year, yearDay:");
            scanf("%d,%d", &year, &yearDay);
            MonthDay(year, yearDay, &month, &day);
            printf("month = %d, day = %d\n", month, day);
            break;
        case '3':
            exit(0); /* �˳���������� */
        default:
            printf("Input error!");
    }
    return 0;
}

/* �������ܣ��Ը�����ĳ��ĳ��ĳ�գ����㲢����������һ��ĵڼ��� */
int DayofYear(int year, int month, int day) {
    int leap;
    leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    while (--month > 0)
        day += dayTab[leap][month];
    return day;
}

/* �������ܣ��Ը�����ĳһ��ĵڼ��죬����������һ��ĵڼ��µڼ��� */
void MonthDay(int year, int yearDay, int *pMonth, int *pDay) {
    int leap, i;
    leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    for (i = 1; yearDay > dayTab[leap][i]; i++)
        yearDay -= dayTab[leap][i];
    *pMonth = i;
    *pDay = yearDay;
}

/* �������ܣ���ʾ�˵� */
void Menu(void) {
    printf("1. year/month/day -> yearDay\n");
    printf("2. yearDay -> year/month/day\n");
    printf("3. Exit\n");
    printf("Please enter your choice:");
}