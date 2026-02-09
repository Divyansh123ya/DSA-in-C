#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main()
{
    unordered_map<int,int>m;
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        m[v[i]]++;
    }
    for(auto itr:m)
    {
        cout<<itr.first<<" "<<itr.second<<endl;
    }

}