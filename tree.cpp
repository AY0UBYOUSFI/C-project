#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <conio.h>
#define Macase 10
using namespace std;
int data[10]={1,3,0,-3,5,2,100,10,4,6};
int number(int f,int e){
    int result;
    while(true){
    	result=rand()%e;
    	if(result>=f)
    	return result;
	}
}

bool test(int *tab){
   for(int i=0;i<Macase;i++){
    if(tab[i]>tab[i+1])
        return true;
   }
return false;
}



void Tree(int F,int E,int *tab){
	int paint;
	paint=number(F,E);//first number of paint variable
	int temp;
	for(int i=F;i<paint;i++){

		if(tab[i]>paint){
			for(int x=E;x>paint;x--){
				if(tab[x]<paint){
				//change variables of table
				temp=tab[x];
				tab[x]=tab[i];
				tab[i]=temp;
				//*************************
				}
                else{
                 temp=tab[i];
				 tab[i]=tab[temp];
				 tab[temp]=tab[i];
				 paint=i;
				}

		}
	}

}
	for(int j=E;j>paint;j--){
		if(tab[j]<paint){
			for(int x=F;x<paint;x++){
				if(tab[x]>paint){
				//change variables of table
				temp=tab[x];
				tab[j]=tab[j];
				tab[j]=temp;
				//*************************
				}
                else{
                 temp=tab[j];
				 tab[j]=tab[temp];
				 tab[temp]=tab[j];
				 paint=j;
				}

		}
	}
}
          /*if(!test(data))
          return;
          else{
            Tree(0,paint-1,data);
            Tree(paint+1,E,data);
          }*/

}

void aff(int *tab){
for(int i=0;i<Macase;i++){
    cout<<*(tab+i)<<" ";
}
}

int main(){
    aff(data);cout<<endl;
    Tree(0,10,&data[0]);
    aff(data);
	return 0;
}
