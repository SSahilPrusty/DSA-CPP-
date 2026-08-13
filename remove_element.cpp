#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[c] = nums[i];
                c++;
            }
        }

        return c;
    }
};

int main()
{
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    Solution obj;   // Create object

    int k = obj.removeElement(nums, val);

    cout << "Number of remaining elements: " << k << endl;

    cout << "Array: ";
    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}