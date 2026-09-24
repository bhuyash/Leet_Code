class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())return false;
        map<char,char> mp;
        map<char,char> rev;
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])==mp.end())
            {
            mp[s[i]]=t[i];
            }
            else
            {
            if(mp[s[i]]!=t[i]) return false;
            }

            //@@@@@@@

            if(rev.find(t[i])==rev.end())
            {
            rev[t[i]]=s[i];
            }
            else
            {
            if(rev[t[i]]!=s[i]) return false;
            }

        }
        return true;
        
    }
};