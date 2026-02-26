#include <iostream>                                                                                                                                                                                                                                                 #include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define N 4   // Number of cities

int main() {

    int dist[N][N] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int city[N];
    for(int i = 0; i < N; i++)
        city[i] = i;

    int minCost = INT_MAX;

    // Generate all permutations of cities (except first fixed)
    do {
        int currentCost = 0;

        for(int i = 0; i < N-1; i++) {
            currentCost += dist[ city[i] ][ city[i+1] ];
        }

        // Add cost to return to starting city
        currentCost += dist[ city[N-1] ][ city[0] ];

        minCost = min(minCost, currentCost);

    } while(next_permutation(city+1, city+N));

    cout << "Minimum cost of TSP tour = " << minCost;

    return 0;
}
