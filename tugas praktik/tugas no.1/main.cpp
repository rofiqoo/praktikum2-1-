#include <iostream>
using namespace std;

int main(){
	int bilangan;
	cout<<"masukan angka : ";
	cin>>bilangan;
	cout<<endl;

	if (bilangan%4==0){
		cout<<"bilangan genap"<<endl;
	}else {
		cout<<" bilangan ganjil"<<endl;	
	}
}