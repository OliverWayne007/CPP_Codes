#include <bits/stdc++.h>
#include <string>
#include <stack>
using namespace std;

class PDA
{

private:
struct State1
{
    string present_state;
    char stack_top;
    char input_symbol;
    string output = "";
};
struct State2
{
    string next_state;
};
vector<pair<State1 , State2>>Transition;

public:
    string input;
    void print_transition()
    {
        for(auto it: Transition)
        {
        cout<<"( "<<(it.first).present_state<<", "<<(it.first).input_symbol<<", "<<(it.first).stack_top<<"/"<<(it.first).output<<" )"
        <<" -> "<<"( "<<(it.second).next_state<<" )"<<endl;
        }
    }
    bool push_down_automata()
    {
        int n = input.size();
        if (input.empty() == true)
        {
            return false;
        }
        stack<char> s;
        s.push('Z'); // Here Z is representing the stack start symbol.
        int last_a_idx = 0;
        for (int i = 0; i < n; i++)
        {
            State1 state1;
            State2 state2;
            pair<State1 , State2>p;
            if(input[i] != 'a' && input[i] != 'b')
            {
                return false;
            }

            else if (input[i] == 'a')
            {
                state1.input_symbol = input[i];
                if(s.top()=='Z')
                {
                    state1.present_state = "q0";
                    state1.stack_top = s.top();
                    state1.output = state1.output + input[i] + input[i] + s.top();
                    state2.next_state = "q0";
                    p = {state1 , state2};
                    Transition.push_back(p);
                }
                else if(s.top()=='a')
                {
                    state1.present_state = "q0";
                    state1.stack_top = s.top();
                    state1.output = state1.output + input[i] + input[i] + s.top();
                    state2.next_state = "q0"; 
                    p = {state1 , state2};
                    Transition.push_back(p);
                }
                s.push('a');
                s.push('a');
                last_a_idx = i;
            }
            else if(input[i] == 'b')
            {
                break;
            }
        }

        for (int i = last_a_idx+1; i<n; i++)
        {
            State1 state1;
            State2 state2;
            pair<State1 , State2>p;
            if (input[i] == 'b' && s.top() != 'Z')
            {
                state1.input_symbol = input[i];
                if(s.top()=='a' && i == last_a_idx)
                {
                    state1.present_state = "q0";
                    state1.stack_top = s.top();
                    state1.output = 'E';   // Here E stands for epsilon.
                    state2.next_state = "q1";
                    p = {state1 , state2};
                    Transition.push_back(p);
                }
                else if(s.top()=='a' && i != last_a_idx)
                {
                    state1.present_state = "q1";
                    state1.stack_top = s.top();
                    state1.output = 'E';   // Here E stands for epsilon.
                    state2.next_state = "q1";
                    p = {state1 , state2};
                    Transition.push_back(p);
                }
                s.pop();
            }
            else
            {
                return false;
            }
        }

        if (s.top() == 'Z')
        {
            State1 state1;
            State2 state2;
            pair<State1 , State2>p;
            state1.input_symbol = 'E';     // Here E stands for epsilon.
            state1.present_state = "q1";
            state1.stack_top = s.top();
            state1.output = 'Z';   // Here E stands for epsilon.
            state2.next_state = "qf";
            p = {state1 , state2};
            Transition.push_back(p);
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int t;
    cout << "Enter number of strings to be tested:"<<endl;
    cin >> t;
    for (int i=1; i<=t; i++)
    {
        PDA obj;
        string inputstr;
        int n;
        cout << "Enter the length of string-" << i <<": "<<endl;
        cin >> n;
        cout << "Enter the string-" << i <<": "<<endl;
        cin >> inputstr;
        if (n != inputstr.size())
        {
            cout << "Length of the string is different from the length specified !!!" <<endl;
            continue;
        }
        obj.input = inputstr;
        bool isAccepted = obj.push_down_automata();
        if (isAccepted == true)
        {
            cout<<"Transition states: "<<endl;
            obj.print_transition();
            cout << obj.input<<" is ACCEPTED"<<endl;
        }
        else
        {
            cout << obj.input<<" is NOT ACCEPTED"<<endl;
        }
    }
    return 0;
}