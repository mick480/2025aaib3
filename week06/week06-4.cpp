// week06-4.cpp 昨天的LeetCode簡單題
// nums 陣列裡，數字有些會增加，請問有沒有2個相鄰的陣列，裡面都是增加
class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int N = nums.size();
        vector<int> combo(N, 1);
        for(int i=1; i<N; i++){
            if(nums[i-1]<nums[i]) combo[i] = combo[i-1]+1;
        }
        for(int i=0; i<N-k; i++){
            if(combo[i]>=k && combo[i+k]>=k) return true;
        }
        return false;
    }
};
