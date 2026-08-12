#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            int c = 0;

            for(int j = 0; j < nums.size(); j++) {
                if(nums[i] == nums[j])
                    c++;
            }

            if(c == 1) {
                return nums[i];
            }
        }

        return 0;
    }
};

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    Solution obj;

    cout << "Single number = " << obj.singleNumber(nums);

    return 0;
}