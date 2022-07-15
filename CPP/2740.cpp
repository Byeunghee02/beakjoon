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

    int n, m;
    cin >> n >> m;
    int mat1[105][105] = {
        0,
    };
    int mat2[105][105] = {
        0,
    };
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat1[i][j];
    int k;
    cin >> m >> k;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < k; j++)
            cin >> mat2[i][j];
    int result[105][105];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            int sum = 0;
            for (int t = 0; t < m; t++)
            {
                sum += mat1[i][t] * mat2[t][j];
            }
            cout << sum << " ";
        }
        cout << "\n";
    }
}