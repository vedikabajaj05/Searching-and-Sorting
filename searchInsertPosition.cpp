#include <vector>
#include <stdio.h>
#include <cmath> 
#include <iostream>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
       int sizeOfArray = nums.size();
       int start = 0;
       int end = sizeOfArray - 1;

       while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (nums[mid] == target) return mid;
        else if (nums[mid] < target) start = mid + 1;
        else end = mid - 1;
    }
       return start;
}
int main(){
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    int result =  searchInsert(nums,target);
    
    cout << result << endl;
    return 0;
}