#include <vector>
#include <stdio.h>
#include <cmath> 
#include <iostream>
using namespace std;

bool search(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) return true;

        // Handle duplicates to avoid infinite loops
        if (nums[start] == nums[mid] && nums[mid] == nums[end]) {
            start++;
            end--;
        }
        // Left half is sorted
        else if (nums[start] <= nums[mid]) {
            if (nums[start] <= target && target < nums[mid]) 
                end = mid - 1;  // Search left half
            else 
                start = mid + 1; // Search right half
        }
        // Right half is sorted
        else {
            if (nums[mid] < target && target <= nums[end]) 
                start = mid + 1; // Search right half
            else 
                end = mid - 1;  // Search left half
        }
    }

    return false;
}
int main(){
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    bool result =  search(nums,target);
    
    cout << result << endl;
    return 0;
}