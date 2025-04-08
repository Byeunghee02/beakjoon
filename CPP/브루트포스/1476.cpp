#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <array>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int e, s, m;
    cin >> e >> s >> m;
    int cnt = 1;
    while (!(e == 1 && s == 1 && m == 1))
    {
        cnt++;
        e--;
        s--;
        m--;
        if (e == 0)
            e = 15;
        if (s == 0)
            s = 28;
        if (m == 0)
            m = 19;
    }
    cout << cnt;
}