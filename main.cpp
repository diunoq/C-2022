#include <iostream>
using namespace std;
int main(){
	
	float a,b,c;
	cout<<"Podaj a > ";
	cin>>a;
	cout<<"Podaj b > ";
	cin>>b;
	cout<<"Podaj c > ";
	cin>>c;
	if(a==0 && b==0)cout<<"0=";
	if(a==1)cout<<"x";
	else if(a==1)cout<<"-X";
	else if(a!=0)cout<<a<<"x";
	
	if(b==1)cout<<"y=";
	else if(b==-1)cout<<"-y=";
	else if(b>0 && a!=0)cout<<"+"<<b<<"y=";
	else if(b>0 && a==0)cout<<b<<"y=";
	else ig(b<0)cout<<b<<"y=";
	cout<<c<<endl;
	
	return 0;
}
