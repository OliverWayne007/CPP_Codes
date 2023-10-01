#include<iostream>
using namespace std;
// BASIC CLASSES AND OBJECTS.
class YouTubeChannel
{
   public:
   string OwnerName;
   string ChannelName;
   int SubscribersCount;
   void getinfo()
   {
       cout<<"OwnerName: "<<OwnerName<<endl;
       cout<<"ChannelName: "<<ChannelName<<endl;
       cout<<"Subscribers Count: "<<SubscribersCount<<endl;
   }
};

int main()
{
    YouTubeChannel ytchannel;
    ytchannel.OwnerName = "Saldina";
    ytchannel.ChannelName = "CodeBeauty";
    ytchannel.SubscribersCount = 1800;

    // cout<<"OwnerName: "<<ytchannel.OwnerName<<endl;
    // cout<<"ChannelName: "<<ytchannel.ChannelName<<endl;
    // cout<<"Subscribers Count: "<<ytchannel.SubscribersCount<<endl;
    ytchannel.getinfo();

    YouTubeChannel ytchannel2;
    ytchannel2.OwnerName = "Amy";
    ytchannel2.ChannelName = "Amy Sings";
    ytchannel2.SubscribersCount = 2000;

    // cout<<"OwnerName: "<<ytchannel2.OwnerName<<endl;
    // cout<<"ChannelName: "<<ytchannel2.ChannelName<<endl;
    // cout<<"Subscribers Count: "<<ytchannel2.SubscribersCount<<endl;
    ytchannel2.getinfo();

    return 0;
}