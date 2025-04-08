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

    int n;
    cin >> n;
    string arr[20000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, [](const string &first, const string &second)
         {
        if(first.size()==second.size()){
            return first<second;
        }else return first.size() < second.size(); });
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
            cout << arr[i] << "\n";
    }
}