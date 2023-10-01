#include<iostream>
using namespace std;
// ARRAY OF CLASS , TYPES OF CONSTRUCTORS AND DESTRUCTORS AND OPERATOR OVERLOADING.
class Student
{
    private:
    int Roll;

    public:
    string Name;
    int Age;
    string Gender;

    void printinfo();

    void SetRoll(int roll)
    {
        Roll = roll;
    }

    void GetRoll()
    {
        cout<<"Roll: "<<Roll<<endl;
    }

    // THE FOLLOWING IS A PARAMETERISED CONSTRUCTOR.
    Student(string name , int age , string gender , int roll)
    {
        cout<<"THE PARAMETERISED CONSTRUCTOR IS CALLED !!!"<<endl;
        Name = name;
        Age = age;
        Gender = gender;
        Roll = roll;
    }

    // THE FOLLOWING IS A DEFAULT CONSTRUCTOR.
    Student()
    {
        cout<<"THE DEFAULT CONSTRUCTOR IS CALLED !!!"<<endl;
    }

    // THE FOLLOWING IS A COPY CONSTRUCTOR.
    Student(Student &st3)
    {
        cout<<"THE COPY CONSTRUCTOR IS CALLED !!! "<<endl;
        Name = st3.Name;
        Age = st3.Age;
        Gender = st3.Gender;
        Roll = st3.Roll;
    }

    // NOTE: CONSTRUCTORS DO NOT HAVE A RETURN TYPE. CONSTRUCTORS ARE MEMBER-FUNCTIONS OF A CLASS OR CLASS METHODS.
    // MEMBER-FUNCTIONS OF A CLASS ARE ALSO CALLED METHODS. A CONSTRUCTOR IS ALWAYS INITIALIZED WITH THE NAME OF THE CLASS.
    // CONSTRUCTORS ARE IMPLICITLY CALLED OR INVOKED BY DEFAULT WHENEVER AN INSTANCE OF THE CLASS OR OBJECT OF THE CLASS IS FORMED.
    // SINCE THE CONSTRUCTOR IS CALLED OR INVOKED IMPLICITLY i.e BY DEFAULT WHENEVER AN OBJECT IS FORMED , IT IS INVOLUNTARY.
    // WE CANNOT PUT ANY RESTRICTONS ON THE CONSTRUCTORS i.e WE CANNOT DECIDE WHETHER THEY SHOULD BE CALLED OR NOT.
    // CONSTRUCTORS ARE DYNAMIC FUNCTIONS NOT STATIC FUNCTIONS.

    // THE FOLLOWING IS A DESTRUCTOR.
    ~Student()
    {
        cout<<"THE DESTRUCTOR IS CALLED !!!"<<endl;
    }


};

void Student :: printinfo()
{
   cout<<"Name: "<<Name<<endl;
   cout<<"Age: "<<Age<<endl;
   cout<<"Gender: "<<Gender<<endl;
   cout<<"Roll: "<<Roll<<endl;
}


int main()
{
    Student st1;
    st1.Name = "Oliver";
    st1.Age = 27;
    st1.Gender = "Male";
    st1.SetRoll(20115016);
    st1.GetRoll();
    st1.printinfo();

    // Student st2("Bruce" , 28 , "Male");
    // st2.printinfo();

    // Student arr[3] = { {"Malcom" , 34 , "Male"} , {"Slade" , 40 , "Male"} , {"Adrian" , 29 , "Male"} };

    // cout<<"Name: "<<arr[0].Name<<endl;
    // cout<<"Age: "<<arr[0].Age<<endl;
    // cout<<"Gender: "<<arr[0].Gender<<endl;
    // cout<<endl;
    //  cout<<"Name: "<<arr[1].Name<<endl;
    // cout<<"Age: "<<arr[1].Age<<endl;
    // cout<<"Gender: "<<arr[1].Gender<<endl;
    // cout<<endl;
    //  cout<<"Name: "<<arr[2].Name<<endl;
    // cout<<"Age: "<<arr[2].Age<<endl;
    // cout<<"Gender: "<<arr[2].Gender<<endl;

    // for(int i = 0 ; i<3 ; i++)
    // {
    //     arr[i].printinfo();
    //     cout<<endl;
    // }

    // Student st3("Roy" , 22 , "Male" , 20115016);
    // // st3.SetRoll(20115016);
    // // st3.GetRoll();
    // st3.printinfo();

    // Student st4;
    // // BOTH THE FOLLOWING SYNTAX CAN BE USED FOR MAKINF COPY CONSTRUCTORS.
    // Student st5(st3);
    // // Student st5 = st3;
    // st5.printinfo();



    return 0;
    
}