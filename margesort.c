#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

//data of this codprogram




void aff(int* T,int n){
	int i;
	printf("\nNORML : ");
	for(i=0;i<n;i++){
		printf(" (%d) ",T[i]);
	}
}



void margesort(int *Tab,int *i,int *j,int n){
   int temp;
   
   if(Tab[*i]==0){
   	return;
   }
   else{
   	if(Tab[*i]>Tab[*j]){
   		temp=Tab[*i];
   		Tab[*i]=Tab[*j];
   		Tab[*j]=temp;
   		aff(Tab,n);
	   }
	else if(*i<=n&&*j<=n){
		(*j)++;
		margesort(Tab,&i,&j,n);
		aff(Tab,n);
	}
	else if(*j==n+1){
		*j=(*i++) ;
		(*i)++;
		margesort(Tab,&i,j,n);
	aff(Tab,n);
	}
	else{
		return;
	}
   	aff(Tab,n);
   	
   }
    
} 


int main(){
	int n=11;
	int table[]={1,3,0,2,10,4,20,4,23,22,4};
	aff(table,n);
	margesort(table,0,11,n);

	return 0;
}
