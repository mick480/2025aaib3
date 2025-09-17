// week02-4.cpp LeetCode學習計畫第2題
// 389. Find the Difference 找到2個字串 "差哪個字母"
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {};
        for(int i=0; i<s.length(); i++){
            char c = s[i];
            A[c]++;
        } // 可以用桶子來裝字母
        for(int i=0; i<t.length(); i++){
            char c = t[i];
            A[c]--;
            if(A[c]<0) return c;
        }
        return 0;
    }
};
