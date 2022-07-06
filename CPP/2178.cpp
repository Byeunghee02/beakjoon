#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

int N, M, arr[110][110], dst[110][110];
bool vist[110][110];
int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

int bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    dst[x][y] = 1;
    vist[x][y] = 1;
    while (!q.empty())
    {
        int a = q.front().first, b = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int aa = a + dir[i][0], bb = b + dir[i][1];
            if (aa < 0 || bb < 0 || aa >= N || bb >= M)
                continue;
            if (arr[aa][bb] == 1 && !vist[aa][bb])
            {
                if (dst[aa][bb] == 0)
                    dst[aa][bb] = dst[a][b] + 1;
                q.push({aa, bb});
                vist[aa][bb] = 1;
            }
        }
    }
    return dst[N - 1][M - 1];
}

int main()
{
    string s;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        for (int j = 0; j < M; j++)
        {
            arr[i][j] = s[j] - 48;
        }
    }

    cout << bfs(0, 0);
}