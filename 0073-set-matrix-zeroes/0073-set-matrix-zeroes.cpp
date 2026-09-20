class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> st1;
        set<int> st2;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    st1.insert(i);
                    st2.insert(j);
                }
            }
        }for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(st1.find(i)!=st1.end()|| st2.find(j)!=st2.end())
                {
                    matrix[i][j]=0;
                }

            }
            
        }
        
        
    }
};