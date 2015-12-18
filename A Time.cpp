#include <iostream>
#include <cstdio>
#include <ctime>

using namespace std;

int main() {
    clock_t start;
    double duration;

    start = clock();

    /* Your algorithm here */

    duration = ( clock() - start ) / (double) CLOCKS_PER_SEC;

    cout<<"Time: "<< duration <<'\n';
}
