bool search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    int mid;

    while ((right > left) && (nums[right] == nums[0])) {
        right--;
    }

    while (left < right) {
        mid = (left + right) / 2;

        if (nums[mid] == target) return true;

        if ((nums[mid] >= nums[0]) == (target >= nums[0])) {
            if (target >= nums[mid]) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        else if (target >= nums[0]) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    if ((left == right) && (nums[left] == target)) return true;

    return false;
}
