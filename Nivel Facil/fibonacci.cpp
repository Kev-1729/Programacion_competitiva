#include<iostream>

using namespace std;

int main(){
	
	int n;
	int j = 0;
	int k = 1;
	int temp;
	
	cout<<"Numero: ";
	cin>>n;
	// j k t
	//   j k t
	//0  1 1 2 3 5 8 13 21 ...
	
	for(int i=1;i<=n;i++){
		cout<<j<<" ";
		temp = k + j;
		j = k;
		k = temp;	
	}
	
	return 0;
}
