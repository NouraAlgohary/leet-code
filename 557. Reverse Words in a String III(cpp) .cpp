class Solution {
public:
    string reverseWords(string s) {
        string t="", s2="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' '||i==s.size()-1)
            {
                if(i==s.size()-1) t+= s[i];
                
                for(int j=t.size()-1;j>=0;j--)
                    s2+=t[j];
                if(i!=s.size()-1) s2+=' ';
                t="";
                continue;
            }
            t+=s[i];
        }
        return s2;
    }
};