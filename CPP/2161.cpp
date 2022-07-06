#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    queue<int> q;
    vector<int> v;
    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }
    while (q.size() > 1)
    {
        v.push_back(q.front());
        q.pop();
        q.push(q.front());
        q.pop();
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << q.front();
}