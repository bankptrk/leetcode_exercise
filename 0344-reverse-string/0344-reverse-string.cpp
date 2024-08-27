class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size()-1;
        for(int i=0,j=n;i<=j;i++,j--){
            swap(s[i],s[j]);
        }
    }
};