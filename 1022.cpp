#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int x, num1, num2, den1, den2, result_num, result_den, raiz_num, raiz_den, aux, cont;
	char sinal1, sinal2, sinal3;
	cin >> x;
	while(x > 0){
		cin >> num1 >> sinal1 >> den1 >> sinal2 >> num2 >> sinal3 >> den2;
		if(sinal2 == '+'){
			result_num = (num1 * den2) + (num2 * den1);
			result_den = (den1 * den2);
		} else if(sinal2 == '-'){
			result_num = (num1 * den2) - (num2 * den1);
			result_den = (den1 * den2);
		} else if(sinal2 == '*'){
			result_num = num1 * num2;
			result_den = den1 * den2;
		} else if(sinal2 == '/'){
			result_num = num1 * den2;
			result_den = num2 * den1;
		}
		raiz_num = sqrt(result_num);
		raiz_den = sqrt(result_den);
		aux = 2;
		cont = 1;
		num1 = result_num;
		den1 = result_den;
		while(aux <= raiz_num || aux <= raiz_den){
			if(num1 % aux == 0 && den1 % aux == 0){
				cont = cont * aux;
				num1 = num1 / aux;
				den1 = den1 / aux;
			} else if(num1 % aux == 0 && den1 % aux != 0){
				num1 = num1 / aux;
			} else if(num1 % aux != 0 && den1 % aux == 0){
				den1 = den1 / aux;
			} else{
				aux++;
			}
		}
		num1 = result_num / cont;
		den1 = result_den / cont;
		cout << result_num << "/" << result_den << " = " << num1 << "/" << den1 << endl;
		x--;
	}
		
}
