
# Reverse first K elements

# Given a queue and an integer k, reverse first k elements. Return the updated queue.
# Do the problem in O(n) complexity.

from sys import setrecursionlimit
import queue


def reverseFirstK(q, k):

    # Implement Your Code Here


setrecursionlimit(11000)
n = int(input())
li = [int(ele) for ele in input().split()]
q = queue.Queue()
for ele in li:
    q.put(ele)
k = int(input())
reverseFirstK(q, k)
while(q.qsize() > 0):
    print(q.get())
    n -= 1
