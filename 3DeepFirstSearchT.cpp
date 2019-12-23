#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_N = 200; // maksymalna ilość wierzchołków w grafie
const int MAX_T = 100; // max number of testcases

void dfs();

int main()
{
    //for Given Input
    int N; // - number of Nodes
    int E; // - number of Edges
    int input_list[MAX_N] = {0, 1, 0, 2, 0, 3, 2, 4};
    // int input [E][2]; // - given Adjacency list
    //Let concretize Input
    N = 5;
    E = 4;

    int input_A_list[E][2]; // - given Adjacency list

    for (int i = 0; i < E; i++)
    {
        input_A_list[i][0] = input_list[i * 2];
        input_A_list[i][1] = input_list[(i * 2) + 1];
    }

    // input_A_list

    //let make Adjacency matrix
    char A_matrix[N][N];
    //fill Adjacency matrix with zeroes
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            A_matrix[i][j] = 0;
        }

    //transform Adjacency list to Adjacency matrix
    for (int i = 0; i < E; i++)
    {
        A_matrix[input_A_list[i][0]][input_A_list[i][1]] = 1;
        A_matrix[input_A_list[i][1]][input_A_list[i][0]] = 1;
    }

    cout << "It works! Let handle for given Input:\n";
    cout << N << ": number of Nodes,\n";
    cout << E << ": number of Edges,\n";
    cout << "0 1 0 2 0 3 2 4"
         << ": given Adjacency list.\n" << "and as result (symetric) Adjacency Matrix below:";

    //Let print Adjacency Matrix
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << (int)A_matrix[i][j] << " ";
        cout << endl;
    }
}