class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])==mp.end()) mp[s[i]]=1;
            else mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            if(mp.find(t[i])!=mp.end())
            {
                mp[t[i]]--;
                if(mp[t[i]]==0)
                {
                    mp.erase(t[i]);
                }
            }
            else return false;
        }
        return true;
    }
};