#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> arr){
	for(int i=0;i<arr.size();i++){
		cout<<" "<<arr[i]<<" ";
	}
	
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void lilysHomework(vector<int> arr) {
    int cont=0;
    int temp=0;
    for(int i=0;i<arr.size();i++){
    	        
        for(int j=i;j<arr.size();j++){
        	
            if(arr[j]-arr[i]<0){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                cont++;
                display(arr);
                cout<<"\n";
            continue;
			}
        }
    }
cout<<"\n"<<"with "<<cont<<" step";
}
int main(int argc, char** argv) {
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(9);
	arr.push_back(0);
	arr.push_back(2);
	//1902188574
	arr.push_back(1);
	arr.push_back(8);
	arr.push_back(8);
	arr.push_back(5);
	arr.push_back(7);
	arr.push_back(4);
lilysHomework(arr);
	return 0;
}
