class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        lst=[]
        if x<0:
            return False
        while (x>=10):
            a=x%10
            x=x/10           
            lst.append(a)
        lst.append(x)

        # for i in lst:
        #     print i

        i=0
        j=len(lst)-1
        while(i<j):
            if lst[i]!=lst[j]:
                return False
            i=i+1
            j=j-1
        return True
            

        