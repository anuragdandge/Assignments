#include <iostream>
using namespace std;
int a[20][20], visited[20], n;
void dfs(int v)
{
    int i;
    visited[v] = 1;
    for (i = 1; i <= n; i++)
    {
        if (a[v][i] && !visited[i])
        {
            cout << "\n"
                 << v << "->" << i;
            dfs(i);
        }
    }
}
int main()
{
    int i, j, count = 0;
    cout << " Enter Number of vertices ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        visited[i] = 0;
        for (j = 1; j <= n; j++)
        {
            a[i][j] = 0;
        }
    }
    cout << " Enter adjacency matrix ";
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            cin >> a[i][j];

    dfs(1);

    cout << "\n";
    for (i = 1; i <= n; i++)
    {
        if (visited[i])
        {
            count++;
        }
    }

    if (count == n)
    {
        cout << " Graph is Connected ";
    }
    else
    {
        cout << " Graph is Not  Connected ";
    }
}