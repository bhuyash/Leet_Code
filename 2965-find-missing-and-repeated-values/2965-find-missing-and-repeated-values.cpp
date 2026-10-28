class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size()*grid.size();
        int miss,rep;
        vector<int> r(n+1,0);
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid.size();j++)
            {
                r[grid[i][j]]++;
            }
        }
        for(int i=1;i<r.size();i++)
        {
            if(r[i]==0) miss=i;
            if(r[i]==2) rep=i;
        }
        vector<int> res;
        res.push_back(rep);
        res.push_back(miss);
        
        return res;


        
    }
};