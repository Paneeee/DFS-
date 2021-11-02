#include <iostream>
#include "Graph.cpp"
#include "Graph.h"
using namespace std;

int main(){
    n=2;
    for(int i=0;i<5;i++){
        cout<<"Size test: "<<n<<endl;

        generateRandAdjMatAndList();

        time_t start=clock(),end1;
        dfsMat(0);
        cout<<"Mat: "<<(double)(clock()-start)/CLOCKS_PER_SEC<<" "<<endl;

        end1=clock();
        dfsList(0);
        cout<<"List: "<<(double)(clock()-end1)/CLOCKS_PER_SEC<<endl;
        
        n*=10;
        cout<<endl;
        }
    return 0;
}