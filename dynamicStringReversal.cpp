#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string *str = new string;
	cout << "Enter a string: ";
	cin >> *str;
	reverse(str->begin(),str->end());
	cout << "The reversed string is: " << *str << endl;
	delete str;
}
