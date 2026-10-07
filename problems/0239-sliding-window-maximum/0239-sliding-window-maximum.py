from collections import deque

class Solution(object):
    def maxSlidingWindow(self, numbers, k):
        """
        :type numbers: List[int]
        :type k: int
        :rtype: List[int]
        """
        if not numbers or k == 0:
            return []
            
        dq = deque()  # Stores indices
        res = []
        for i in range(len(numbers)):
            if dq and dq[0] < i - k + 1:
                dq.popleft()
            while dq and numbers[dq[-1]] <= numbers[i]:
                dq.pop()
            dq.append(i)
            if i >= k - 1:
                res.append(numbers[dq[0]])
        return res