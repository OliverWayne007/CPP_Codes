#include<bits/stdc++.h>
using namespace std;

// Class is just a logical construct , a template , a blueprint. It is a user-defined datatype.
// Object is quite literally the "Real Deal". It is an instance of the class. It is a real world entity. It is a physical reality.
// Object actually occupies space in the  memory, hence a physical reality.

class Hero
{
    public:

    int health;

    string name;
    
    char level;

};

int main()
{
    Hero h1;
    cout << "Size of h1: " << sizeof(h1) << " bytes" << endl;
    // cout << h1.health << endl;
    return 0;
}