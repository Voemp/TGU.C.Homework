// Created by VoidEmpty on 2023/2/16.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[20], min[20];
    printf("Input five countries' names:\n");
    gets(min); //��Ϊ��С���ַ����ݴ�
    //��ȡ����4���ַ���
    for (int i = 0; i < 4; ++i) {
        gets(str);
        if (strcmp(str, min) < 0) //�Ƚ������ַ����Ĵ�С
            strcpy(min, str);
    }
    printf("The mininum is:%s\n", min);
    system("pause");
    return 0;
}