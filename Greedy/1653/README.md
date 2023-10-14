看到minimum想到可以試試greedy，再來可以想到說如果要把原本字串轉化成aaaa....bbbb的形式所需要的operation數量，其實就是以a和b切換的邊界，考慮左邊的b數量+右邊的a數量就是要刪掉的字符數量。所以如果我們可以在O(1)情況算出來，就可以O(n)每個index當作邊界來try，因此可以想到用prefix/suffix的概念，整合起來就是Three Pass的問題