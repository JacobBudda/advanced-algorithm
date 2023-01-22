#include<iostream>
#include<array>
using namespace std;

int main(){
	int array_size;
	int numbers[105];
	int target_number;
	int i=0;
	int j=0;
	int k;
	cout<<"Enter the number of elements of array";
	cin>>array_size;
	cout<<"Enter the elements of array";
	while(i<array_size){
		cin>>numbers[i];
		i++;
	}
	cout<<"Enter the target number";
	cin>>target_number;
	while(j<(array_size-1)){
		k=j+1;
		while(k<array_size){
			if((numbers[j]+numbers[k])==target_number){
				cout<<j;
				cout<<k;
		}
		k++;
	}
	j++;
}
}



