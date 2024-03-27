#include<iostream>
#include<math.h>
using namespace std;


//global varible *********

	int shift_number=0;
	
	
//*******cod source*******

void display(int *tab,int n){
	for (int i=0;i<n;i++){
		cout<<" "<<tab[i]<<" ";
	}
}

void change(int *tab,int i,int j,int *number_shift){
	int temp=tab[i];
	tab[i]=tab[j];
	tab[j]=temp;
	(*number_shift)++;
}



void insertionsort(int *tab,int n){
	int k=1;
    int x=0;
	
	for (int i=0;i<n;i++){

		while((tab[i+x]>tab[i+k]&&k<n)||(tab[i+x]>tab[i+x]&&k<=n)){
		       change(tab,i+x,i+k,&shift_number);
		       display(tab,n);cout<<"\n";
               x++;k++;

	}
	x=0;k=1;
		
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
	cout<<"\n the shif number is : "<<shift_number;
	
	return 0;
}
