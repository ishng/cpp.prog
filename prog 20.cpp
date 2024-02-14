// prog 20
#include <iostream>
using namespace std;

int main() {
int mark;

do{
	cout<<"Enter Grade: ";
	cin>>mark; // users enters a single character
	
	if(mark > 49 && mark <= 100)
	cout<<"You Passed.\n\n";
	else if(mark >= 0 && mark <= 49)
	cout<<"You Failed.\n\n";
	else
	cout<<"Wrong input. Please try again.\n\n";
}
while(mark < 0 || mark > 100 );
}
