#include <iostream>
using namespace std;

float computeArea(float width, float height);
void logToConsoleArea(float Area);

int main (){
	int score[3], i, counter, totalScore;
	float averageScore;
	
	for(i = 0; i < 3; i++){
		cout<<"Enter score: ", i;
		cin>>score[i];
	}

totalScore = 0;

for(i = 0; i < 3; i++)
totalScore += score[i];

averageScore = (float)totalScore / 3;

counter = 0;

for(i=0;i<3;i++)
if(score[i] > averageScore)
counter++;
cout<<"\nAverage Score: "<<averageScore;
cout<<"\nNumber of Students with scores above average: "<<counter<<"\n";
}
	
	
