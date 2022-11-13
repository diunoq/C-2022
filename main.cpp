#include <cmath>

#include <iostream>
using namespace std;
int main(){
	
	int n;
	float a,b,c,d,x,x1,x2;
	cout<<"1. Funkcja kwadratowa"<<endl;
	cout<<"2. Funkcja liniowa"<<endl;
	cout<<"3. Funckja kanoniczna"<<endl;
	cin>>n;
	//funkcja kwadratowa
	if(n==1){
	cout<<"Podaj a > ";
	cin>>a;
	cout<<"Podaj b > ";
	cin>>b;
	cout<<"Podaj c > ";
	cin>>c;
	cout<<endl<<a<<"x^2"<<" + "<<b<<"x"<<" + "<<c<<endl;
	if(a!=0){
	d=(b*b)-4*a*c;
	cout<<endl<<"Delta = "<<d<<endl;
	if(d>0){
		cout<<"x1="<<(-b-sqrt(d))/(2*a)<<endl;
		cout<<"x2="<<(-b+sqrt(d))/(2*a)<<endl;
	}
	else if(d==0){
		cout<<-b/2*a;
	}
	else if(d<0)cout<<"brak rozwi1zan";
	}
	else{
		cout<<"funkcja liniowa";
	}
	}
	//funkcja liniowa
	else if(n==2){
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
	//postać kanoniczna
	else if(n==3){
		int a,b,c,p,q,d;
		cout<<"y= a(x-p)2+q "<<endl;
		cout<<"Podaj a> ";
		cin>>a;
		cout<<"Podaj p> ";
		cin>>p;
		cout<<"Podaj q> ";
		cin>>q;
		b=-2*a*p;
		c=a*(p*p)+q;
		cout<<endl<<a<<"x^2"<<" + "<<b<<"x"<<" + "<<c<<endl;
		
		d=(b*b)-4*a*c;
		cout<<endl<<"Delta = "<<d<<endl;
		if(d>0){
		cout<<"x1="<<(-b-sqrt(d))/(2*a)<<endl;
		cout<<"x2="<<(-b+sqrt(d))/(2*a)<<endl;
		}
		else if(d==0){
		cout<<-b/2*a;
		}
		else if(d<0)cout<<"brak rozwi1zan";
		
	}
	else{
		cout<<"wybierz 1, 2 lub 3";
	}
	return 0;
}
