// Created by VoidEmpty on 2023/2/14.
#include <stdio.h>
#include <stdlib.h>

unsigned int MyStrlen(char s[]) {
    char *p = s;
    while (*p != '\0') {
        p++;
    }
    return (p - &s[0]);   /*����ָ��p���ַ����׵�ַ֮��Ĳ�ֵ*/
}
