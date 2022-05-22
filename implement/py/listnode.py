from lib2to3.pytree import Node
from re import X
import re


class ListNode:
    def __init__(self, x) -> None:
        self.val = x
        self.next = None

class MyLinkedList:
    def __init__(self) -> None:
        self.size = 0
        self.head = ListNode(0)

    def get(self, index: int) -> int:
        if index < 0 or index > self.size:
            return -1

        curr = self.head
        for _ in range(index+1):
            curr = curr.next
        return curr.val

    def addAtHead(self, val: int) -> None:
        pass

    def addAtIndex(self, index: int, val: int) -> Node:
        pass
    # TODO