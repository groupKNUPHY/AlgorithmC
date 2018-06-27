#include <stdio.h>

int main(){

	int a[5];

	int i,j,tmp;
	

	for(i=0; i<5; i++){
	
		a[i] = 5-i;
	}

	for(i=0; i<5; i++){

		printf("%d",a[i]);
	}

		
		printf("\n");



	for(i=0; i<4; i++){

		for(j=i+1; j<5; j++){

			if(a[i] > a[j]){
			 
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}	
		}
	}

	for(i=0; i<5; i++){
		printf("%d\n",a[i]);
	}

}
