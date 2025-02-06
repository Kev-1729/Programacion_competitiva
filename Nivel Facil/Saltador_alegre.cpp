#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int v[n];
        for (int i=0; i<n;i++){
            cin>>v[i];
        }
        if (n==1) {
            cout<<"Alegre"<<endl;
            continue;
        }
        int temp=abs(v[0]-v[1]);
        bool esAlegre = true;
        for(int i=1;i<n-1;i++){
            int dif=abs(v[i]-v[i+1]);
            if (dif<1||dif>= n||dif==temp) {
                esAlegre=false;
                break;
            }
            temp=dif;
        }
	if(esAlegre)
            cout<<"Alegre"<<endl;
        else 
            cout<<"No alegre"<<endl;
    }
    return 0;
}
