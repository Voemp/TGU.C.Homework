// Created by VoidEmpty on 2022/11/17.
#include <stdlib.h>
#include "MakeNumber.h"

/*	�������ܣ�  	���������һ�������
   	��������ֵ��	���ؼ�������ɵ������
 */
int MakeNumber(int n) {
    int magic;
    magic = rand() % n + 1;
    return magic;
}