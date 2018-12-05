#include<iostream>
using namespace std;

int main(){
	string input;
	int i=0;
	
	do{
		i++;
		cin>>input;
		if(input == "HELLO"){
			cout<<"Case "<<i<<": ENGLISH"<<endl;
		}else if(input == "HOLA"){
			cout<<"Case "<<i<<": SPANISH"<<endl;
		}else if(input == "HALLO"){
			cout<<"Case "<<i<<": GERMAN"<<endl;
		}else if(input == "BONJOUR"){
			cout<<"Case "<<i<<": FRENCH"<<endl;
		}else if(input == "CIAO"){
			cout<<"Case "<<i<<": ITALIAN"<<endl;
		}else if(input == "ZDRAVSTVUJTE"){
			cout<<"Case "<<i<<": RUSSIAN"<<endl;
		}else if(input != "#"){
			cout<<"Case "<<i<<": UNKNOWN"<<endl;
		}
	}while(input != "#");
	return 0;
}
