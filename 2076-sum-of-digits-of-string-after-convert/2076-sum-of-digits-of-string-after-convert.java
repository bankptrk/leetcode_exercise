class Solution {
    public int getLucky(String s, int k) {
        StringBuilder num = new StringBuilder();
        for(char ch : s.toCharArray()){
            num.append(ch - 'a' + 1);
        }
        while(k-- > 0){
            int digitSum = 0;
            for(char ch : num.toString().toCharArray()){
                digitSum += ch - '0';
            }
            num = new StringBuilder(String.valueOf(digitSum));
        }
        return Integer.parseInt(num.toString());
    }
}