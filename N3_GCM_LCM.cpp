#include <iostream>
using namespace std;
int main() {

int rest,base;
int a,b,G,L;

	a = 24; b= 18;

	if(a>b) {
	
	rest = a; base =b;


	}else { 
	
	rest =b; base =a;
		
	}

	
	while(base!=0){

	rest = rest%base;
	base = rest/base;
	
	}
	
	G=rest;
	L=(a/rest)*(b/rest)*rest;
	cout << G << " " << L << endl;

return 0;
}
