class Solution {
public:
    int mySqrt(int x) {
        long int left=0,right=x,ans=0;
        
        while(left<=right){
            long int mid=(left+right)/2;
            
            if(mid*mid==x){
                ans= mid;
                break;
            }
            else if( mid*mid<x){
                left=mid+1;
                ans=mid;
            }
            else{
                right=mid-1;
            }
        }
       return ans; 
        
    }
};
