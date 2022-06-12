# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        ptrfast = head
        ptrslow  = head
        while(ptrslow and ptrfast and ptrfast.next):
            ptrslow = ptrslow.next
            ptrfast = ptrfast.next.next
            
            if(ptrfast == ptrslow):
                return True
                break
            else:
                continue
            return False
