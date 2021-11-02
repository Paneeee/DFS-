#include <iostream>
#include <string.h>
#include <vector>
#include <stack>
#include <ctime>
#include <random>
#pragma once

using namespace std;
int n=10000;                                        //Size
vector <vector<int>> AdjList(n);                    //Adjacency Matrix
vector <vector<bool>> adj(n);                       //Adjacency List
string order="",order1="";                          //Traversal Order
vector <bool> visited(n,0),visited1(n,0);           //Check if vertex visited
void generateRandAdjMatAndList();                   //Create random graph
void dfsMat(int start);                             //Ds using matrix
void dfsList(int start);                            //Dfs using list