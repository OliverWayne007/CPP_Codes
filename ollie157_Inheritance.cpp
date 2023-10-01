#include<bits/stdc++.h>

using namespace std;

// Availability vs Accessibility and Visibility modes

// Inheritance establishes a "is-a" relationship between the Derived and the Base class

// "is-a" relationship can only be implemented via public inheritance

// "is-a" relationship states that the public attributes and methods of the base class should also be publicly available to the 
// derived class. Therefore, it can only be implemented via public inheritance.

class Car
{
    private:

    int gear = 0;

    protected:

    void getGearValue()
    {
        cout << "The vehicle is currently in gear " << this -> gear << endl;
    }

    public:

    void incrementGear()
    {
        if(gear < 5)
        {
            gear++;
        }
    }

};

class SportsCar : public Car
{
    public:

    void currentGear()
    {
        getGearValue();
    }

};

int main()
{
    cout << endl;
    SportsCar sc;
    sc.currentGear();
    sc.incrementGear();
    sc.currentGear();
    cout << endl;
    return 0;
}