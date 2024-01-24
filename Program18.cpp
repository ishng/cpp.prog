// Program 18 

#include<iostream>
using namespace std;

int main (){ 
char input;
cout<<"Enter a Character: ";
cin>>input;

cout<<"You Entered: "<<input<<"\n";
if(input >= 48 && input <=57)
cout<<"You have entered a number.\n\n";
else if((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
cout<<"You have entered a letter.\n\n";
else
cout<<"you have entered a special character.\n\n";
}
