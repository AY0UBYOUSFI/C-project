#include<iostream>
#include<math.h>
using namespace std;

void display(int *tab,int n){
	for (int i=0;i<n;i++){
		cout<<" "<<tab[i]<<" ";
	}
}

void change(int *tab,int i,int j){
	int temp=tab[i];
	tab[i]=tab[j];
	tab[j]=temp;
}



void insertionsort(int *tab,int n){
	int shift_number=0;
	for (int i=0;i<n;i++){
		for(int j=i;j<n;j++){
		if(tab[i]>tab[j]){
		       change(tab,i,j);	
		}
	}
		
	}
	
}


int rand(int number){
	if(number%2==0){
		return 20*3-44+number;
	}
	else
	    return 3-4+20+number;
	
}






void Implementaion_tab(int *tab,int n){
		for (int i=0;i<n;i++){
		tab[i]=  rand(i);
	}
}















int main(){
	int n,tab[n];
	cout<<"give me the size of table: ";
	cin>>n;
	
	
	Implementaion_tab(tab,n);cout<<"\ntab1:\n";
	display(tab,n);cout<<"\n";
	insertionsort(tab,n);cout<<"\ntab2:\n";
	display(tab,n);cout<<"\n";
	
	return 0;
}
