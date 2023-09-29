# Leetcode
## Prefix Sum

### Subarray equal to K


## Graph

### Topological Sort
預先算好每個node的indegree，從indegree=0的nodes開始剝洋蔥

### Dijkstra
BFS + Priority Queue
>pq 存的是從source node到某個node的cost

### Floyd Warshall
總共三層for loop  
每次加入node k 就兩層for loop更新dp[i][j]  
```dp[i][j]``` is the shortest path from node i to node j
```
dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j])
```
## DFS
### Backtracking
通常可以用index或visited來避免重複拜訪
基本上就是recursion暴力解就對了

## Binary Search
1. Search in sorted data
2. Guess a solution in solution space (solution space usually be monotonic such as 0~INT_MAX)
3. Top-k problem
>跟2.很類似，都是猜答案，然後count有多少個符合。正確答案會發生在cout==K的時候  
>在算count >, =, < k的時候，等號"="到底是放在大於還是小於，可以單獨先想是等號時是移動left還是right  
>或者就直接分成>, =, <三種情況也可以，思考會比較清楚
## Monotonic Stack
1. Next/Prev Greater/Smaller element
2. subarray minimum/maximum (把元素當作最小值，找區間的左邊界/右邊界)
3. 遞減序列/遞增序列
4. (tricky) Largest Rectangle in Histogram related problems
>idea: 先找高度，然後找左右邊界

## Union Find
connected components相關問題 