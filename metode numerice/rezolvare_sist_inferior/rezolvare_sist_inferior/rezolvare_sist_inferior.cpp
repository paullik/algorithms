#include<iostream>
using namespace std;

int main(){
	int n,i,j;
	float a[100][100], b[100], x[100], S;
	
	cout<<"n="; cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=i;j++){
			cout<<"a["<<i<<"]["<<j<<"]="; cin >>a[i][j];
		}
	for(i=1;i<=n;i++){
		cout<<"b["<<i<<"]="; cin>>b[i];
	}
	for(i=1;i<=n;i++){
		S=0;
		for(j=1;j<=i-1;j++)
			S=S+a[i][j]*x[j];
	x[i]=(b[i]-S)/a[i][i];
	}
	for(i=1;i<=n;i++)
		cout<<"x["<<i<<"]=" << x[i] << " ";
}