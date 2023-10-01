#include<bits/stdc++.h>
using namespace std;

class Instrument
{

    // private:

    // virtual void make_sound()
    // {
    //     cout << "Instrument is playing !!!" << endl;
    // }

    // protected:

    // virtual void make_sound()
    // {
    //     cout << "Instrument is playing !!!" << endl;
    // }

    public:

    Instrument()
    {
        cout << "Explicit default constructor of the Instrument class is called !!!" << endl;
    }

    virtual void make_sound()
    {
        cout << "Instrument is playing !!!" << endl;
    }

    void General_Properties()
    {
        cout << "I can be used to produce music !!!" << endl;
    }

};

class Flute : protected Instrument
{
    private:

    void How_Does_It_Sound()
    {
        cout << "It sounds really nice !!!" << endl;
    }

    public:

    Flute()
    {
        cout << "Explicit Default constructor of the Flute class is called !!!" << endl;
    }

    void make_sound()
    {
        cout << "Flute is playing !!!" << endl;
        How_Does_It_Sound();
    }

};

// Whenever an object of a class is created , a constructor of that class is always called !!! 

int main()
{
    // Instrument i1;
    // i1.make_sound();
    // Flute f1;
    // f1.make_sound();
    // Flute *fptr = new Flute();
    // fptr -> make_sound();
    // fptr -> General_Properties();
    // Instrument *iptr1 = new Instrument();
    // iptr1 -> make_sound();
    Instrument *iptr2 = new Flute();
    iptr2 -> make_sound();
    // iptr2 -> General_Properties();
    return 0;
}