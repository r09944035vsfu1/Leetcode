經典題目
1.用template
int j = 0;
for (int i = 0; i < boundary condition; i++) {
    while (j < boundary condition && something) {
      j++;
    }
}
2.constant time維護sliding window資訊，以這題就是用unordered_set來知道sliding window有哪些character
3.這題有個小技巧是，用vecotor來表示'A' to 'Z' to frequency，還有把frequency更新跟檢查都放在同個functions，這樣可以避免移動sliding window i,j時，會重複計算的問題
