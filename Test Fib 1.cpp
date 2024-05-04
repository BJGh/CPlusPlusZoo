#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
 	 int i,j,N=4,k=0;
  	 int A[N][N], B[N*N];
  	 
  	 	B[1]=1;
  	 	B[2]=1;
  	 	for (i=1;i<=N*N;i++){
  	 		B[i]=B[i-1]+B[i-2];
  	 	}
  	 		for (i=1; i<=N; i++){
  	 		
  	 			for (j=1; j<=N; j++)
				   {
					A[i][j]=B[i];
  	 				}
  	 			}
  	 	/*	for (i=1; i<=N; i++)
		 	{	
		 		for (j=3; j<=N; j++)
				 {
				 	A[i][j]=A[i][j-1]+A[i][j-2];
		 		}*/
		 		for (i=1; i<=N; i++)
		 {
     			for (j=1;j<=N;j++){
     				 cout<<"A["<<i<<j<<"]="<<A[i][j]<<endl; } 	
		 }
  	 }
  	 	
  	 	
  	 	
  	 	
  	 	
  	 	
  	 	
  	 	
  	 	
  	 	
  	 	
		/*for (i=1; i<=4; i++)
		 {	
		 	for (j=0; j<=4; j++){
		  if (A[i+1][j+1]==A[i-1][j-1]-A[i-2][j-2]){
				 		A[i][j]=0;	
						 }
						 }
		}
		
		   	for (i=1; i<=4; i++)
		 {
     			for (j=1;j<=4;j++){
     				 cout<<"A["<<i<<j<<"]="<<A[i][j]<<endl; } 	
		 }*/



