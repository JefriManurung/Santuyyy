#include<iostream>
using namespace std;

int main(){
	string input;
	int i=0;
	
	do{
		i++;
		cin>>input;
		if(input == "Hajj"){
			cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
		}else if(input == "Umrah"){
			cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
		}
	}while(input != "*");
	return 0;
}
