// Created by VoidEmpty on 2022/11/20.
#include "Operator.h"
#include "MakeNumber.h"

/*	�������ܣ�  	��������������
 	����������  	��
   	��������ֵ��	�ַ���ʽ�������
 */

char Operator() {
    switch (MakeNumber(4)) {
        case 1:
            return '+';
        case 2:
            return '-';
        case 3:
            return '*';
        case 4:
            return '/';
    }
}