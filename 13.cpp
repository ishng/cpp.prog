// program 13

#include <iostream>
using namespace std;

int main (){
	int mark;
	char grade;
	cout<<"Please enter the mark of the student: ";
	cin>>mark;
	
	if (mark >= 0&& mark <= 34)
	grade = 'E';
	else if (mark >= 35 && mark <= 54)
	grade = 'D';
		else if (mark >= 55 && mark <= 64)
	grade = 'C';
		else if (mark >= 65 && mark <= 74)
	grade = 'B';
		else if (mark >= 75 && mark <= 100)
	grade = 'A';
	    if (mark >= 0 && mark <=100)
	    cout<<"Your grade is "<<grade;
	    else 
	    cout<<"The mark you entered is invalid. \n";
}
