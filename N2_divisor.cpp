#include <iostream>
using namespace std;
int main() {


int num=0;
cout << " input :" << endl;
cin >> num;

	for(int i=1; i<num+1; i++){
		if (num%i == 0){
		
		cout << i << endl;
		}
	
	}




return 0;
}
