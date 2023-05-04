class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        differences = [[], []] 

        for num in nums1:
            if num not in nums2 and num not in differences[0]:
                differences[0].append(num)


        for num in nums2:
            if num not in nums1 and num not in differences[1]:
                differences[1].append(num)   

        return differences    
