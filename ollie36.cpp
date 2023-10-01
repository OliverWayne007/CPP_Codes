#include<iostream>
using namespace std;
// CONSTRUCTORS IN CLASSES.
class YouTubeChannel
{
    public:
    string ChannelName;
    string OwnerName;
    int SubscribersCount;
    YouTubeChannel(string name , string ownername , int subscriberscount)
    {
       ChannelName=name;
       OwnerName=ownername;
       SubscribersCount=subscriberscount;
    }
    void getinfo();

};

void YouTubeChannel:: getinfo()
{
    cout<<"ChannelName: "<<ChannelName<<endl;
    cout<<"OwnerName: "<<OwnerName<<endl;
    cout<<"SubscribersCount: "<<SubscribersCount<<endl;
    cout<<endl;
}

int main()
{
    YouTubeChannel ytchannel("CodeBeauty" , "Saldina" , 1000);
    ytchannel.getinfo();
    YouTubeChannel ytchannel2("AmySings" , "Amy" , 2000);
    ytchannel2.getinfo();
    YouTubeChannel ytchannel3("KatyEats" , "Katy" , 3000);
    ytchannel3.getinfo();
    YouTubeChannel ytchannel4("RonnieParkours" , "Ronnie" , 5000);
    ytchannel4.getinfo();
    return 0;
}
