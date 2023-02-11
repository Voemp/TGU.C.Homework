// Created by VoidEmpty on 2022/12/9.
#include <stdio.h>

// ��������
int DayofYear(int year, int month, int day);

int main() {
    int year, month, day, yearDay;
    printf("Please enter year, month, day:");
    scanf("%d,%d,%d", &year, &month, &day);

    // ����DayofYear���������������������ֵ��yearDay
    yearDay = DayofYear(year, month, day);
    printf("yearDay = %d\n", yearDay);
    return 0;
}

/* �������ܣ��Ը�����ĳ��ĳ��ĳ�գ����㲢����������һ��ĵڼ��죨�������꣩ */
int DayofYear(int year, int month, int day) {
    int i, leap;

    int dayTab[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                         {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

    /* ��yearΪ���꣬��leapֵΪ1�����õ�1��Ԫ��dayTab[1][i]���㣻
    ����leapֵΪ0���õ�0��dayTab[0][i]���� */

    // �ܱ�4���������ܱ�100�����������ܱ�400������yearΪ����
    leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

    for (i = 1; i < month; i++) {
        day = day + dayTab[leap][i];
    }
    return day;         /* ���ؼ������day��ֵ */
}
