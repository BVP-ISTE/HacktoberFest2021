# Reverse first K elements

# Given a queue and an integer k, reverse first k elements. Return the updated queue.
# Do the problem in O(n) complexity.

from sys import setrecursionlimit
import queue


def reverseFirstK(q, k):
    # Implement Your Code Here
    if q.qsize() < k:
        k = q.qsize()
    queue_left_over = q.qsize() - k

    q = _reverseFirstKrecursive(q, k)
    while queue_left_over > 0:
        q.put(q.get())
        queue_left_over = queue_left_over - 1
    return q


def _reverseFirstKrecursive(q, k):
    saved = q.get()
    k = k - 1
    if k > 0:
        q = _reverseFirstKrecursive(q, k)
    q.put(saved)
    return q



setrecursionlimit(11000)
n = int(input())
li = [int(ele) for ele in input().split()]
q = queue.Queue()
for ele in li:
    q.put(ele)
k = int(input())
reverseFirstK(q, k)
while q.qsize() > 0:
    print(q.get())
    n -= 1
