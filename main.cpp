#include <cmath>
#include <iostream>
using namespace std;
int main(){

	int n;
	float a,b,c,d,x,x1,x2;
	cout<<"1. Funkcja kwadratowa"<<endl;
	cout<<"2. Funkcja liniowa"<<endl;
	cin>>n;
	if(n==1){
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
	if(d<0)cout<<"brak rozwi1zan";
	}
	else{
		cout<<"funkcja liniowa";
	}
	}
	else if(n==2){
		cout<<"Podaj a > ";
		cin>>a;
		cout<<"Podaj b > ";
		cin>>b;
		if(a!=0){
		cout<<"Miejsce zerowe "<<(-b/a);
	}
	else{
		if(b==0){
			cout<<"Funkcja ma nieskonczenie wiele miejsc zerowych";
		}
		else{
			cout<<"Funkcja nie ma miejsc zerowych";
		}
	}
	}
	else{
		cout<<"wybierz 1 lub 2";
	}
	return 0;
}
