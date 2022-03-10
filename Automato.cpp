#include <iostream>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{

	int x=0,n;
	string expressao;
	
	cout<<"digite quantos caracteres irao ser repetidos";
		cin>>n;
		
	string caractere[n];
		
	for(int i=0;i<n;i++)
	{
		cout<<"letra ou numero que vai se repetir: \n";
			cin>>caractere[i];
			
		expressao += caractere[i];
	
	}
	
	
	
	cout<<"\n";
	
	cout<<expressao;
	
	return 0;
}
