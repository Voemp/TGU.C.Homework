// Created by VoidEmpty on 2023/2/14.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void MyStrdel1(char str[], char c);

void MyStrdel2(char *str, char c);

int main() {
    printf("�˳���Ĺ��������ַ�����ɾ����ĳ�ַ���ͬ���ַ�...\n");
    char str[100], ch, flag;
    printf("Please enter a line of characters:");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Please enter a character:");
    ch = getchar();
    printf("Enter \"1\",�ַ���������������\nEnter \"2\",�ַ�ָ������������\n");
    getchar();
    flag = getchar();
    if (flag == '1')
        MyStrdel1(str, ch);
    else if (flag == '2')
        MyStrdel2(str, ch);
    puts(str);
    system("pause");
    return 0;
}

//�������ܣ����ַ�����ɾ����ĳ�ַ���ͬ���ַ�
//�ַ���������������
void MyStrdel1(char str[], char c) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == c) {
            for (int j = i; str[j] != '\0'; ++j) {
                str[j] = str[j + 1];
            }
        }
    }
}

//�������ܣ����ַ�����ɾ����ĳ�ַ���ͬ���ַ�
//�ַ�ָ������������
void MyStrdel2(char *str, char c) {
    char *p = str;
    for (; *p != '\0'; ++p) {
        if (*p != c) {
            *str = *p;
            str++;
        }
    }
    *str = '\0';
}