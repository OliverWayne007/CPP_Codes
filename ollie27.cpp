#include<iostream>
using namespace std;
// POINTERS AND ARRAYS.
int main()
{
    // int a = 10;
    // int *p;
    // p = &a;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<(p+1)<<endl;
    // cout<<*(p+1)<<endl;
    // cout<<*p+1<<endl;
    // //p++;
    // cout<<++(*p)<<endl;
    // cout<<++p<<endl;
    // cout<<*++p<<endl;
    //cout<<*(++p)<<endl;


  /* NOTE: ARRAYS ARE ALSO SELF-POINTERS AND THEY ALWAYS POINT TO THE FIRST ELEMENT OF THE ARRAY. IN OTHER WORDS IT STORES THE ADDRESS 
      OF THE ZEROTH INDEX i.e THE ADDRESS OF THE VERY FIRST ELEMENT OF THE ARRAY. ALSO THE ARRAYS ARE CONSTANT POINTERS.
      ARRAYS ALWAYS POINT TOWARDS THE FIRST ELEMENT i.e THEY ALWAYS STORE THE ADDRESS OF THE ZEROTH INDEX OR THE FIRST ELEMENT OF
      THE ARRAY. THEY CANNOT BE MANIPULATED TO POINT TO ANY OTHER ELEMENT OF THE ARRAY OR STORE THE ADDRESS OF ANY OTHER INDEX 
      OF THE ARRAY BY USING UNARY OPERATORS. TO BE MORE CLEAR , THE OPERATION arr++ IS ILLEGAL AND HAS NO MEANING. SIMILARLY , 
      THE ARRAY POINTERS CANNOT BE OPERATED UPON BY USING ANY OTHER UNARY OPERATOR. ON THE OTHER HAND , WE CAN OBTAIN THE 
      ADDRESS OF OTHER INDICES OF THE ARRAY USING THE ARRAY POINTER , BY ADDING INTEGERS TO IT AS SHOWN BELOW.
      SO , WE SEE THAT BINARY OPERATIONS ARE LEGAL ON ARRAY POINTERS BUT UNARY OPERATIONS ARE ILLEGAL ON ARRAY POINTERS.
      THIS IS BECAUSE THE UNARY OPERATIONS TEND TO MODIFY THE ADDRESS STORED IN THE ARRAY POINTER WHEREAS THE BINARY OPERATIONS 
      DO NOT MODIFY THE ADDRESS STORED IN THE ARRAY POINTERS WHICH IS LEGAL BECAUSE ARRAYS ARE CONSTANT POINTERS AS STATED ABOVE. */


    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0 ; i<n ; ++i)
    {
        cin>>arr[i];
    }

    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<"The address , value and index of the respective array elements are: "<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr+i<<" "<<*(arr+i)<<" "<<i<<endl;
    }
    return 0;
}