// Created by VoidEmpty on 2022/11/16.
#include "FunPrime.h"
#include <stdio.h>
//�������ܣ���һ�����������ֽ⣬����������С����˳�����еĳ˻���ʽ���

void FunPrime(int n){
    printf("%d=",n);
    int m=n;
    for (int i = 2; i <= m/2; ++i) {
        while (n%i==0) {
            printf("%d", i);
            if (n / i >= 2)
                printf("*");
            n /= i;
        }
    }
}