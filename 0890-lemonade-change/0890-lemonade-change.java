class Solution {
    public boolean lemonadeChange(int[] bills) {
        int fiveUsd = 0 ,tenUsd = 0;
        for(int customer : bills){
            if(customer == 5) fiveUsd++;
            else if(customer == 10){
                if(fiveUsd > 0){
                    fiveUsd--;
                    tenUsd++;
                }else return false;
            }else{
                if(tenUsd > 0 && fiveUsd > 0){
                    tenUsd--;
                    fiveUsd--;
                }else if(fiveUsd >= 3) fiveUsd -= 3;
                else return false;
            }
        }
        return true;
    }
}