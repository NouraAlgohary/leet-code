class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        highest = altitude = 0

        for i in gain:
            altitude += i

            if altitude > highest:
                highest = altitude

        return highest