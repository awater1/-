#include <iostream>

#include <vector>

using namespace std;



vector<int> rightBigger(vector<int>& nums) {

vector<int> res(nums.size());//������
int length = nums.size();
for(int i =0;i<length;i++){
    for(int j =i+1;j<length;j++){
        if(nums[i]>nums[j]){
            res[i]++;
        }
    }
}
return res;
}

int main()

{

vector<int> nums;

int temp=0;

while(cin >> temp) //���κ���ĸΪ��������������q���ƽ���

{

nums.push_back(temp); //�������

}

vector<int> countR = rightBigger(nums);

for(int i=0;i<countR.size();i++)

{

cout<<countR[i]<<" ";

}

return 0;

}
