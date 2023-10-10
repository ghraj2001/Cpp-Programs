class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        vector<int>row;
        vector<int>col;
        int n=a.size();
        int m=a[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==0)
                {
                    cout<<i<<" "<<j<<endl;
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        for(int i=0;i<row.size();i++)
        {
            for(int j=0;j<m;j++)
            {
                a[row[i]][j]=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<col.size();j++)
            {
                a[i][col[j]]=0;
            }
        }
    }
};