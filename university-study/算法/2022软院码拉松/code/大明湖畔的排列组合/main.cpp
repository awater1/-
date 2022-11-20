 string getPermutation(int n, int k) {
        static constexpr int FAC[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};	// �׳�

        vector<int> rest;  // ��ŵ�ǰ��ѡ��������
        for(int i = 1;i <= n;i++)
            rest.push_back(i);

        k--;    //Ҫ�� -1 �����俵��չ����ֵ
        string ans = "";
        ans.reserve(n);

        for(int i = n; i >= 1; i--)
        {
            int r = k % FAC[i-1];
            int t = k / FAC[i-1];
            k = r;
            ans += to_string(rest[t]);          // ʣ�������t+1����Ϊ��ǰλ
            rest.erase(rest.begin() + t);       // �Ƴ�ѡ����ǰλ����
        }

        return ans;
}

