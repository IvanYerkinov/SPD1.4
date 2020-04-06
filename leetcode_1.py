# You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
# You may assume the two numbers do not contain any leading zero, except the number 0 itself.

# Definition for singly-linked list.


class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        carry = 0
        head = ListNode(0)
        tail = head
        while(l1 is not None and l2 is not None):
            num = l1.val + l2.val
            if num >= 10:
                num = num % 10
                carry = 1
            tail.val += carry
            carry = 0
            tail.next = ListNode(num)
            tail = tail.next

            l1 = l1.next
            l2 = l2.next
        if l1 is not None:
            while(l1 is not None):
                tail.next = ListNode(l1.val)
                tail = tail.next
                l1 = l1.next
        else:
            while l2 is not None:
                tail.next = ListNode(l2.val)
                tail = tail.next
                l2 = l2.next

        if head.val == 0:
            return head.next
        return head


if __name__ == "__main__":
    sol = Solution()
    l1 = ListNode(5)
    l1.next = ListNode(3)
    l1.next.next = ListNode(8)
    l2 = ListNode(8)
    l2.next = ListNode(2)
    sollist = sol.addTwoNumbers(l1, l2)
    while sollist is not None:
        print(sollist.val, end=" -> ")
        sollist = sollist.next
    print("")
