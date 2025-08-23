int maxArea(int* height, int heightSize){
    int left = 0;
    int right = heightSize - 1;
    int res = 0;
    while (left < right) {
        int h = fmin(height[left], height[right]);
        int w = right - left;
        res = fmax(res, h * w);

        if (height[left] <= height[right]) {
            left = left + 1;
        }
        else {
            right = right - 1;
        }
    }
    return res;
}
