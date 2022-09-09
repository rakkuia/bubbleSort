#include <iostream>
using namespace std;

#define SIZE 5

typedef struct{
	int value[SIZE];
	int last;
}List;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
List lis[SIZE];
int number = 128;	

lis->last = SIZE - 1;


cout<<"FIRST DATA"<<endl;

	for(int i = 0; i <= lis->last; i++){
		number/=2;
		lis->value[i] = number ;
		cout<<lis->value[i]<<endl;
	}
	
cout<<"\nBUBBLE SORT DATA"<<endl;
	
	for(int i = 0 ; i <= lis->last - 1 ; i++){
		for(int j = i+1 ; j <= lis->last ; j++){
			if(lis->value[i] > lis->value[j]){
				int aux = lis->value[i];
				lis->value[i] = lis->value[j];
				lis->value[j] = aux;
			}
		}
	}
	
	for(int i = 0 ; i <= lis->last ; i++){
		cout<<lis->value[i]<<endl;
	}
	
	system("pause");

}
