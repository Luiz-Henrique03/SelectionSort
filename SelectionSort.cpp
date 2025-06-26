#include <iostream>

using namespace std;

int main()
{
    int valores[] = { 5,3,1,10,2,3,4,7,5, 13,14};

    for (int i = 0; i <= size(valores) -1; i++) {
        for (int j = i + 1; j <= size(valores) - 1; j++) {
            int aux = 0;
            if (valores[i] > valores[j]) {
                aux = valores[j];
                valores[j] = valores[i];
                valores[i] = aux;
            }
      }
    }

    for (int i = 0; i < size(valores); i++) {
        cout << valores[i] << endl;
   }

}

