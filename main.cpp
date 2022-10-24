#include <iostream>
using namespace std;
int main(){
	
	float a,b,c,d,x,x1,x2;
	cout<<"Podaj a > ";
	cin>>a;
	cout<<"Podaj b > ";
	cin>>b;
	cout<<"Podaj c > ";
	cin>>c;
	if(a!=0){
	d=(b*b)-4*a*c;
	if(d>0){
		cout<<"x2="<<-b-sqrt(d)/2*a;
		cout<<"x2="<<-b+sqrt(d)/2*a;
	}
	if(d==0){
		cout<<-b/2*a;
	}
	if(d<0)cout<<"brak rozwi¹zañ"
	}
	else{
		cout<<"funkcja liniowa"
	}
	return 0;
}
