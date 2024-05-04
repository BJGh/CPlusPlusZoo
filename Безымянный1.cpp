#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
int main()
{
		int i, n;
		int a; 
		int arr[10];
		
		cout << "Enter num"<<endl;
		
		cin >> n;
		
		for (i=1; i <=n;i++)
		{
			
			a = n%10;	n/10;
			for (int j =2; j*j<=n;j++)
			if (a % i != 0 )
			{
				arr[i] = a;
			}
	
		}
		i=1;
		for (i=1;i<=10;i++){
		
			if (arr[i+1] - arr[i]==2){
				cout <<arr[i+1]<<' '<<arr[i]<<"twin primats"<<endl;
			}}
			
		}
