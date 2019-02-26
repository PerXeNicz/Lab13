#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	
	for(int k=1; k<N; k++){
		int P=0;
		for(int i=0; i<N; i++){
			if(k==i) cout << "[" << d[i] << "]";
			else cout << " " << d[i] << " ";
		}
		cout << " => ";
		
		for(int i=k; i>0; i--){
			if(d[k]>d[k-i]){
				swap(d,k,k-i);
				P++;
			}
		}

		for(int i=0; i<N; i++){
			if(i==(k-P)) cout << "[" << d[i] << "]";
			else cout << " " << d[i] << " ";
		}
		cout << "\n";
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
