class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if(not nums):
            return 0
        longest_streak = 0
        hashSet = set(nums)
        for nums in hashSet:
            if nums-1 not in hashSet:
                curr_streak = 0
                while((nums+curr_streak) in hashSet):
                    curr_streak += 1
                longest_streak = max(longest_streak, curr_streak)
        return longest_streak
