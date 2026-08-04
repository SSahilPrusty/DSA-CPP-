#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,zero=0,ones=0;
    vector<int> v;
    while(1)
    {
        cout<<"ENTER THE 0 AND 1 FOR INPUT IN ARRAY AND OTHER TO EXIT"<<endl;
        cin>>n;
        if(n==0||n==1)
        {
            v.push_back(n);
            if(n==0) zero++;
            if(n==1) ones++;
        }
        else break;

    }
    cout<<"{ ";
    for (int x : v)
        cout << x << " ";
    cout<<"}"<<endl;
     for (int i = 0; i <= zero; i++)
        v[i]=0;
     for (int i = ones; i < v.size(); i++)
        v[i]=1;
        cout<<"THE SEGREGATED ARRAY IS ";
        cout<<"{ ";
    for (int x : v)
        cout << x << " ";
    cout<<"}";
    return 0;
}