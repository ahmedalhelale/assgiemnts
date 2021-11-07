#include<iostream>
#include<string>
using namespace std;

string stringUpper(string lwTxt)
{
	for (int i = 0; i < lwTxt.length(); i++)
  	{
  		if(lwTxt[i] >= 'a' && lwTxt[i] <= 'z')
  		{
  			lwTxt[i] = lwTxt[i] - 32;
		}
  	}
  	return lwTxt;
}
int main()
{
	string lwTxt;
	
	cout << "\nPlease Enter the string  =  ";
	getline(cin, lwTxt);
	
	string up = stringUpper(lwTxt);
  	
	cout<< "\n Uppercase = " << up;
		
 	return 0;
}