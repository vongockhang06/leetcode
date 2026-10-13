class Solution(object):
    def minEatingSpeed(self, piles, h):
        """
        :type piles: List[int]
        :type h: int
        :rtype: int
        """ 
        size = len(piles)
        if size==h:
            return max(piles)
        
        l,r=1,max(piles)
        res=r
        while l<=r:
            mid = (l+r)//2
            count=0
            for i in piles:
                count+= i/mid if i%mid==0 else i//mid+1

            if count<=h:
                res=mid
                r=mid-1
            #Need to eat more 
            elif count>h:
                l=mid+1
        return res