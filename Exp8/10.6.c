// Created by VoidEmpty on 2023/2/15.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void insert_space1(char str[]);

void insert_space2(char *str);

int main() {
    printf("�˳���Ĺ��������ַ���ÿ���ַ������һ���ո�...\n");
    char str[100], flag;
    printf("Please enter a line of characters:");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // �����з��滻Ϊ�ַ�����β����
    printf("Enter \"1\",�ַ���������������\nEnter \"2\",�ַ�ָ������������\n");
    flag = getchar();
    if (flag == '1')
        insert_space1(str);
    else if (flag == '2') {
        insert_space2(str);
    }
    puts(str);
    system("pause");
    return 0;
}

//�������ܣ����ַ���ÿ���ַ������һ���ո�
//�ַ���������������
void insert_space1(char str[]) {
    int len = strlen(str);
    char new_str[len * 2 + 1];
    int j = 0;
    for (int i = 0; i < len; ++i) {
        new_str[j++] = str[i];
        new_str[j++] = ' ';
    }
    new_str[--j] = '\0';
    strcpy(str, new_str);
}

//�������ܣ����ַ���ÿ���ַ������һ���ո�
//�ַ�ָ������������
void insert_space2(char *str) {
    char s[strlen(str) + 1];
    char *t = s;
    strcpy(t, str);
    for (; *t != '\0'; ++t) {
        *str++ = *t;
        *str++ = ' ';
    }
    *--str = '\0';
}
