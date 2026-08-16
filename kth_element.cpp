#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        return arr[arr.size() - k];
    }
};
int main()
{
    Solution s;
    vector<int> nums;
    int n,e,k;
    cout<<"enter the size"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"enter the "<<i<<"th element"<<endl;
        cin>>e;
        nums.push_back(e);
    }
    cout<<"enter the kth element"<<endl;
    cin>>k;
   cout<< s.findKthLargest(nums,k);

return 0;
}
