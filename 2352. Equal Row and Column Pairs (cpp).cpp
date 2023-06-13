class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int rows = grid.size(), cols = grid[0].size();
        int cnt = 0;

        for(int row = 0; row < rows;row++)
        {
            for(int col = 0;col <cols; col++)
            {
                bool same = 1;
                for(int idx = 0;idx<rows;idx++)
                {
                    if(grid[row][idx] != grid[idx][col])
                        {
                            same = 0;
                            break;
                        }
                }
                if(same)
                    cnt++;
            }
        }

        return cnt;
    }
};