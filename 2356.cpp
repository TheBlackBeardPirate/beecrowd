#include <iostream>
#include <string>

using namespace std;

int main(){

	string dna1, dna2;
	int found;
	cin.ignore();
	while(getline(cin, dna1)){
		getline(cin, dna2);
		found = dna1.find(dna2);
		if(found == -1){
			cout << "Nao resistente" << endl;
		} else{
			cout << "Resistente" << endl;
		}
	}
	
}
