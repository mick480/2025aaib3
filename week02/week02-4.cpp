// week02-4.cpp LeetCode�ǲ߭p�e��2�D
// 389. Find the Difference ���2�Ӧr�� "�t���Ӧr��"
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {};
        for(int i=0; i<s.length(); i++){
            char c = s[i];
            A[c]++;
        } // �i�H�α�l�Ӹ˦r��
        for(int i=0; i<t.length(); i++){
            char c = t[i];
            A[c]--;
            if(A[c]<0) return c;
        }
        return 0;
    }
};
