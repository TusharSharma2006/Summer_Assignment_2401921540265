class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> up;
        for(int i = 0;i<nums.size();i++){
            if(up[nums[i]]==1){return true;}
            else{up[nums[i]]+=1;}
        }
        return false;
    }
};