#include<iostream>
using namespace std;

int main(){
    
    int N;
    int i=0,E=0,O=0;
    
    while (i == 0){
        cout << "Enter an integer: ";
        cin >> N;
        if (N!=0){
            if (N%2==0){
                E++;
            }else{
                O++;
            }
        }
        if (N == 0){
            i++;
        }
    }
            
    
    cout << "#Even numbers = ";
    cout << E;
    cout << "\n";
    cout << "#Odd numbers = ";
    cout << O;
    return 0;
}