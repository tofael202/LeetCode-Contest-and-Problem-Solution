class Solution:
    def reverse(self, x: int) -> int:
           flag=0
           a=[]
           b=''
           rev=0
           if(x<0):
             flag=1
             x=abs(x)
           while(x>0):
             n=x%10
             x=int(x/10)
             rev= rev*10+ n
           if(flag==1):
             rev=-(rev)
           if(-2**31>rev or rev>2**31-1):
             return 0 
           else:
              return rev
                
