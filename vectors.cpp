#include <iostream>
#include <vector>
using namespace std;

int main() {
     vector<int> v(4,18); // Size = 4, all elements initialized to 18
     //if no deafult is given then 0 will bw insillsed 

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] <<" ";
    }
   cout <<endl;
    // Push elements into the vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout << "Vector after push_back(): ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] <<" ";
    }
    // Remove the last element
    v.pop_back();

    cout << "\nVector after pop_back(): ";
     for (int i = 0; i < v.size(); i++) {
        cout << v[i] <<" ";
    }

    return 0;
}