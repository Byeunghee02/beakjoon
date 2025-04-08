#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int arr[28] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        int trs = s[i];
        arr[trs - 65]++;
    }
    int count = 0;
    s = {};
    int idx;
    for (int i = 0; i < 28; i++)
    {
        char tr = i + 65;
        if (arr[i] > 0)
        {
            if (arr[i] % 2 == 0)
            {
                for (int j = 0; j < arr[i] / 2; j++)
                {
                    s = s + tr;
                }
            }
            else
            {
                for (int k = 0; k < (arr[i] - 1) / 2; k++)
                {
                    s = s + tr;
                }
                idx = i;
                count++;
            }
        }
    }
    string temp;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        temp = temp + s[i];
    }
    char tmp = idx + 65;
    if (count == 1)
    {
        s = s + tmp + temp;
        cout << s;
    }
    else if (count > 1)
    {
        cout << "I\'m Sorry Hansoo";
    }
    else
    {
        s = s + temp;
        cout << s;
    }
}