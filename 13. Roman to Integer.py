class Solution:
    def romanToInt(self, s: str) -> int:
    
        
        l=len(s)
        l=l-1
        res=0
        while(l>=0):
                print("Every First L",l)
                if(s[l]=="I"):
                    p=1
                    l-=1
                elif(s[l]=="V"):
                    if(s[l-1]=="I" and l>=1):
                        p=4
                        l -=2
                    else:
                        p=5
                        l-=1
                elif(s[l]=="X"):
                    if(s[l-1]=="I" and l>=1):
                        p=9
                        l -=2
                    else:
                        p=10
                        l-=1
                        
                elif(s[l]=="L"):
                    if(s[l-1]=="X" and l>=1):
                        p=40
                        l -=2
                    else:
                        p=50
                        l-=1
                        
                elif(s[l]=="C"):
                    if(s[l-1]=="X" and l>=1):
                        p=90
                        l -=2
                    else:
                        p=100
                        l-=1
                        
                elif(s[l]=="D"):
                    if(s[l-1]=="C" and l>=1):
                        p=400
                        l -=2
                    else:
                        p=500
                        l-=1    
                elif(s[l]=="M"):
                    if(s[l-1]=="C" and l>=1):
                        p=900 
                        l -=2
                    else:
                        p=1000
                        l-=1    
                print("Every L",l)
                print("Every P",p)
                
                
                res=res+p
            
            
        return res
