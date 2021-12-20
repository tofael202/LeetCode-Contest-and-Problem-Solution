class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int length=0,max_one=0;
        length=nums.size();
        cout<<length;
        
        for(int i=0;i<length-1;i++){
            int count=0;
            for(int j=i; j<length ; j++){
                if(nums[j]==1){
                    count++;
                }    
                else{
                    break;
                }
            }
            if(count>max_one){
                max_one=count;
            }
        }
        
       return max_one; 
    }
};
