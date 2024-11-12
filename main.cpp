#include <iostream>
#include <vector>

#include "LoadBalancer.h"
using namespace std;

int main() {
    int numServers;
    cout << "Numero de servidores disponibles: ";
    cin >> numServers;

    vector<vector<int>>matrix={
        {0, 10, 3, INF},
        {10, 0, 1, 2},
        {3, 1, 0, 8},
        {INF, 2, 8, 0}
    };
    
    LoadBalancer lb(numServers, matrix);

    int accServer;
    cout << "Inserte un request ";
    cin >> accServer;

    lb.distributeRequest(accServer);
    lb.completeRequest(accServer);

    lb.displayServerLoads();

    return 0;
}
/*HACER UN FOR LOOP PARA QUE INSERTEN EL PESO DE LA MATRIZ*/
