#include<bits/stdc++.h>
using namespace std;
int main()
{
    // DECLARING A SET
    set<int>st;
    // INSERTING INTO A SET
    // By default set stores all the unique elements in ascending order(sorted fashion). 
    st.insert(10);
    st.insert(8);
    st.insert(5);
    st.insert(7);
    st.insert(37);
    // INSERTING THE ELEMENT 7 AGAIN
    st.insert(7);    // set does not store duplicate elements. It stores only unique elements. So, it will not store 7 again.
    // PRINTING THE ELEMENTS OF THE SET USING AN ITERATOR
    for(auto it:st)
    {
        cout<<it<<" ";   // only one 7 will be printed.
    }
    cout<<endl;
    // COPYING THE ELEMENTS ONE SET TO ANOTHER
    set<int>st1(st.begin() , st.end());
    for(auto it = st1.begin() ; it!=st1.end() ; it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    // COPYING THE ELEMENTS OF A SET IN DESCENDING ORDER
    set<int , greater<int>>st3(st.begin() , st.end());
    auto it = st3.begin();
    while(it != st3.end())
    {
        cout<<(*it)<<" ";
        it++;
    }
    cout<<endl;
    // USING THE EMPTY FUNCTION TO CHECK IF THE SET IS EMPTY
    cout<<st3.empty()<<endl;
    // COPYING THE ELEMENTS OF SET st INTO ANOTHER SET st4
    set<int>st4(st.begin() , st.end());
    // PRINTING THE ELEMENTS OF st4
    for(auto it:st4)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    // PRINTING THE NUMBER OF ELEMENTS IN SET st4
    cout<<st4.size()<<endl;
    // CLEARING/DELETING ALL THE ELEMENTS OF THE SET st4
    st4.clear();
    // PRINTING THE SIZE OF THE SET st4 AGAIN
    cout<<st4.size()<<endl;
    // COPYING THE ELEMENTS OF THE SET st INTO A NEW SET st5
    set<int>st5(st.begin() , st.end());
    for(auto it:st5)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    st5.insert(100);
    st5.insert(2);
    st5.insert(1);
    st5.insert(3);
    st5.insert(0);
    for(auto it:st5)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<st5.max_size()<<endl;

    return 0;
}