#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "MakeNumber.h"
#include "IsRight.h"
#include "RorW.h"
#include "Operator.h"

int main() {
    srand(time(NULL));
    printf("��ӭ����Сѧ�������������ѧϵͳ!\n����ʮ�������⣬�����ô���׼����\n");
    int a,b,score;
    char o;
    float answer;
    do{
        score=0; //�÷ֳ�ʼ��Ϊ0
        system("pause");

        for (int i = 1; i <= 10; ++i) {
            a= MakeNumber(10);
            b= MakeNumber(10);
            o=Operator();
            printf("��%d��:\n",i);
            printf("%d%c%d = ?\n",a,o,b);
            scanf("%f",&answer);
            RorW(IsRight(a,o,b,answer)); //�����ȷ��������ʾ��
            if(IsRight(a,o,b,answer)==1){
                score+=10; //ÿ���һ�����10��
            }
        }
        printf("�÷֣�%d����ȷ�ʣ�%d%%\n",score,score); //����ֺܷ���ȷ��
        //�ж���ȷ���Ƿ����75%���Ƿ���Ҫ���´���
        if(score<75)
            printf("��ȷ��С��75%�������´��⡣\n");
        else
            printf("��ϲ�㣬�����ˣ�\n");
    } while (score<75);
    printf("�밴������˳�����...");
    getch();
    return 0;
}
