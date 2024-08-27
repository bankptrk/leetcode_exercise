class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int tcnt = 0, ans = 0, fcnt = 0, j = 0;
        for(int i=0; i<answerKey.length(); i++){
            if(answerKey[i] == 'F') fcnt++;
            else tcnt++;
            while(min(fcnt,tcnt) > k){
                if(answerKey[j] == 'F') fcnt--;
                else tcnt--;
                j++;
            }
            ans = max(tcnt+fcnt,ans);
        }
        return ans;
    }
};