經典題目
1.用template
int j = 0;
for (int i = 0; i < boundary condition; i++) {
    while (j < boundary condition && something) {
      j++;
    }
}
2.constant time維護sliding window資訊，以這題就是用unordered_set來知道sliding window有哪些character
