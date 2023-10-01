#include<iostream>
#include<string>
using namespace std;
// STRINGS AND ITS FUNCTIONS.
int main()
{
    // string str;
    // cin>>str;            // YAHAN DIRECT cin USE KAR RAHE HAIN ISLIYE , ISME PEHLE SPACE KE BAAD KA KUCH BHI PRINT NAHI HOGA.
    // cout<<str<<endl;

    // string str1(5,'b');  // ISSE 5 'b' CHARACTERS WALA STRING BAN JAAYEGA.
    // cout<<str1<<endl;

    // string str2 = "OliverQueen";
    // cout<<str2<<endl;

    // string str3 = "Oliver Queen";    // ISME POORA SPACE KE SAATH as it is PRINT HO JAAYEGA.
    // cout<<str3<<endl;

    // string str4;
    // getline(cin , str4);   // YAHAN getline BHI USE KAR RAHE HAIN ISLIYE , ISME POORA as it is PRINT HO JAAYEGA.
    // cout<<str4<<endl;

    // string str5 = "fam";
    // string str6 = "ily";
    // str5.append(str6);     // ISKO BOLTE HAIN str5 MEIN str6 KO APPEND KARANA. Append karna matlab jodna.
    // cout<<str5<<endl;

    // string str7 = "fam";
    // string str8 = "ily";
    // string str9 = str7 + str8;
    // cout<<str9<<endl;

    // string s1 = "dovibuoy";
    // cout<<s1[3]<<endl;       // IS TARAH SE STRING KO ARRAY KI TARAH TREAT KARKE USKE KISI BHI ELEMENT KO ACCESS KAR SAKTE HAIN.

    string fart = "arpit is a sexy ass !!!";
    if(fart.empty())
    {
        cout<<"The string is empty !!!"<<endl;
    }
    else if(!fart.empty())
    {
        cout<<"The string is not empty !!!"<<endl;
    }
    fart.clear();
    if(fart.empty())
    {
        cout<<"The string is now empty !!!"<<endl;
    }

    string burp = "abc";
    string dumb = "xyz";
    string poop = "abc";
    cout<<burp.compare(dumb)<<endl;
    cout<<dumb.compare(burp)<<endl;
    cout<<poop.compare(burp)<<endl;
    cout<<burp.compare(poop)<<endl;
    if(burp.compare(dumb)==0)
    {
        cout<<"The strings are equal !!!"<<endl;
    }
    else if(burp.compare(dumb)!=0)
    {
        cout<<"The strings are not equal !!!"<<endl;
    }
    if(dumb.compare(burp)==true)                // WE CAN ALSO WRITE 1 IN PLACE OF TRUE AND ZERO IN PLACE OF FALSE.
    {
        cout<<"The strings are not equal !!!"<<endl;
    }
    if(burp.compare(poop)==false)
    {
        cout<<"The strings are equal !!!"<<endl;
    }
    else if(burp.compare(poop)!=0)
    {
        cout<<"The strings are not equal !!!"<<endl;
    }
    

    
    return 0;
}