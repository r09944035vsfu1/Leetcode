Two Pointer 經典題
1.控制left, right，從左右往中間移動
2.移動left還是移動right，以這題來說，如果
numbers[left] + numbers[right] < target，代表可以移動left，這樣預期接下來可以找到更大的值
numbers[left] + numbers[right] > target，代表可以移動right，這樣預期接下來可以找到更小的值

