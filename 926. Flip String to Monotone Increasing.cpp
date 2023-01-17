class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int ones = 0, flips = 0;

        for(char ch : s)
        {
            if(ch == '1')
            {
                ones ++;
            }else
            {
                flips++;
                if (ones < flips)
                    flips = ones;
            }
            
        }

        return flips;
    }
};