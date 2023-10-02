class Solution {
public:
    bool winnerOfGame(string colors) {
        int A_cnt = 0, B_cnt=0, cnt=0, i=1;

        for(;i<colors.size();i++)
        {
            if(colors[i]== colors[i-1])
            {
                cnt++;
            }else
            {
                if(cnt>1)
                {
                    if(colors[i-1] == 'A') A_cnt+=cnt-1;
                    else B_cnt+=cnt-1;
                }
                cnt=0;
            }
        }
        if(cnt>1)
                {
                    if(colors[i-1] == 'A') A_cnt+=cnt-1;
                    else B_cnt+=cnt-1;
                }
        return (A_cnt > B_cnt) ? true : false;
    }
};