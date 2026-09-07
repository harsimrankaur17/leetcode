class Solution {
public:
    string largestOddNumber(string num) {
        int mx = 0;

       if((num[num.length()-1] - '0') % 2 != 0) {
    return num;
}

        int x = -1;

        for(int i = num.length() - 1; i >= 0; i--) {
            if((num[i] - '0') % 2 != 0) {
                x = i;
                break;
            }
        }

        string y = "";
if(x!=-1){
        for(int i = 0; i <= x; i++) {
            y += num[i];
        }}

        return y;
    }
};