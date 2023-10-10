class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
        int s=0,c=1;
        int n=a.size();
        for(int i=n-1;i>=0;i--)
        {
            s=a[i]+c;
            a[i]=s%10;
            c=s/10;
        }
         if(c==1)a.insert(a.begin(), 1);
         return a;
    }
};