#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome, sexo;
    int idade;

    cout << "Digite o nome: ";
    getline(cin, nome);

    cout << "Digite o sexo (M/F): ";
    getline(cin, sexo);

    cout << "Digite a idade: ";
    cin >> idade;

    if (sexo == "F" && idade < 25) {
        cout << nome << " aceita" << endl;
    } else {
        cout << "nao aceita" << endl;
        
    }

    return 0;
}