
# include <iostream>
# include <locale.h>
 
using namespace std;


bool simple(int n)
{
	for (int i = 2; i*i<=n;i++){
		if (n%i==0)
		{
			return false;
		}else{return true;
		}
	}
}

void Findsiblings(int n)
{
	int i = n;
	for (;i<=2*n-2;i++){
		if (simple(n)&&simple(n+2))
		{
			cout<< n<<" "<< n + 2<<endl;
		}
	}
	if (i==2*n-2){
		cout << "no siblings\n";
	}
}

int main()
{
	setlocale (LC_ALL, "rus");
	int n;
	cout << "¬ведите число ";
	cin >> n;
	Findsiblings(n);
}

