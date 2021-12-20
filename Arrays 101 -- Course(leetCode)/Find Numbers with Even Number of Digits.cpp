class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int length,totalEven=0;
        length=nums.size();
        for (int i=0;i<length;i++){
            int count=0;
            while(nums[i]>0){
                nums[i]=nums[i]/10;
                count++;
            }
            if(count%2==0){
                totalEven++;
                
            }
        }
        
        return totalEven;
    }
};
