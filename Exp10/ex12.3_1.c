#include <stdio.h >
#include <stdlib.h>
#include <windows.h>

VOID SetTitle(LPCSTR lpTitle) {
    SetConsoleTitle(lpTitle);
}

void IfNull(void *p);

typedef struct date {
    int year;
    int month;
    int day;
} Date;
typedef struct student {
    long studentID;    //ѧ��
    char studentName[10];   //����
    char studentSex;    //�Ա�
    Date birthday;  //��������
    int score[4];   //4�ſγ̵ĳɼ�
} STUDENT;

int main() {
    SetTitle("ѧ���ɼ�����ϵͳLite��");
    system("color f9");
    int i, j, num;
    printf("������ѧ��������");
    scanf("%d", &num);
    int *sum = (int *) calloc(num, sizeof(int));
    IfNull(sum);
    STUDENT *stu = (STUDENT *) malloc(num * sizeof(STUDENT));
    IfNull(stu);
    for (i = 0; i < num; i++) {
        printf("�������%d��ѧ����ѧ�š��������Ա𡢳������ڡ�4�ſγ̵ĳɼ���\n", i + 1);
        scanf("%ld%s %c%d/%d/%d%d%d%d%d",
              &stu[i].studentID,
              stu[i].studentName,
              &stu[i].studentSex,
              &stu[i].birthday.year,
              &stu[i].birthday.month,
              &stu[i].birthday.day,
              &stu[i].score[0],
              &stu[i].score[1],
              &stu[i].score[2],
              &stu[i].score[3]);
    }
    for (i = 0; i < num; i++) {
        sum[i] = 0;
        for (j = 0; j < 4; j++) {
            sum[i] += stu[i].score[j];
        }
        printf("ѧ����Ϣ���£�\n");
        printf("%10ld%8s%3c%6d/ %02d/ %02d%4d%4d%4d%4d%6.1f\n",
               stu[i].studentID,
               stu[i].studentName,
               stu[i].studentSex,
               stu[i].birthday.year,
               stu[i].birthday.month,
               stu[i].birthday.day,
               stu[i].score[0],
               stu[i].score[1],
               stu[i].score[2],
               stu[i].score[3],
               sum[i] / 4.0);
    }
    free(stu);
    free(sum);
    system("pause");
    return 0;
}

void IfNull(void *p) {
    if (p == NULL) {
        printf("�ڴ����ʧ�ܣ�\n");
        exit(1);
    }
}