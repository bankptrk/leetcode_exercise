class Solution {
public:
    bool isValid(string s) {
        stack<char> res;
        for(char c : s){
          if(c == '(' || c == '[' || c == '{'){
            res.push(c);
          }else{
            if(res.empty()){
              return false;
            }
            if(c == ')' && res.top() == '(') res.pop();
            else if(c == ']' && res.top() == '[') res.pop();
            else if(c == '}' && res.top() == '{') res.pop();
            else return false;
          }
        }
        return res.empty();
    }
};