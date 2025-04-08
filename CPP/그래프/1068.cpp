#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <array>
using namespace std;

vector<vector<int>> v(100);

int cnt = 0;
int cut;

void leaf(int node)
{
    int chk = 0;
    for (int i = 0; i < v[node].size(); i++)
    {
        if (v[node][i] == cut)
            continue;
        leaf(v[node][i]);
        chk++;
    }
    if (chk == 0)
        cnt++;
}

int main()
{
    int N;
    cin >> N;
    int root;
    for (int i = 0; i < N; i++)
    {
        int k;
        cin >> k;
        if (k == -1)
            root = i;
        else
        {
            v[k].push_back(i);
        }
    }
    cin >> cut;
    if (cut == root)
        cout << 0;
    else
    {
        leaf(root);
        cout << cnt;
    }
}