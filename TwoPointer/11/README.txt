Two Pointer 經典題
1.控制left, right，從左右往中間移動
2.移動left還是移動right，以這題來說

因為裝滿水的area，會受到left跟right的高度影響，誰比較小，實際的水位就是width * min(height[left], height[right)
這題有個很有趣的概念在於，因為移動比較高的那邊，接下來一定還會受比較小的影響，所以在width變小情況，一定比較小
所以只能移動小的那邊
算是一種分情況概念
                                                                    
