class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        j=0
        for x in range(len(nums)):
            if nums[j] == 0:
                nums.insert(len(nums),0)
                nums.pop(j)
            j=j+1
