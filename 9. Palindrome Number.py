class Solution:
    def isPalindrome(self, x: int) -> bool:
         flag=0
         rev=0
         c=x
         if(x<0):
            return False
         else:
            while(x>0):
                n=x%10
                x=x//10
                rev=rev *10 + n
                
            if(rev==c):
                return True
            else:
                return False    
