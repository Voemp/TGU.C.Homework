// Created by VoidEmpty on 2022/11/20.

//����ͳ��n�������������ĸ���
int PositiveNum(int a[],int n){
    int count=0;
    for (int i = 0; i < n; ++i) {
        if(a[i]>0)
            count+=1;
    }
    return count;
}

//ʹ�õ���������Fibonacci����ǰn���ֵ
void Fib(long f[],int n){
    f[0]=0;
    f[1]=1;
    for (int i = 2; i < n; ++i) {
         f[i]=f[i-1]+f[i-2];
    }
}