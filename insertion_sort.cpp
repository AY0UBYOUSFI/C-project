#include <iostream>
#include <cstdlib>
#include<unistd.h>
#include<mmsystem.h>
using namespace std;
int shift_count = 0;
void display(const int *tab, int n) {
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
sleep(1);



    cout << endl;
}
void change(int *tab, int i, int j) {
    int temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
    shift_count++;
}


void insertionSort(int *tab, int n) {
int j,x,z;
for(int i=0;i<n-1;i++){
    j=i+1;
    if(tab[i]>tab[j]){
        change(tab,i,j);
        display(tab,n);
        x=i;
        while(x>0&&tab[x-1]>tab[x]){
            change(tab,x,x-1);
            display(tab,n);
            x--;
        }
    }
}









}

int generateRandomNumber(int number) {
    return rand() % 100 + 1;
}
void implementArray(int *tab, int n) {
    for (int i = 0; i < n; i++) {
        tab[i] = generateRandomNumber(i);
    }
}

int main() {
    int n;

    cout << "Enter the size of the table: ";
    cin >> n;

    int tab[n];

    implementArray(tab, n);
    cout << "tab1:\n";
    display(tab, n);

    insertionSort(tab, n);
    cout << "\ntab2:\n";
    display(tab, n);

    cout << "\nThe shift count is: " << shift_count << endl;

    return 0;
}

