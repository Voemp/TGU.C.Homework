// Created by VoidEmpty on 2022/11/17.
#include "IsRight.h"
#include <stdio.h>

/*	�������ܣ�  	�жϼ����Ƿ���ȷ
 	����������  	a,b,operator,answer
   	��������ֵ��	����1��0
 */

int IsRight(int a, char operator, int b, float answer) {
    switch (operator) {
        case '+':
            return (a + b == answer) ? 1 : 0;
        case '-':
            return (a - b == answer) ? 1 : 0;
        case '*':
            return (a * b == answer) ? 1 : 0;
        case '/':
            return ((float)a / b == answer) ? 1 : 0;
    }
}