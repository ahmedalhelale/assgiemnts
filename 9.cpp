// C++ program to count vowels in a string
#include<iostream>
using namespace std;

// Function to check the Vowel
bool isVowel(char ch)
{
	ch = toupper(ch);
	return (ch=='A' || ch=='E' || ch=='I' ||
					ch=='O' || ch=='U');
}


int countVowels(string str)
{
	int count = 0;
	for (int i=0; i<str.length(); i++)
		if (isVowel(str[i])) 
			++count;
	return count;
}

int main()
{

	string str ;
	cin >> str ;


	cout << countVowels(str) << endl;
	return 0;
}
