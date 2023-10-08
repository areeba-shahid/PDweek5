#include<iostream>
#include<cmath>
using namespace std;
double length;
double width;
double height;
string unit;
double volume;
double  vol;

int pyramidVolume(){
       vol = length*width*height;
volume = vol / 3;
          
         if(unit == "millimeters"){
                return volume * pow(1000,3);}
    
                
         if(unit == "centimeters"){
                    return  volume * pow(100,3);}
            if(unit == "kilometers"){
                return volume / pow(1000,3);}
if(unit == "meters"){
 return volume ;}


}
                
main(){
cout<<"Enter the length of the pyramid (in meters): ";
cin>>length;
cout<<"Enter the width of the pyramid (in meters): ";
cin>>width;
cout<<"Enter the height of the pyramid (in meters): ";
cin>>height;
cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
cin>>unit;

cout<<"The volume of the pyramid is: "<< pyramidVolume() << " cubic "<< unit; 


}

