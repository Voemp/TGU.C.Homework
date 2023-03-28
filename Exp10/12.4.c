// Created by VoidEmpty on 2023/3/14.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define NAME_LEN 20
#define MAX_LEADER 3

VOID SetTitle(LPCSTR lpTitle) {
    SetConsoleTitle(lpTitle);
}

int strcmpl(char *s1, char *s2);

void IfNull(void *p);

typedef struct canidate {
    char name[NAME_LEN];
    int count;
} CANIDATE;

int main() {
    SetTitle("ͶƱϵͳ");
    system("color f9");
    CANIDATE *leader = NULL;
    int n = MAX_LEADER, discard = 0;
    char name[NAME_LEN];
    IfNull(leader = (CANIDATE *) malloc(n * sizeof(CANIDATE)));
    strcpy(leader[0].name, "zhang");
    leader[0].count = 0;
    strcpy(leader[1].name, "li");
    leader[1].count = 0;
    strcpy(leader[2].name, "wang");
    leader[2].count = 0;
    printf("����λ��ѡ�ˣ�zhang, li, wang\n");
    while (1) {
        printf("����������ͶƱ�ĺ�ѡ�˵����֣�");
        scanf("%s", name);
        if (strcmpl(name, "0") == 0) {
            break;
        }
        int i;
        //����Ƿ�Ϊ��ѡ��
        for (i = 0; i < n; i++) {
            if (strcmpl(name, leader[i].name) == 0) {
                leader[i].count++;
                break;
            }
        }
        //������Ǻ�ѡ��
        if (i == n) {
            discard++;  //��Ʊ����һ
        }
        printf("��ʾ������0����ͶƱ\n");
    }
    //���ͶƱ���
    printf("**********************\n");
    printf("ͶƱ������£�\n");
    for (int i = 0; i < n; i++) {
        printf("%s: %d\n", leader[i].name, leader[i].count);
    }
    printf("��Ʊ����%d\n", discard);
    printf("**********************\n");
    system("pause");
    return 0;
}

//�����ִ�Сд���ַ����Ƚ�
int strcmpl(char *s1, char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] == s2[i] || s1[i] == s2[i] + 32 || s1[i] == s2[i] - 32) {
            i++;
        } else {
            return s1[i] - s2[i];
        }
    }
    if (s1[i] == '\0' && s2[i] == '\0') {
        return 0;
    } else if (s1[i] == '\0') {
        return -1;
    } else {
        return 1;
    }
}

//����ڴ�����Ƿ�ɹ�
void IfNull(void *p) {
    if (p == NULL) {
        printf("Memory allocation failed!");
        exit(1);
    }
}