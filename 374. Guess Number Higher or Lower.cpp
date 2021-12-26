class Solution {
public:
    int guessNumber(int n) {
        int left=0,right=n,ans;
        while(left<=right){
         int mid=left+(right-left)/2;
         int res=guess(mid);
         if(res==0){
             ans=mid;
             break;
         }
         else if(res==1){
             left=mid+1;
         }
         else{
             right=mid-1;
         }   
            
             
        }
        
        return ans;
    }
};
