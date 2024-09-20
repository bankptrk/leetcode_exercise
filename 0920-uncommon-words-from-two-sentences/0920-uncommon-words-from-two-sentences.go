func uncommonFromSentences(s1 string, s2 string) []string {
    mpp := make(map[string]int)
    var ans []string
    for _, sen := range append(strings.Split(s1, " "), strings.Split(s2, " ")...){
        mpp[sen]++
    }
    for sen, val := range mpp{
        if val == 1{
            ans = append(ans, sen)
        }
    }
    return ans
}