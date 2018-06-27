#include <stdio.h>

int main(){

int a[5];
int i,j,tmp;

	for(i=0; i<5; i++){
	a[i]=5-i;

	}


	for(i=0; i<4; i++){

		for( j=0; j<5-i; j++){

			if(a[j] > a[j+1]){

				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}

	for(i=0; i<5; i++){

		printf("%d\n",a[i]);
	}


}
