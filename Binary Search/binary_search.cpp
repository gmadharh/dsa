#include <iostream>
#include <vector>

int main() {

    std::vector<int> nums = {1,3,5,7,9,11,13};

    int low = 0;
    int high = nums.size() - 1;
    int mid = 0;


    // trying to find 11
    int target = 1;


    while(low <= high) {
    
        mid = low + (high - low) / 2;

        if(nums[mid] == target){
            std::cout << "Found target at " << mid;
            break;            
        }

        else if(nums[mid] < target){
            low = mid + 1;
        }

        else  {
            high = mid - 1;
        }
    }



    return 0;
}