class Solution {
public:
    bool isPalindromic(string s) {
        string sum = "";

        for(int i = 0; i < s.length(); i++) {
            int x = s[i];
            string y = bitset<8>(x).to_string();
            sum += y;
        }

        // Check AFTER the complete binary string is created
        for(int i = 0, j = sum.length() - 1; i < j; i++, j--) {
            if(sum[i] != sum[j]) {
                return false;
            }
        }

        return true;
    }
};
