#include <iostream>
using namespace std;
int main() {

int odd=0 ;
int even=0;

	for(int i=1; i<6; i++){

		odd += (2*i-1); 
		even += 2*i;
	}

	cout << "odd :" << odd << "even :" << even << endl;


return 0;
}
