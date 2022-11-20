#include <stdio.h>
#include <stdlib.h>

int countDigitOne(int n) {
    // mulk ��ʾ 10^k
    // ������Ĵ����У����Է��� k ��û�б�ֱ��ʹ�õ�������ʹ�� 10^k��
    // ��Ϊ���ô��뿴��������ֱ�ۣ����ﱣ���� k
    long long mulk = 1;
    int ans = 0;
    for (int k = 0; n >= mulk; ++k) {
        ans += (n / (mulk * 10)) * mulk + fmin(fmax(n % (mulk * 10) - mulk + 1, 0LL), mulk);
        mulk *= 10;
    }
    return ans;
}

int countNumOf1(int n){

    int count = 0;
    for(int i = 1;i <= n;i *= 10){
        count += (1+(n/i-1)/10)*i;
        if(n/i%10==1){
            count += 1-i+n%i;
        }
    }
    return count;
}

int main()
{
    int n;
    scanf("%d",&n);
    int count = countNumOf1(n);
    printf("%d",count);
    return 0;
}
