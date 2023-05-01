class Solution:
    def average(self, salary: List[int]) -> float:
        minSalary = maxSalary = salary[0]
        sumSalary = 0

        for i in salary:
            sumSalary += i

            minSalary = min(minSalary, i)
            maxSalary = max(maxSalary, i)

        return (sumSalary - minSalary - maxSalary) / (len(salary) - 2)