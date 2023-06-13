class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        cnt = 0
        rows = len(grid)
        cols = len(grid[0])

        for row in range(rows):
            for col in range(cols):
                same = 1
                for idx in range(rows):
                    if grid[row][idx] != grid[idx][col]:
                        same = 0
                        break

                if same:
                    cnt+=1
        
        return cnt