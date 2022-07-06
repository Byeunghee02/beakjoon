#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        stack<char> s;
        string st;
        cin >> st;
        int chk = 0;
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] == '(')
            {
                s.push('(');
            }
            else
            {
                if (s.empty())
                {
                    chk = 1;
                    break;
                }
                else
                {
                    s.pop();
                }
            }
        }
        if (chk == 1 || !s.empty())
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}