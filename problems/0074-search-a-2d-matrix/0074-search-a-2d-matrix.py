class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        row, col = len(matrix), len(matrix[0])
        l,r = [0,0], [row-1,col-1]
        ## general index from 2D to 1D: current_row*col + current_col
        ## from l,r => find general index of mid => change back to matrix index
        l_index, r_index = 0, r[0]*col+r[1]
        while l_index<=r_index:
            mid_index = (l_index+r_index)//2
            mid_element = matrix[mid_index//col][mid_index%col]
            if mid_element==target:
                return True
            elif mid_element<target:
                l_index=mid_index+1
            elif mid_element>target:
                r_index=mid_index-1
        return False