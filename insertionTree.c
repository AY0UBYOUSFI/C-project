#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int* insertionTree(int* Tab,int n){
	int i,j,k=0,temp,x;
	for(i=0,j=i+1;i<n-1;j++,i++){
		
		if(Tab[i]>Tab[j]){
			temp=Tab[i];
			Tab[i]=Tab[j];
			Tab[j]=temp;
		}
		x=i;
		k=i-1;
		while(x>=1&&Tab[x]<Tab[k]){
			temp=Tab[k];
			Tab[k]=Tab[x];
			Tab[x]=temp;
			x--;k--;
			aff2(Tab,n);
		}
			
        aff(Tab,n);
	}
return Tab;	
	
	
}
void aff2(int* T,int n){
	int i;
	printf("\nINSER : ");
	for(i=0;i<n;i++){
		printf(" (%d) ",T[i]);
	}
}



void aff(int* T,int n){
	int i;
	printf("\nNORML : ");
	for(i=0;i<n;i++){
		printf(" (%d) ",T[i]);
	}
}


int main(){
    system("color a");
	int tab[18]={100,3,230,4,540,2,123,34,1,12,3,40,5,0,20,16,11,9};
    aff(tab,18);
    aff(insertionTree(tab,18),18);
	return 0;
}
