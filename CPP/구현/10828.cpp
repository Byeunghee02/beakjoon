#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<int> s;
    int N;
    cin >> N;

    while (N--)
    {
        string st;
        cin >> st;
        if (st == "push")
        {
            int a;
            cin >> a;
            s.push(a);
        }
        else if (st == "pop")
        {
            if (s.empty())
            {
                cout << "-1"
                     << "\n";
            }
            else
            {
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if (st == "size")
        {
            cout << s.size() << "\n";
        }
        else if (st == "empty")
        {
            cout << s.empty() << "\n";
        }
        else
        {
            if (s.empty())
            {
                cout << "-1"
                     << "\n";
            }
            else
            {
                cout << s.top() << "\n";
            }
        }
    }
}