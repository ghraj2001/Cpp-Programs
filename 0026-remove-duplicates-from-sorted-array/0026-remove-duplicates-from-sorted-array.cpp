class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int i=1, k=1;
        int n=a.size();
        while(i<n)
        {
           if(a[i]!=a[i-1])
           {
               a[k]=a[i];
               k++;
           }
           i++;
        }
        // for(auto x:a)cout<<x<<" ";
        int m=set(a.begin(),a.end()).size();
        return k;
    }
};