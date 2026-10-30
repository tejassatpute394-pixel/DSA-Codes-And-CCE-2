#include <iostream>
using namespace std;


int G[20][20], visited[20], n;

void DFS(int i)
{
    int j;

    cout << i << " ";
    visited[i] = 1;

    for (j = 0; j < n; j++)
    {
        if (!visited[j] && G[i][j] == 1)
            DFS(j);
    }
}

int main()
{
    int i, j;

    cout << "\nEnter the number of vertices: ";
    cin >> n;

    cout << "\nEnter the adjacency matrix of the graph:\n";

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
           cin >> G[i][j];

    for (i = 0; i < n; i++)
        visited[i] = 0;
    cout<<"\nDFS traversal is \n";
    DFS(0);

    return 0;
}

/*PS C:\Users\HP\Desktop\Tejas 245> cd "c:\Users\HP\Desktop\Tejas 245\" ; if ($?) { g++ Graph_DFS.cpp -o Graph_DFS } ; if ($?) { .\Graph_DFS }


Enter the number of vertices: 5

Enter the adjacency matrix of the graph:
1 0 1 0 1
1 1 1 0 1
0 0 1 0 1
1 0 0 1 0
1 0 1 1 1

DFS traversal is 
0 2 4 3 
PS C:\Users\HP\Desktop\Tejas 245>