# Leetcode
## Prefix Sum

### Subarray equal to K


## Graph

### Topological Sort
預先算好每個node的indegree，從indegree=0的nodes開始剝洋蔥

### Dijkstra
BFS + Priority Queue
>pq 存的是從source node到某個node的cost

## DFS
### Backtracking
通常可以用index或visited來避免重複拜訪
基本上就是recursion暴力解就對了

## Binary Search
1. Search in sorted data
2. Guess a solution in solution space (solution space usually be monotonic such as 0~INT_MAX)

## Monotonic Stack
1. Next/Prev Greater/Smaller element
2. subarray minimum/maximum (把元素當作最小值，找區間的左邊界/右邊界)
3. 遞減序列/遞增序列
4. (tricky) Largest Rectangle in Histogram related problems
>idea: 先找高度，然後找左右邊界

## Union Find
connected components相關問題