#include <iostream>
using namespace std;

bool EsAbundante(int num);

int main() {
    cout << "Los primeros 10000 números perfectos son: ";
    int contador = 0;
    int num = 2;
    while (contador < 10000) 
        {
        	if(EsAbundante(contador))
			{
			cout<<contador<<'/';
		 	}
		contador++;
	}
    return 0;
}
bool EsAbundante(int num) {
    bool flag=false;
	int sumaDivisores = 0;
    for (int i = 1; i <= num/2; i++) {
        if (num % i == 0) {
            sumaDivisores += i;
            
        }
    }
    if (num < sumaDivisores) {
                flag=true;
            }
    
    return flag ;
}
