class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        vector<char> f;
        for(int i=0;i<s.size();i++)
        {
            f.push_back(s[i]);
        }
        for(int i=0;i<t.size();i++)
        {
            if(find(f.begin(),f.end(), t[i])==f.end()) return false;
            auto it = find(f.begin(), f.end(), t[i]);

            if(it != f.end())

                f.erase(it);
                 }
        return true;
    }
};