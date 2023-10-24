#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[100], str2[100];

    cout << "Digite a primeira string: ";
    cin.getline(str1, 100);

    cout << "Digite a segunda string: ";
    cin.getline(str2, 100);

    if (strcmp(str1, str2) == 0) {
        cout << "As strings sao iguais." << endl;
    } else {
        cout << "As strings sao diferentes." << endl;
    }

    return 0;
}