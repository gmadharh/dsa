#include <iostream>
#include <vector>

int main() {

    std::vector<int> nums = {5,6,9,1,4,7};


    int j, temp;
    for(int i = 1; i < nums.size();i++){
        j = i;
        while(j > 0 && nums[j-1]> nums[j]){
            temp = nums[j];
            nums[j] = nums[j-1];
            nums[j-1] = temp;
            j -= 1;
        }
    }

    for(int num: nums){
        std::cout << num << " ";
    }

    return 0;
}