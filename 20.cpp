#include <iostream>
using namespace std;

int main(){
	char input;
	cout<<"enter a character: ";
	cin>>input;
	if(input=='a'||input=='e'||input=='i'||input=='o'||input=='u')
		cout<<"you have entered a vowel.\n\n";
	else if(input>='a'&&input<='z')
		cout<<"you have entered a consonant.\n\n";
	else
		cout<<"invalid input.\n\n";
}
