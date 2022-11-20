#include <stdio.h>
#include <stdlib.h>

//��������
void quick_sort(int num[], int low, int high )
{
    int i,j,temp;
    int tmp;

    i = low;
    j = high;
    tmp = num[low];   //����Ϊ�м�ֽ��ߣ���߱���С���ұ߱�����,ͨ����һ��Ԫ���ǻ�׼��

    if(i > j)  //����±�i�����±�j��������������
    {
        return;
    }

    while(i != j)
    {
        while(num[j] >= tmp && j > i)
        {
            j--;
        }

        while(num[i] <= tmp && j > i)
        {
            i++;
        }

        if(j > i)
        {
            temp = num[j];
            num[j] = num[i];
            num[i] = temp;
        }
    }

    num[low] = num[i];
    num[i] = tmp;

    quick_sort(num,low,i-1);
    quick_sort(num,i+1,high);
}

int main()
{
    int n;
    scanf("%d",&n);
    int nums[n];
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    quick_sort(nums,0,n-1);
    int tem;
    for(int k=1;k<n;k++){
        if(abs(nums[k]-nums[k-1])>tem){
            tem = abs(nums[k]-nums[k-1]);
        }
    }
    printf("%d",tem);
    return 0;
}
