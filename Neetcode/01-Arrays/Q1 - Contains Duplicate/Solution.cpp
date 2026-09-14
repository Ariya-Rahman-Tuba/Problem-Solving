class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    set<long long int>s(nums.begin(),nums.end());
    if(nums.size()!=s.size()){
        return true;
    }
    else{
        return false;
    }
    }
};