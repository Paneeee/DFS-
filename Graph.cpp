#include "Graph.h"

using namespace std;

void generateRandAdjMatAndList(){
    srand(clock());
    for (int i=0;i<n;i++){                  //Create random Adjacency Matrix
        for (int j=0;j<n;j++){
            adj[i].push_back(rand()%2);
        }
    }

    for (int i=0;i<n;i++){                  //Conduct equivalent adjacency list from matrix above
        for (int j=0;j<n;j++){
            if (adj[i][j])
                AdjList[i].push_back(j);
        }
    }
    order="";                               //Reinitialize traversal order and visited for every loop
    order1="";
    for (int i=0;i<n;i++){
        visited[i]=0;
        visited1[i]=0;
    }
    /*
    for (auto n:a){
        for (auto m:n){
            cout<<m<<" ";
        }
        cout<<endl;
    }
    */
}
void dfsMat(int start){
    order+=to_string(start)+"/";                //Add start vertex to traversal order and visited = true
    visited[start]=1;                       
    for (int i=0;i<n;i++){                      //find unvisited and adjacent vertex, then call recursion
        if (adj[start][i]&& !visited[i]){
                dfsMat(i);
        }
    }
}
void dfsList(int start){
    order1+=to_string(start)+"/";                       //Same as above
    visited1[start]=1;
    for (size_t i=0;i<AdjList[start].size();i++){
        if (!visited1[AdjList[start][i]])
            dfsList(AdjList[start][i]);
    }
}