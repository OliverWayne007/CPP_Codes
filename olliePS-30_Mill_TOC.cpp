#include <bits/stdc++.h>
using namespace std;


struct unit {
    char ini;
    char dir; 
    vector <char> next;

};

unit make_unit (char i, char d , char _0 ,char _1, char __  ){
    unit u;
    u.ini=i;
    u.dir=d;
    u.next={_0,_1,__};
    return u ;
}


int main (){

    
    //declaration of tape .its size can be altered
    int L ;
    cout << "Enter the string length :";

    cin>>L;
    vector <char> tape (L,'_'); 
    
    cout << "\nEnter the string :";
    //s is our input string 
    string s ;
    cin>>s ;
    
    //placing elements in the tape
    for (int i =0;i<s.size () ;i++){
        tape[i+1]=s[i];
    }
   
    map <char,unit> data ;
    /*
        this data variable is a map which stores the information
        about each state in a structure called unit .
        here states are a, b, c , rejected(R) and accepted(A)

        unit contains information in the following manner 
        
        1> ini -> tells the name of state which we are currently in 
        2> dir -> has two possible values 'L' ans 'R' which guides 
                  the position of ind variable
        3> next -> a vector which contains the output (next state)
                   against inputs '0' ,  '1' ans '_' in order 
                   
                   for eg data['c'].next in input to '_' gives the
                   output as A (accepted)!        
        the data table -=>>

            state      0   1   2
            a     ->   b   R   R
            b     ->   c   b   R
            c     ->   R   R   A
  (rejected)R     ->   R   R   R
  (accepted)A     ->   R   R   A

    */
   
    data['a']=make_unit('a','R','b','R','R');
    data['b']=make_unit('b','R','c','b','R');
    data['c']=make_unit('c','R','R','R','A');
    data['R']=make_unit('R','R','R','R','R');
    data['A']=make_unit('A','R','A','A','A');

    int ind = 1;// current position of tape head
    char state = 'a';//current state of the tape head
   
   vector <char> path ;
   path.push_back(state);
    while (state=='a'||state=='b'||state=='c'){
    // dbg (state);

        char val = tape[ind];

        // getting the output index according to input 
        int opNum=0;
        if (val=='1')
        {opNum=1;}
        else if (val=='0')
        {opNum=0;}
        else opNum=2;


        // upcoming state is updated as nextState
        char nextState = data[state].next[opNum];
        
        //updating the tape
        if (val=='0')tape[ind]='x';
        else if (val=='1')tape[ind]='y';

        // updating the tape head
        if (data[state].dir=='L')
        ind--;
        else ind ++;

        //updating current state with new state 
        state = nextState;
        path.push_back(state);
    }

    cout << "\nThe tape is --\n";
    for (auto it : tape )
    cout << it ;
    cout << "\n";
    cout <<"\nState transitions made:->\n";
    for (auto it : path )
    if ((it !='A')&&(it !='R'))
    cout << it << " -> ";
    else cout << it ;
    cout <<"\n";

    if (state =='R')
    cout << "REJECTED";
    else cout << "ACCEPTED";
}
