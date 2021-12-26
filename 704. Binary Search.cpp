class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len=nums.size();
        int i ,flag=0;;
        for ( i=0;i<len;i++){
            if(nums[i]==target){
                flag=1;
                break;
            }
            
        }
        if(flag==1){
            return i;
        }
        else{
            return -1;
        }
    }
};
