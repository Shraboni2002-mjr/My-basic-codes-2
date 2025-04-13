#include <iostream>
using namespace std;

int main()
{
    int nodes, paths;
    cin >> nodes >> paths;

    int from[paths], to[paths], cost[paths];
    for (int i = 0; i < paths; i++)
        cin >> from[i] >> to[i] >> cost[i];

    int start;
    cin >> start;

    int shortest[nodes];
    for (int i = 0; i < nodes; i++)
        shortest[i] = 99999999;
    shortest[start] = 0;

    for (int t = 1; t < nodes; t++)
    {
        for (int i = 0; i < paths; i++)
        {
            int u = from[i];
            int v = to[i];
            int w = cost[i];
            if (shortest[u] != 99999999 && shortest[u] + w < shortest[v])
                shortest[v] = shortest[u] + w;
        }
    }

    for (int i = 0; i < paths; i++)
    {
        int u = from[i];
        int v = to[i];
        int w = cost[i];
        if (shortest[u] != 99999999 && shortest[u] + w < shortest[v])
        {
            cout << "Cycle with negative weight found:\n";
            return 0;
        }
    }

    for (int i = 0; i < nodes; i++)
        cout << "Node " << i << " : " << shortest[i] << "\n";

    return 0;
}
