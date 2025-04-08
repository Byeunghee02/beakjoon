#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int N, M, arr[110][110];
bool vst[110][110];
int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

int bfs(int x, int y)
{
    int re = 1;
    queue<pair<int, int>> q;
    q.push({x, y});
    vst[x][y] = 1;
    while (!q.empty())
    {
        int a = q.front().first, b = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int aa = a + dir[i][0], bb = b + dir[i][1];
            if (aa < 0 || bb < 0 || aa >= N || bb >= N)
                continue;
            if (arr[aa][bb] == 1 && !vst[aa][bb])
            {
                q.push({aa, bb});
                vst[aa][bb] = 1;
                re++;
            }
        }
    }
    return re;
}

int main()
{
    vector<int> v;
    string s;
    int cnt = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = s[j] - 48;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] == 1)
            {
                if (!vst[i][j])
                {
                    v.push_back(bfs(i, j));
                    cnt++;
                }
            }
        }
    }

    sort(v.begin(), v.end());
    cout << cnt << "\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }
}