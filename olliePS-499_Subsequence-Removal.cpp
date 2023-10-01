#include<bits/stdc++.h>
using namespace std;
 
void solve(string& str)
{
	int len = str.length();
	vector<int> v , c , n , d;
 
	for(int i = 0 ; i < len ; i++)
	{
		if(str[i] == 'V')
		{
			v.push_back(i);
		}
		else if(str[i] == 'N')
		{
			n.push_back(i);
		}
		else if(str[i] == 'C')
		{
			c.push_back(i);
		}
		else
		{
			d.push_back(i);
		}
	}
 
	if(v.size() == 0 || n.size() == 0 || c.size() == 0 || d.size() == 0)
	{
		cout << 0 << endl;
		return;
	}
 
	int ans = 0;
	int pnid = 0 , pcid = 0 , pdid = 0;
 
	for(int i = 0 ; i < v.size() ; i++)
	{
		int nid = upper_bound(n.begin() + pnid , n.end() , v[i]) - n.begin();
		if(nid == n.size())
		{
			break;
		}
 
		pnid = nid + 1;
 
		int nid_val = n[nid];
		
		int cid = upper_bound(c.begin() + pcid , c.end() , nid_val) - c.begin();
 
		if(cid == c.size())
		{
			break;
		}
 
		pcid = cid + 1;
 
		int cid_val = c[cid];
 
		int did = upper_bound(d.begin() + pdid , d.end() , cid_val) - d.begin();
 
		if(did == d.size())
		{
			break;
		}
 
		pdid = did + 1;
 
		int did_val = d[did];
 
		ans += 1;
	}
 
	cout << ans << endl;
    
	return;
}
 
int main()
{
	string str;
	cin >> str;
	solve(str);
	return 0;
}