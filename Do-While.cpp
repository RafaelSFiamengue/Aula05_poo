// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int num;
    
   do {
       cout << "Digite um numero entre 1 a 10: ";
       cin >> num;
   } while (num < 1 || num > 10);
   
   cout << "Voce digitou o numero " << num << ".";
   
    return 0;
}