#include <iostream>
using namespace std;
int main(){
	
	float a,b;
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
	
	return 0;
}
