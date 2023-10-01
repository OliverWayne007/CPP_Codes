#include<iostream>
using namespace std;
// ACCESS SPECIFIERS AND DATA ENCAPSULATION IN CLASSES.
class YouTubeChannel
{
    private:
    string OwnerName;
    string ChannelName;
    int SubscribersCount;

    public:
    YouTubeChannel(string ownername , string channelname , int subscriberscount)
    {
        OwnerName = ownername;
        ChannelName = channelname;
        SubscribersCount = subscriberscount;
    }

    void getinfo();
    void IncreaseSubscribersCount();
    void DecreaseSubscribersCount();
};

void YouTubeChannel :: getinfo()
{
    cout<<"OwnerName: "<<OwnerName<<endl;
    cout<<"ChannelName: "<<ChannelName<<endl;
    cout<<"SubscribersCount: "<<SubscribersCount<<endl;
    cout<<endl;
}

void YouTubeChannel :: IncreaseSubscribersCount()
{
    SubscribersCount++;
}

void YouTubeChannel :: DecreaseSubscribersCount()
{
    if(SubscribersCount>0)
    SubscribersCount--;
}

int main()
{
    YouTubeChannel YTchannelOne("Saldina" , "CodeBeauty" , 2000);
    YTchannelOne.getinfo();
    YouTubeChannel YTchannelTwo("Amy" , "AmySings" , 3000);
    YTchannelTwo.getinfo();
    YTchannelOne.IncreaseSubscribersCount();
    YTchannelTwo.DecreaseSubscribersCount();
    YTchannelOne.getinfo();
    YTchannelTwo.getinfo();
    return 0;
}