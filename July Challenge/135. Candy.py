class Solution:
    def candy(self, ratings: List[int]) -> int:
        n = len(ratings)
        left2right = [1]*n
        right2left = [1]*n
        c=[]
        for i in range(1,len(ratings)):
            if ratings[i]>ratings[i-1]:
                left2right[i] = left2right[i-1] + 1
        for i in range(len(ratings) - 2, -1,-1):
            if ratings[i] > ratings[i+1]:
                right2left[i] = right2left[i+1] + 1
        for i in range(len(left2right)):
            c.append(max(left2right[i], right2left[i]))
        return (sum(c))                
