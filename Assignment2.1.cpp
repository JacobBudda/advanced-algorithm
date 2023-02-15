#include<iostream>
#include<array>
using namespace std;

int main(){
	
	int size = 0; 
	int i=0;
	int input_matrix [4][5]= 
	{
		{0,0,3,0,4},
		{0,0,5,7,0},
		{0,0,0,0,0},
		{0,2,6,0,0}
	};
 
 	while(i<4){
 		int j=0;
 		while(j<5){
 			 if(input_matrix[i][j]!=0)  
            {  
                size++;  
            }  
            j++;
		 }
		 i++;
	 }
	
	 int output_matrix[3][size];   
     int k=0;  

	 for(int i=0; i<4; i++)  
    {  
        for(int j=0; j<5; j++)  
        {  
            if(input_matrix[i][j]!=0)  
            {  
                output_matrix[0][k] = i;  
                output_matrix[1][k] = j;  
                output_matrix[2][k] = input_matrix[i][j];  
                k++;  
            }  
      }  
    }  
	
	  for(int i=0 ;i<3; i++)  
    {  
        for(int j=0; j<size; j++)  
        {  
            cout<< output_matrix[i][j];  
            cout<<"\t"; 
        }  
        cout<<"\n";  
    }  
}