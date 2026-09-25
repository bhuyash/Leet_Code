class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>res={1};
        for(int i=1;i<rowIndex+1;i++)
        {
            vector <int> curr(i+1,1);
            for(int j=1;j<i;j++)
            {
                curr[j]=res[j-1]+res[j];
            }
            res=curr;
        }
        return res;
        
    }
};