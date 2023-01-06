class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        cnt = 0

        costs.sort()

        for cost in costs:
            if coins >= cost:
                cnt += 1
                coins -= cost
            else:
                return cnt
        
        return cnt