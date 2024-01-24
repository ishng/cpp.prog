#include <iostream>
using namespace std;

int main (){
	int markA, markB, markC, totalsum;
	float averageMark;
	cout<<"Please enter mark of your 1st student: ";
	cin>>markA;
cout<<"Please enter mark of your 2nd student: ";
	cin>>markB;
	cout<<"Please enter mark of your last student: ";
	cin>>markC;	
	totalsum = markA + markB + markC;
	averageMark = (float)totalsum /3;
	cout<<"The average of the 3 students is " <<averageMark;
	
}
