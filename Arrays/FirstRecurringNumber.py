# Google QUESTION
# Given an array = [2,5,1,2,3,5,1,2,4]
# IT should return 2

# Gicen an array = [2,1,1,2,3,5,1,2,4]:
# it should return 1

# given an array = [2,3,4,5]:
# it should return undefined

arr = [2,5,1,2,3,5,1,2,4]
k=0
prevMap={}
for i,n in enumerate(arr):
    if n in prevMap:
        print(n)
        break
    else:
        prevMap[n] = i
