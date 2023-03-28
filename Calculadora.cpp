// Biblioteca usada
#include <iostream>
// Para facilitar os codigos
using namespace std;
//Programa Principal
int main() {
    // Variavel para o tipo de operação
    char op;
    // Variavel para os valores que vamos usar
    float num1, num2;
    //Imprime para o usuario qual operador ele quer usar
    cout << "Entre com o operador: +, -, *, /: ";
    //Leitura do operador que vai ser usado
    cin >> op;
    //Imprime para o usuario quais valores ele quer usar
    cout << "Entre com os dois valores: ";
    //Leitura dos valores que ele vai usar
    cin >> num1 >> num2;
    //Condicional das operações
    switch (op) {
        case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
        case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
        case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
        case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
        default:
        cout << "Operador errado, Insira novamente o operador certo";
        break;
    }
    
    
    return 0;
}
