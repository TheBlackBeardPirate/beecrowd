#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int i, tam, aux;
	long long int n;
	string nome;
	while(getline(cin,nome)){
		tam = nome.length();
		n = 0;
		aux = 0;
		for(i=0;i<tam;i++){
			if(n > 2147483647 || n < 0){
				aux = 0;
				break;
			} else if(nome[i] == 'l'){
				n = (n * 10) + 1;
				aux = 1;
			} else if(nome[i] == 'o' || nome[i] == 'O'){
				n = n * 10;
				aux = 1;
			} else if(int(nome[i]) > 47 && int(nome[i]) < 58){
				n = (n * 10) + (int(nome[i]) - 48);
				aux = 1;
			} else if(nome[i] != ',' && nome[i] != ' '){
				aux = 0;
				break;
			}
		}
		if(n > 2147483647 || n < 0 || aux == 0){
			cout << "error" << endl;
		} else{
			cout << n << endl;
		}
	}
	
}
