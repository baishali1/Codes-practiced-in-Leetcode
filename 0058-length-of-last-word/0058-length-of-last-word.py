class Solution(object):
    def lengthOfLastWord(self, s):
        count=0
        set=0
        for i in range(len(s)-1,-1,-1):
            if s[i]==' ' and set==0:
                continue
            if s[i]==' ' and set==1:
                break
            else:
                set=1
                count+=1
        return count
        """
        :type s: str
        :rtype: int
        """
        