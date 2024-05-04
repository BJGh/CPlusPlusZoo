#include <iostream>
#include <stdlib.h>
#include <time.h>

#define ABSLIMIT 100
 
using namespace std;

int rand_mas(int N, int M);
 int K = 12;
int Fib(int K);

int main()
{
	int N=4; int M=4; int j,i;int k=22;
    int A[N][M]; 
  
	    srand(time(NULL));
    
  for (i=1;i<=N;i++){
    	for (j=1;j<=M;j++){
    			A[i][j] = rand_mas(0, ABSLIMIT); //èíèöèàëèçàöèÿ ñäó÷àéíûìè ÷èñëàìè.
    			cout << "A"<<"["<<i<<"]"<<"["<<j<<"]"<<"="<<A[i][j]<<endl;
    		
    	}
    }
    
   
	cout <<"_____________"<<endl;
		for (i=0; i<=N; i++)
		 {
     			for (j=0;j<=M;j++)
				 {
				 		if(A[i][j]==Fib(&*K));
				 		{ A[i][j]=0;}
				 	}
				 }
				 
		
	
	
     	for (i=1; i<=N; i++)
		 {
     			for (j=1;j<=M;j++)
				 {
				 		cout << "A"<<"["<<i<<"]"<<"["<<j<<"]"<<"="<<A[i][j]<<endl;
				 		cout << Fib(7)<<endl;
    		}
    	}
		 
    system("pause");
    cout << endl;
    //ÇÀÏÈÑÀÒÜ ×ÈÑËÀ ÔÈÁÎÍÀ××È Â ÎÒÄÅËÜÍÛÉ ÌÀÑÑÈÂ È ÑÐÀÂÍÈÒÜ ÈÕ
}


int rand_mas(int N, int M){
	
	return rand() % (N - M + 1) + N;//ñëó÷. ÷èñëà 
}


int Fib(int *K)
{
    
    int arr[*K];
    arr[0]=1;
    arr[1]=1;
 
    for (int i=2; i<=*K; i++){
    
        arr[i] = arr[i-1] + arr[i-2];}
 
    for (int i=0; i<*K; i++){
    
        return  arr[i];}
 
    cout << endl;
 

}
 	
 


