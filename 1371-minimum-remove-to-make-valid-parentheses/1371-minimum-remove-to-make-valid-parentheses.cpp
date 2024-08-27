class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        string ans = "";
        for(int i=0; i<s.size(); i++){
            if(s[i] == '(') st.push(i);
            else if(s[i] == ')'){
                if(st.empty()) s[i] = 'V';
                else st.pop();
            }
        }
        while(!st.empty()){
            s[st.top()] = 'V';
            st.pop();
        }
        for(auto c : s){
            if(c != 'V') ans += c;
        }
        return ans;
    }
};