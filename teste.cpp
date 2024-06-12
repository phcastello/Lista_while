#include<iostream>
#include<chrono>
using namespace std;

int main(){
    int n=0;
    auto start = chrono::high_resolution_clock::now();


    while (n<=100000){
       cout << n <<endl;
       n++;
    }
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;

    cout << "Tempo: " << duration.count() << "segundos" <<endl;

    return 0;
}