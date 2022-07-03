class Solution:
    def wiggleMaxLength(self, nums: List[int]) -> int:
            up = 1
            down = 1

            for i in range(len(nums)-1):
                if((nums[i+1] - nums[i])<0):
                    down=up+1
                elif((nums[i+1] - nums[i]>0)):
                    up = down+1
            return max(up,down)
        
