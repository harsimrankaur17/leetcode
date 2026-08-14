class Solution {
public:
    bool isPalindrome(string s) {
        string m;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z' || s[i]>='A'&& s[i]<='Z' || s[i] >= '0' && s[i] <= '9'){
m.push_back(tolower(s[i]));
                
            }}
            string k;
            for(int i=m.length()-1 ;i>=0;i--){
                k.push_back(tolower(m[i]));
            }
int x=0;
for(int i=0; i<m.length(); i++){
    if(m[i]==k[i]){
        x++;
    }
}

      if(x==m.length()){
        return true;
      }
      else{
        return false;
      }  return true;} 
    
};
