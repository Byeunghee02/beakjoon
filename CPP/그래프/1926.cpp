#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, arr[501][501], chk[501][501];
vector<int> v;
int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

int dfs(int y, int x)
{
    int re = 1;
    chk[y][x] = 1;
    for (int i = 0; i < 4; i++)
    {
        int yy = y + dir[i][0], xx = x + dir[i][1];
        if (yy < 0 || xx < 0 || yy >= N || xx >= M) continue;
        if (arr[yy][xx] == 1 && chk[yy][xx] == 0)
        {
            re += dfs(yy, xx);
        }
    }
    return re;
}

int main()
{
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] == 1 && chk[i][j] == 0)
            {
                v.push_back(dfs(i, j));
            }
        }
    }
    cout << v.size()<<"\n";
    if(v.size()==0) v.push_back(0);
    sort(v.begin(),v.end());
    cout<<v[v.size()-1];
}