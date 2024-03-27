#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool turn=false;

void alt(int a,int b,int delta){
	int 
	if(turn && delta%2==0){
		turn=true;
		printf("\npi-> a+b -> %d + %d = %d ",a,b,a+b);
		turn=false;
	}
	else{
		turn=false;
		printf("\npj-> a*b -> %d * %d = %d ",a,b,a*b);
		turn=true;
	}
	
}




int main(int argc, char *argv[]) {
	
	int i;
	for(i=0;i<10;i++){
		alt(i,i*3);
	}
	return 0;
}
