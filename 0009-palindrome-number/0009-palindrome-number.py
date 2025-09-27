class Solution(object):
    def isPalindrome(self, x):
        if x < 0:
            return False
        a = str(x)
        i=0
        j=len(a)-1
        while (i<j):
            if a[i] != a[j]:
                return False
            i=i+1
            j=j-1
        return True
        
        