// week03-3a.cpp�G�X
// LeetCode �ǲ߭p�e 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; // 1���W
        for(int i=0; i<nums.size(); i++){
            ans *= nums[i];
        }
        if(ans>0) return 1;
        if(ans>0) return -1;
        return 0;

    }
};
