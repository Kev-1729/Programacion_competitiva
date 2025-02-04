#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n, c;
	
	cout<<"Ingrese numero: ";
	cin>>n;
  
	for(int i = 1;i<=n;i++){
		
		if (n%i==0){
			c++;
		}
	}
	if(c==2){
		cout<<"EL numero es primo.";
	}
	else{
		cout<<"El numero no es primo.";
	}
	
	return 0;
}
