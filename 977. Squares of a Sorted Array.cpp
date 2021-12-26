class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int length,key,k;
        length=nums.size();
        //square the size
        for(int i=0;i<length;i++){
            nums[i]=nums[i]*nums[i];
            
            
        }
        //insertation sort for sorting
        for(int j=1;j<length;j++){
            key=nums[j];
            k=j;
            while(k>0 and nums[k-1]>key){
                nums[k]=nums[k-1];
                k--;
            }
            nums[k]=key;
            }
        
       return nums; 
    }
};
