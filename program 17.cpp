// Program #17

#include <iostream>
using namespace std;

int main () {
	char input;
	cout<<"Enter a Character: ";
	cin>>input;
	if((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
	cout<< "You have entered a character.\n";
	else
	cout<<"invalid input.\n";
}
