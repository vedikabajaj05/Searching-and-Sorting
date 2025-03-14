#include <vector>
#include <stdio.h>
#include <cmath> 
#include <iostream>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {

    vector<int> answer(2,-1);
    int sizeOfArray = nums.size();

    int start = 0, end = sizeOfArray - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (target == nums[mid]) { 
            answer[0] = mid;
            end = mid - 1; 
        }
        else if (target < nums[mid]) end = mid - 1;
        else start = mid + 1;
    }

    start = 0, end = sizeOfArray - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (target == nums[mid]) { 
            answer[1] = mid;
            start = mid + 1; 
        }
        else if (target < nums[mid]) end = mid - 1;
        else start = mid + 1;
    }
    
    return answer;
}

int main(){
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    vector<int> result =  searchRange(nums,target);
    
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}
