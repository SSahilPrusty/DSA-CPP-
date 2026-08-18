#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;

        int i = 0;
        int j = numbers.size() - 1;

        while (i < j) {
            int sum = numbers[i] + numbers[j];

            if (sum < target)
                i++;
            else if (sum > target)
                j--;
            else {
                ans.push_back(i + 1);
                ans.push_back(j + 1);
                return ans;
            }
        }

        return ans;
    }
};

int main() {
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    Solution obj;

    vector<int> ans = obj.twoSum(numbers, target);

    cout << "Output: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}