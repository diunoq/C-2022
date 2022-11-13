#include <cmath>
#include <iostream>
using namespace std;
int main(){
	
	int n;
	float a,b,c,d,x,x1,x2;
	cout<<"1. Funkcja kwadratowa"<<endl;
	cout<<"2. Funkcja liniowa"<<endl;
	cout<<"3. Funckja kanoniczna"<<endl;
	cout<<"4. Przeliczanie między postaciami funkcji kwadratowej"<<endl;
	cin>>n;
	system( "cls" );
	//funkcja kwadratowa
	if(n==1){
	cout<<"1. Funkcja kwadratowa"<<endl;
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
		cout<<"2. Funkcja liniowa"<<endl;
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
		cout<<"3. Funckja kanoniczna"<<endl;
		int a,b,c,d;
		double p,q;
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
	//Przeliczanie miedzy postaciami funkcji kwadratowej
	else if(n==4){
		int x;
	cout<<"4. Przeliczanie miedzy postaciami funkcji kwadratowej"<<endl;
	cout<<"1. Ogolna ==> Kanoniczna"<<endl;
	cout<<"2. Ogolna ==> Iloczynowa"<<endl;
	cout<<"3. Kanoniczna ==> Ogolna"<<endl;
	cout<<"4. Kanoniczna ==> Iloczynowa"<<endl;
	cout<<"5. Iloczynowa ==> Ogolna"<<endl;
	cout<<"6. Iloczynowa ==> Kanoniczna"<<endl;
	cin>>x;
		system( "cls" );
		if(x==1){
		int a,b,c,d;
		double p,q;
		cout<<"4.1. Ogolna ==> Kanoniczna"<<endl;	
		cout<<"Podaj a > ";
		cin>>a;
		cout<<"Podaj b > ";
		cin>>b;
		cout<<"Podaj c > ";
		cin>>c;
		cout<<endl<<a<<"x^2"<<" + "<<b<<"x"<<" + "<<c<<endl;
		cout<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
		cout<<"c = "<<c<<endl;
		d=(b*b)-4*a*c;
		cout<<"delta = "<<d<<endl;
		p=-b/2*a;
		q=-d/4*a;
		cout<<"p = "<<p<<endl;
		cout<<"q = "<<q<<endl;
		cout<<"f(x) = "<<a<<" (x - "<<p<<" )^2 + "<<q;
		}
		
		if(x==2){
		cout<<"4.2. Ogolna ==> Iloczynowa"<<endl;
		int a,b,c,d;
		double x1,x2,x0;
		cout<<"Podaj a > ";
		cin>>a;
		cout<<"Podaj b > ";
		cin>>b;
		cout<<"Podaj c > ";
		cin>>c;
		cout<<endl<<a<<"x^2"<<" + "<<b<<"x"<<" + "<<c<<endl;
		if(a!=0){
		d=(b*b)-4*a*c;
		cout<<"delta = "<<d<<endl;
		if(d>0){
		x1=(-b-sqrt(d))/(2*a);
		x2=(-b+sqrt(d))/(2*a);
		cout<<"x1 = "<<x1<<endl;
		cout<<"x2 = "<<x2<<endl;
		cout<<"f(x) = "<<a<<" (x - "<<x1<<" )( x - "<<x2<<" )";
		}
		else if(d==0){
		x0=(-b/2*a);
		cout<<"x0 = "<<x0<<endl;
		cout<<"f(x) = "<<a<<" (x - "<<x0<<" )^2";
		}
		else if(d<0)cout<<"brak rozwi1zan";
		}
	}
		if(x==3){
		cout<<"4.3. Kanoniczna ==> Ogolna"<<endl;
		int a,b,c,d;
		double p,q;
		cout<<"y= a(x-p)2+q "<<endl;
		cout<<"Podaj a> ";
		cin>>a;
		cout<<"Podaj p> ";
		cin>>p;
		cout<<"Podaj q> ";
		cin>>q;
		b=-2*a*p;
		c=a*(p*p)+q;
		cout<<endl<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
		cout<<"c = "<<c<<endl;
		cout<<endl<<a<<"x^2"<<" + "<<b<<"x"<<" + "<<c<<endl;
		}
		
		if(x==4){
		cout<<"4.4. Kanoniczna ==> Iloczynowa"<<endl;
		int a;
		double p,q,x1,x2;
		cout<<"y= a(x-p)2+q "<<endl;
		cout<<"Podaj a> ";
		cin>>a;
		cout<<"Podaj p> ";
		cin>>p;
		cout<<"Podaj q> ";
		cin>>q;
		x1=p+(sqrt(-q/a));
		x2=p-(sqrt(-q/a));
		cout<<endl<<"x1 = "<<x1<<endl;
		cout<<"x2 = "<<x2<<endl;
		cout<<endl<<a<<" (x -  "<<x1<<" )(x - "<<x2<<" )";
		}
		
		if(x==5){
		int a,b,c;
		double x1,x2;
		cout<<"4.5. Iloczynowa ==> Ogolna"<<endl;
		cout<<"f(x) = a(x - x1)(x - x2)"<<endl;
		cout<<"Podaj a> ";
		cin>>a;
		cout<<"Podaj x1> ";
		cin>>x1;
		cout<<"Podaj x2> ";
		cin>>x2;
		b=(-a*(x1+x2));
		c=a*x1*x2;
		cout<<endl<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
		cout<<"c = "<<c<<endl;
		cout<<endl<<a<<"x^2"<<" + "<<b<<"x"<<" + "<<c<<endl;
		}
		
		if(x==6){
		int a,b,c,d;
		double x1,x2,p,q;
		cout<<"4.6. Iloczynowa ==> Kanoniczna"<<endl;
		cout<<"f(x) = a(x - x1)(x - x2)"<<endl;
		cout<<"Podaj a> ";
		cin>>a;
		cout<<"Podaj x1> ";
		cin>>x1;
		cout<<"Podaj x2> ";
		cin>>x2;
		b=(-a*(x1+x2));
		c=a*x1*x2;
		d=(b*b)-4*a*c;
		p=-b/2*a;
		q=-d/4*a;
		cout<<endl<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
		cout<<"c = "<<c<<endl;
		cout<<"delta = "<<d<<endl;
		cout<<"p = "<<p<<endl;
		cout<<"q = "<<q<<endl;
		cout<<"f(x) = "<<a<<" (x - "<<p<<" )^2 + "<<q;
		}
	
	}
	else{
		cout<<"wybierz 1, 2, 3 lub 4";
	}

	return 0;
}
