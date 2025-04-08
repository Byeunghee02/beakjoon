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

    vector<vector<int>> arr{{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}};
    for (int i = 0; i < 8; i++)
    {
        int t;
        cin >> t;
        arr[i][0] = -t;
        arr[i][1] = i + 1;
    }
    sort(arr.begin(), arr.end());
    int cnt = 0;
    int index[5];
    for (int j = 0; j < 5; j++)
    {
        cnt -= arr[j][0];
        index[j] = arr[j][1];
    }
    sort(index, index + 5);
    cout << cnt << "\n";
    for (int k = 0; k < 5; k++)
    {
        cout << index[k] << " ";
    }
}