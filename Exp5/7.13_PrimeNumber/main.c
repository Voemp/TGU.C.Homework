#include <stdio.h>
#include "Function.h"

int main() {
    int s;
    char reply;
    do{
        printf("��ѡ����Ҫ�Ĺ��ܣ�\n");
        printf("1.�ж�m�Ƿ�Ϊ����\n2.���1~n֮�����������ĺ�\n3.���������m����������\n4.�ж�m�Ƿ�Ϊ��ȫ��\n5.�Դ�С����ĳ˻���ʽ���������m��������\n");
        printf("�������֣�1��2��3��4��5�������س���ȷ��...\n");
        scanf("%d",&s);
        switch (s) {
            case 1:Function1();break;
            case 2:Function2();break;
            case 3:Function3();break;
            case 4:Function4();break;
            case 5:Function5();break;
        }
        printf("�Ƿ񷵻ص�ѡ��˵�(Y/y���� N/n�˳�����)?\n");
        scanf("%*c%c",&reply);
    } while (reply=='Y'||reply=='y'); //�ж��Ƿ��������г���
    return 0;
}
