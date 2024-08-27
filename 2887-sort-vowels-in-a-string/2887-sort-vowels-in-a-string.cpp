class Solution {
private:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I'
        || c == 'O' || c == 'U') return true;
        return false;
    }
public:
    string sortVowels(string s) {
        vector<int> freq(128,0);
        for(int i=0; i<s.size(); i++){
            if(isVowel(s[i])) freq[s[i]]++;
        }
        int index = 0;
        for(int i=0; i<s.size(); i++){
            if(isVowel(s[i])){
                while(freq[index] == 0) index++;
                s[i] = char(index);
                freq[index]--;
            }
        }
        return s;
    }
};