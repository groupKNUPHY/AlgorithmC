#include <iostream>
using namespace std;
int main() {


	int tmp=0;
	int val=1;

	for(int i=1; i<11; i++){
	
	 tmp = val-1;
	 if(tmp <0) continue;
	 val = tmp+val;
	 tmp = 0;

	}



return 0;
}
