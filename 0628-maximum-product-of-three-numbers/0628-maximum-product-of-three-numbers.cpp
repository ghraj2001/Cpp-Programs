class Solution {
public:
    int maximumProduct(vector<int>& a) {
         sort(a.begin(),a.end());
        int n=a.size();
        return max(max(a[0]*a[1]*a[2],a[0]*a[1]*a[n-1]),a[n-1]*a[n-2]*a[n-3]);
    }
};