class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        
{
   
    string z(s.length(), 'a');
    

    vector<char> a;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == y)
        {
            a.push_back(s[i]);
        }
    }
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == x)
        {
            a.push_back(s[i]);
        }
    }
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] != y && s[i] != x)
        {
            a.push_back(s[i]);
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        z[i] = a[i];
    }
    
    
return z;}

        }};
