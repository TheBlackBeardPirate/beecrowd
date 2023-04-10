#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int n, i, tam;
	string num, result;
	cin >> n >> num;
	while(n != 0 && num != "0"){
		result = "0";
		tam = num.length();
		for(i=0;i<tam;i++){
			if((int(num[i]) - 48) != n){
				if(((int(num[i]) - 48) != 0) && ((int(result[0]) - 48) == 0)){
					result = num[i];
				} else if(((int(num[i]) - 48) == 0) && ((int(result[0]) - 48) != 0)){
					result = result + num[i];
				} else if(((int(num[i]) - 48) != 0) && ((int(result[0]) - 48) != 0)){
					result = result + num[i];
				}
			}
		}
		cout << result << endl;
		cin >> n >> num;
	}
	
}
