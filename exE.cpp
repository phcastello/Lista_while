#include<iostream>
using namespace std;
 
int main(){
    int n=0, total_P=0, quant=0;


    while(n <= 15){
        if (n % 2 == 0){
            total_P += n;
            cout << n <<endl;
            
            quant++;
            
        }
        n++;
    }
    cout <<endl << quant <<endl;
    cout <<endl << total_P <<endl;


    return 0;
}