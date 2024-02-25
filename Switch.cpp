#include <iostream>
using namespace std;
main(){
	int codigo=0;
	cout<<"ingrese codigo de area: ";
	cin>>codigo;
	switch(codigo){
		case 501: cout<<"Belice"<<endl;
			break;
		case 502: cout<<"Guatemala"<<endl;
			break;
		case 503: cout<<"El Salvador"<<endl;
		break;
	default : cout<<"este codigo no es de centroamerica "<<endl;
	}

 	
system("pause");	
}
