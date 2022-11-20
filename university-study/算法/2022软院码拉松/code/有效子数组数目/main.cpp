#include <iostream>

#include <vector>

using namespace std;

int trie[200010];
int MOD = (int)(1e9+7);

int lowbit(int x);
int query(int x);
int effectiveSub(vector<int>& nums);

int main()

{

vector<int> nums;

int temp=0;

while(cin >> temp)     //�����ļ�д���ǣ�0 1 1 0 q����������κ���ĸ�������롣����q�������롣

{

nums.push_back(temp);     //�������
}

cout<<effectiveSub(nums);

return 0;

}

int lowbit(int x) {
    return x & -x;
}

int query(int x) {
    int ans = 0;
    for (int i = x; i > 0; i -= lowbit(i)){
        ans += trie[i];
    }

    return ans;
}

int effectiveSub(vector<int>& nums) {
    if(nums.size()==0){
        return 0;
    }

    int n = nums.size();
    int ans = 0;
    int sum[n+10];
    for (int i = 1; i <= n; i++){
        sum[i] = sum[i - 1] + (nums[i - 1] == 0 ? -1 : 1);
    }

    for (int i = 0; i <= n; i++) {
        int t = sum[i] + n + 1;
        ans = (ans + query(t - 1))%MOD;
        for(int j = t; j <= 2 * n + 1; j += lowbit(i))trie[j]++;
    }
    return ans;

}

