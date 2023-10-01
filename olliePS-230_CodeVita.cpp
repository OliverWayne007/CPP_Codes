#include<bits/stdc++.h>
using namespace std;

int Find_Forces(int dist , int net_sum , int size , int idx , vector<int>& v)
{
    if(net_sum == dist || idx == size)
    {
        return net_sum;
    }
    int not_take = Find_Forces(dist , net_sum , size , idx + 1 , v);
    if(not_take == dist)
    {
        return not_take;
    }
    int take_pos = Find_Forces(dist , net_sum + v[idx] , size , idx + 1 , v);
    if(take_pos == dist)
    {
        return take_pos;
    }
    int take_neg = Find_Forces(dist , net_sum - v[idx] , size , idx + 1 , v);
    if(take_neg == dist)
    {
        return take_neg;
    }
    return -1;
}

int main()
{
    int n , dist;
    cin >> n;
    cout << endl;
    string dir;
    cin >> dist >> dir;
    cout << endl;
    vector<int> v;
    for(int i = 1 ; i <= n ; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int size = v.size();
    cout << endl;
    if(Find_Forces(dist , 0 , size , 0 , v) == dist)
    {
        cout << "Possible" << endl;
    }
    else
    {
        cout << "Not Possible" << endl;
    }
    return 0;
}