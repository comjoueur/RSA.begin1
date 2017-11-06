#include "Cifrador.h"
int main(){
	CalculoRSA cal;
	RSA rsa;
	rsa.llave_publica=cal.get_llave_publica();
	rsa.llave_privada=cal.get_llave_privada();
	cout<<"La llave publica es"<<endl;
	cout<<rsa.llave_publica.first<<endl;
	cout<<rsa.llave_publica.second<<endl;
}
