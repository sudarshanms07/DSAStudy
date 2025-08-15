#include <iostream>

#include <vector>
using namespace std;

int missingNumber(vector<int>& nums){    
    int n = nums.size() ;
    int totalSum = n * (n + 1) / 2;

    int arraySum = 0;
    for (int num : nums) {
        arraySum += num;
    }

    int missingNumber = totalSum - arraySum;

    return missingNumber;
}


int main(){
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(7);
    nums.push_back(0);

    cout<<missingNumber(nums);
}