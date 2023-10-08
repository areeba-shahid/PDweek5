#include<iostream>
#include<cmath>
using namespace std;
int hoursNeeded;
int daysLeft;
int workers;
projectTimeCalculation(){
float days = daysLeft - (daysLeft*0.10);
int hoursPerDay =  10;
float timeInHours = days * hoursPerDay * workers;
float timeCalculation;
if(workers < 2){
 timeCalculation =  hoursNeeded - timeInHours;}
if(workers > 1){
timeCalculation = timeInHours - hoursNeeded;}


if(timeCalculation > hoursNeeded){
 cout<<"Yes!"<<timeCalculation<<" hours left.  ";}
if(timeCalculation < hoursNeeded){
cout<<"Not enough time! "<<timeCalculation<<" hours needed.";}
}

main(){
cout<<"Enter the needed hours: ";
cin>>hoursNeeded;
cout<<"Enter the days that the firm has: ";
cin>>daysLeft;
cout<<"Enter the number of all workers: ";
cin>>workers;
projectTimeCalculation();
}