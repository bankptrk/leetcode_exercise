func uncommonFromSentences(s1 string, s2 string) []string {
    mpp := make(map[string]int)
    var ans [] string
    sentence1 := strings.Split(s1, " ")
    sentence2 := strings.Split(s2, " ")

    for _, sen := range sentence1{
        mpp[sen]++
    }
    for _, sen := range sentence2{
        mpp[sen]++
    }
    for sen, cnt := range mpp{
        if cnt == 1{
            ans = append(ans, sen)
        }
    }
    return ans
}