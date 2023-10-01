#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // DECLARING A VECTOR OF SIZE 4 AND INITIALIZING IT WITH THE VALUE 10.
    vector<int>vec(4,10);   
    for(auto it:vec)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // DECLARING A VECTOR OF SIZE 5 BUT NOT INITIALIZING IT.
    vector<int>b(5);       
    cout<<b.size()<<endl;
    for(auto it:b)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // vector<int>vec1 = {10,20,30,40};
    // vector<int>vec2(vec1.begin() , vec1.end());
    // for(auto it = vec2.begin() ; it!=vec2.end() ; it++)
    // {
    //     cout<<(*it)<<" ";
    // }
    // cout<<endl;
    // cout<<vec2.size()<<endl;
    // cout<<vec2.at(1)<<endl;
    // cout<<vec2.front()<<endl;
    // cout<<vec2.back()<<endl;
    // vec2.clear();
    // cout<<vec2.size()<<endl;
    // cout<<vec2.empty()<<endl;

    // vector<int>raj;
    // raj.push_back(11);
    // raj.push_back(13);
    // raj.push_back(17);
    // raj.push_back(19);
    // vector<int>v(raj.begin() , raj.begin()+2);
    // for(int i = 0 ; i<v.size() ; i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // v.push_back(16);
    // v.push_back(17);
    // v.push_back(19);
    // cout<<v.empty()<<endl;
    // for(auto it:v)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // v.erase(v.begin()+2);
    // cout<<v.size()<<endl;
    // cout<<*(v.begin()+2)<<endl;
    // for(auto it:v)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    vector<int>a = {1,2,3,4,5};
    cout<<a.size()<<endl;
    for(int i = 0 ; i<a.size() ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}