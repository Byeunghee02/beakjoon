#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        string s;
        cin >> s;
        stack<char> st, tmp;
        int arrow = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '<')
            {
                if (!st.empty())
                {
                    tmp.push(st.top());
                    st.pop();
                }
            }
            else if (s[i] == '>')
            {
                if (!tmp.empty())
                {
                    st.push(tmp.top());
                    tmp.pop();
                }
            }
            else if (s[i] == '-')
            {
                if (!st.empty())
                    st.pop();
            }
            else
                st.push(s[i]);
        }

        while (!st.empty())
        {
            tmp.push(st.top());
            st.pop();
        }

        while (!tmp.empty())
        {
            cout << tmp.top();
            tmp.pop();
        }
        cout << "\n";
    }
}