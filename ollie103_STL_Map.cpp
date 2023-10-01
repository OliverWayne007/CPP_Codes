#include<bits/stdc++.h>
using namespace std;
// MAP CONTAINER STORES KEY-VALUE PAIRS IN ASCENDING ORDER OF KEYS.
int main()
{
    map<string , string>Mymap1;
    Mymap1.insert(pair<string,string>("Oliver" , "Queen"));
    Mymap1.insert(pair<string,string>("Bruce" , "Wayne"));
    Mymap1.insert(pair<string,string>("Clarke" , "Kent"));
    Mymap1.insert(pair<string,string>("Barry" , "Allen"));

    cout<<"The value of Mymap1.size() is: "<<Mymap1.size()<<endl;
    cout<<"The key-value pairs stored in Mymap1 are: "<<endl;

    // USING THE FOR-EACH LOOP.
    for(auto pair:Mymap1)
    {
        cout<<pair.first<<" - "<<pair.second<<endl;
    }

    cout<<endl;

    map<string , string>Mymap2;
    Mymap2.insert({"Steve" , "Rogers"});
    Mymap2.insert({"Bucky" , "Barnes"});
    Mymap2.insert({"Sam" , "Wilson"});

    cout<<"The value of Mymap2.size() is: "<<Mymap2.size()<<endl;
    cout<<"The key-value pairs stored in Mymap1 are: "<<endl;

    for(auto it = Mymap2.begin() ; it!=Mymap2.end() ; it++)
    {
        cout<<it->first<<" - "<<it->second<<endl;
    }

    cout<<endl;

    map<string , string>Mymap3 = {{"Tony","Stark"} , {"Peter","Parker"} , {"Bruce","Banner"} , {"Eddie","Brock"}};

    cout<<"The value of Mymap3.size() is: "<<Mymap3.size()<<endl;
    cout<<"The key-value pairs stored in Mymap1 are: "<<endl;

    for(auto pair:Mymap3)
    {
        cout<<pair.first<<" - "<<pair.second<<endl;
    }

    cout<<endl;

    map<string , string>Mymap4;
    pair<string , string> p1 ={"Clint","Barton"};
    pair<string , string> p2 ={"Kate","Bishop"};
    pair<string , string> p3 ={"Natasha","Romanoff"};
    pair<string , string> p4 ={"Yelena","Belova"};
    Mymap4.insert(p1);
    Mymap4.insert(p2);
    Mymap4.insert(p3);
    Mymap4.insert(p4);

    cout<<"The value of Mymap4.size() is: "<<Mymap4.size()<<endl;
    cout<<"The key-value pairs stored in Mymap1 are: "<<endl;

    map<string , string> :: iterator itr;

    for(itr = Mymap4.begin() ; itr!=Mymap4.end() ; itr++)
    {
        cout<<itr->first<<" - "<<itr->second<<endl;
    }

    cout<<endl;

    map<string , string>Mymap5;
    Mymap5.insert(pair<string,string>("Eobard","Thawne"));
    Mymap5.insert(pair<string,string>("Slade","Wilson"));
    Mymap5.insert(pair<string,string>("Ras","Al Ghul"));
    Mymap5.insert(pair<string,string>("Hunter","Zolomon"));
    Mymap5.insert(pair<string,string>("Malcom","Merlyn"));

    cout<<"The value of Mymap5.size() is: "<<Mymap5.size()<<endl;
    cout<<"The key-value pairs stored in Mymap5 are: "<<endl;

    for(auto pair: Mymap5)
    {
        cout<<pair.first<<" - "<<pair.second<<endl;
    }

    Mymap5.clear();

    cout<<"The value of Mymap5.size() after Mymap5.clear() is: "<<Mymap5.size()<<endl;

    cout<<endl;

    map<string , string>Mymap6;
    Mymap6.insert({"Laurel","Lance"});
    Mymap6.insert({"Sara","Lance"});
    Mymap6.insert({"Felicity","Smoak"});
    Mymap6.insert({"Thea","Queen"});
    Mymap6.insert({"Caitlin","Snow"});
    Mymap6.insert({"Iris","West"});

    cout<<"The value of Mymap6.size() is: "<<Mymap6.size()<<endl;
    cout<<"The key-value pairs stored in Mymap6 are: "<<endl;

    for(auto pair: Mymap6)
    {
        cout<<pair.first<<" - "<<pair.second<<endl;
    }

    cout<<endl;

    Mymap6.erase("Iris");

    for(auto pair: Mymap6)
    {
        cout<<pair.first<<" - "<<pair.second<<endl;
    }

    cout<<endl;

    auto it = Mymap6.find("Thea");
    Mymap6.erase(it);

    for(auto pair: Mymap6)
    {
        cout<<pair.first<<" - "<<pair.second<<endl;
    }

    cout<<endl;

    auto begin = Mymap6.begin();
    begin++;
    auto end = Mymap6.end();
    end--;
    Mymap6.erase(begin , end);

    for(auto pair: Mymap6)
    {
        cout<<pair.first<<" - "<<pair.second<<endl;
    }

    cout<<endl;

    Mymap6.erase(Mymap6.begin() , Mymap6.end());

    for(auto pair: Mymap6)
    {
        cout<<pair.first<<" - "<<pair.second<<endl;
    }

    cout<<Mymap6.empty()<<endl;

    return 0;
}