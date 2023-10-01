#include <iostream>
#include <string>
#include <stack>
using namespace std;

class PDA
{
public:
    string input;
    bool push_down_automata()
    {
        int n = input.size();
        if (input.empty() == true)
        {
            return false;
        }
        stack<char> s;
        s.push('*'); // Here * is representing z0(z not) which is the stack start symbol.
        int last_a_idx = 0;
        for (int i = 0; i < n; i++)
        {
            if(input[i] != 'a' && input[i] != 'b')
            {
                return false;
            }

            else if (input[i] == 'a')
            {
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
            if (input[i] == 'b' && s.top() != '*')
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }

        if (s.top() == '*')
        {
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
        cout << obj.input << " is ";
        if (isAccepted == true)
        {
            cout << "ACCEPTED"<<endl;
        }
        else
        {
            cout << "NOT ACCEPTED"<<endl;
        }
    }
    return 0;
}