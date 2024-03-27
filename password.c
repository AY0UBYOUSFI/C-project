#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int * password(){
	int pass[8];
	int i;
	int temp;
	for(i=0;i<8;i++){
		int n=rand()%9;
		int temp=rand()%n;
		pass[i]=temp;
	}
	return pass;
}



int main(int argc, char *argv[]) {
    int i;
	int* temp=password();
	for(i=0;i<8;i++){
printf("%c",*(temp+i));
	}
	return 0;
}
