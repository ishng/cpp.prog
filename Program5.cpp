// prog 5

#include <iostream>
using namespace std;

int main (){  
int exitTime, entryTime, period;
float charge;
cout<<"Please enter your entry time: ";
cin>>entryTime;
cout<<"please enter your exit Time: ";
cin>>exitTime;

period = exitTime - entryTime;
if (period > 1)
charge =(period) + 1;
else
charge = 2;

cout <<"The charge of your parking is "<<charge;

}
