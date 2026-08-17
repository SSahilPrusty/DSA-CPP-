#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int one = 0, max = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                one++;
                max = (one > max) ? one : max;
            }
            else {
                one = 0;
            }
        }

        return max;
    }
};

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    Solution obj;

    cout << "Maximum consecutive 1s = "
         << obj.findMaxConsecutiveOnes(nums);

    return 0;
}