#include <vector>
#include <iostream>
using namespace std;

int findMin(vector<int>& nums) {
    int low=0;
    int high=nums.size()-1;
    while(low<high){
        int mid=low+(high-low)/2;
        if(nums[low]==nums[mid] && nums[mid]==nums[high]){
            low++;
            high--;
            continue;
        }
        if(nums[mid]>nums[high]){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return nums[high];
}

int main() {
    vector<int> nums = {1, 3, 5};
    int result = findMin(nums);
    cout << result << endl;
    return 0;
}
