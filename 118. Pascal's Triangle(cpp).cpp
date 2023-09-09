class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;
        vector<int>current_row;
        current_row.push_back(1);
        pascalTriangle.push_back(current_row);

        if(numRows == 1)
        {
            return pascalTriangle;
        }

        for(int i = 1;i<numRows;i++)
        {
            current_row.clear();
            current_row.push_back(1);

            for(int j=1; j<pascalTriangle[i-1].size(); j++)
            {
                current_row.push_back(pascalTriangle[i-1][j] + pascalTriangle[i-1][j-1]);
            }
            current_row.push_back(1);
            pascalTriangle.push_back(current_row);
        }

        return pascalTriangle;
    }
};