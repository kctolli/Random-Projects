class ListNode:
    def __init__(self, value = 0, next_node = None):
        self.value = value
        self.next_node = next_node


l1 = ListNode(1)
l2 = ListNode(2)
l3 = ListNode(3)
l4 = ListNode(4)

l1.next_node = l2
l2.next_node = l3
l3.next_node = l4
    
def reverse_list(l):
    prev = None
    while l:
        next_l = l.next
        l.next = prev
        prev = l
        l = next_l
    return prev 

def print_list(l):
    while l:
      print(l.value)
      l = l.next_node

l0 = reverse_list(l1)
print_list(l0)
