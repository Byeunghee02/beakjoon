#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <array>
using namespace std;

vector<vector<int>> v;
array<int, 101> bfs_chk;
queue<int> q;

int bfs(int x)
{
    int ans = 1;
    q.push(x);
    bfs_chk[x] = 1;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (int i = 0; i < v[node].size(); i++)
        {
            int thisnode = v[node][i];
            if (bfs_chk[thisnode] != 1)
            {
                q.push(thisnode);
                bfs_chk[thisnode] = 1;
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    int N;
    cin >> N;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    cout << bfs(1);
}