#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	
	int n, i, aux, qtd;
	cin >> n;
	vector<int> v;
	for(i=0;i<n;i++){
		cin >> aux;
		v.push_back(aux);
	}
	sort(v.begin(), v.end());
	aux = v[0];
	qtd = 0;
	for(i=0;i<n;i++){
		if(v[i] == aux){
			qtd++;
		} else{
			cout << aux << " aparece " << qtd << " vez(es)" << endl;
			aux = v[i];
			qtd = 1;
		}
	}
	cout << aux << " aparece " << qtd << " vez(es)" << endl;
}
