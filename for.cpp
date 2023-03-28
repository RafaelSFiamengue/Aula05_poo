// Biblioteca usada
#include <iostream>
// Biblioteca que chamamos para usar
using namespace std;
// Programa Principal
int main() {
    // Variavel de um numero inteiro para num
    int num;
    // Imprime para o usuario qual numero ele quer
   cout << "Digite um numero natural: ";
   //
   cin >> num;
   
   cout << "Os primeiros " << num << " numeros pares são: ";
   
   for (int i = 2; i <= num * 2; i += 2) {
       cout << i << " ";
   }
   
   
    return 0;
}