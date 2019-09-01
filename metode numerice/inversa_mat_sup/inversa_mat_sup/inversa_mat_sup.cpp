#include<iostream>
using namespace std;

int main(){
	int n,i,j,k;
	float a[100][100], b[100][100], x[100][100], S;
	
	cout<<"n="; cin>>n;
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			cout<<"a["<<i<<"]["<<j<<"]="; cin >>a[i][j];
		}
	}
	
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(i==j){
				b[i][j]=1;
			}
			else{
				b[i][j]=0;
			}
		}
	}
	
	for(k=1;k<=n;k++){
		for(i=n;i>=1;i--){
			S=0;
			for(j=i+1;j<=n;j++){
				S=S+a[i][j]*x[j][k];
			}
			x[i][k]=(b[i][k]-S)/a[i][i];
		}
	}
	
	for(i=1;i<=n;i++){
		for(k=1;k<=n;k++){
			cout.width(4);
			cout<<x[i][k]<<" ";
		}
		cout<<endl;
	}
}