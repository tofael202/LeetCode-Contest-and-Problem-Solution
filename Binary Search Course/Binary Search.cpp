class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int len=nums.size();
        int left=0,right=len-1;
        if(len==0){
            return -1;
        }
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]==target){
                cout<<mid;
                return mid;
            }
            else if (target>nums[mid]){
                left=mid+1;
            }
            
            else{
                right=mid-1;
            }
        }
        
        
        
        
        return -1;
    }
};
