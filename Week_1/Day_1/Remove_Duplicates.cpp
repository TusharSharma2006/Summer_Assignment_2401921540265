class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cm = 1;
        int officer = 0;
        int unique = 1;
        while(cm<nums.size()){
            if(nums[cm]!=nums[cm-1]){
                nums[officer+1]=nums[cm];
                officer++;
                unique++;
                cm++;
            }
            else if(nums[cm]==nums[cm-1]){
                cm++;
            }
        }
        return unique;
    }
};