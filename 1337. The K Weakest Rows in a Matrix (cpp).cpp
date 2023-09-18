class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>kWeakest;
        multimap<int, int> weaks;

        for(int i=0;i<mat.size();i++)
        {
            int cnt=0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j] == 1)
                    cnt++;
            }
            weaks.insert(make_pair(cnt, i));
        }
        for(auto it : weaks)
        {
            kWeakest.push_back(it.second);
            if(!--k)
                break;
        }
        return kWeakest;
    }
};
