#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

void calculateDistance(int source, vector<vector<int>>& graph);

int main ()
{
    int test = 0;

    cin >> test;
    while (test--)
    {
        int n = 0, edges = 0, source = 0;
        cin >> n >> edges;
        vector<vector<int>> graph (n, vector<int>(n, 0));

        while (edges--)
        {
            int from = 0, to = 0;
            cin >> from >> to;

            graph[--from][--to] = 1;
            graph[to][from] = 1;
        }
        cin >> source;
        --source;

        calculateDistance(source, graph);
    }
    return 0;
}

//BFS
void calculateDistance(int source, vector<vector<int>>& graph)
{

    vector<int> distances(graph.size(), -1);
    vector<bool> visited(graph.size(), false);

    list<int> queue;
    visited[source] = true;
    queue.push_back(source);
    distances[source] = 0;
    int node;

    while (!queue.empty())
    {
        node = queue.front();
        queue.pop_front();

        for(int n = 0; n < graph[node].size(); n++)
        {
            if (graph[node][n] == 1 && !visited[n])
            {
                visited[n] = true;
                distances[n] = distances[node] + 6;
                queue.push_back(n);
            }

        }

    }

    for (int d = 0; d < distances.size(); d++)
    {
        if (distances[d] != 0)
            cout << distances[d] << " ";
    }
    cout << endl;

}
