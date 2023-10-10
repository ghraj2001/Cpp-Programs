class Solution {
public:
    double trimMean(vector<int>& a) {
        int n=a.size();
        double m=(n*5)/100;
        sort(a.begin(),a.end());
        int i=m;
        int s=0;
        while(i<n-m)
        {
            s+=a[i];
            i+=1;
        }
        cout<<i<<" "<<s<<" "<<n-2*m;
        return s/(n-(2*m));
    }
};