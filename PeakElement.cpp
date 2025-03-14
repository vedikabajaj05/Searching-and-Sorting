#include <vector>
#include <iostream>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int start = 0;
    int end = nums.size() - 1;
    
    while (start < end) {
        int mid = start + (end - start) / 2;
        
        if ((mid > 0) && (mid < nums.size() - 1)) {
            if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
                return mid;
            } else if (nums[mid - 1] > nums[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } 
        else if (mid == 0) {
            if (nums.size() == 1 || nums[0] > nums[1]) return 0;
            return 1;
        } 
        else if (mid == nums.size() - 1) {
            if (nums[mid] > nums[mid - 1]) return mid;
            return mid - 1;
        }
    }
    return start;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};
    int result = findPeakElement(nums);
    
    cout << "Peak element index: " << result << endl;
    return 0;
}
