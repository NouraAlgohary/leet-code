class Solution:
    def winnerOfGame(self, colors: str) -> bool:
        A_cnt = 0
        B_cnt = 0
        cnt = 0
        n = len(colors)

        for i in range(1, n):
            if(colors[i] == colors[i-1]):
                cnt+=1
            else:
                if(cnt >= 2):
                    if colors[i-1] == 'A':
                        A_cnt += cnt - 1
                    else:
                        B_cnt += cnt - 1
                cnt = 0

        if(cnt >= 2):
            if colors[i-1] == 'A':
                A_cnt += cnt - 1
            else:
                B_cnt += cnt - 1 
        # print(turns_cnt)
        return True if A_cnt > B_cnt else False
        