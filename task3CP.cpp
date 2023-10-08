#include<iostream>
using namespace std;
float itemPrice;
char typeCode;
float taxRate;
float finalPrice;
float taxAmount;
float calculate(){

if( typeCode == 'M'){
          taxRate = 6;}
if( typeCode == 'E'){
          taxRate = 8;}

if( typeCode == 'S'){
          taxRate = 10;}

if( typeCode == 'V'){
          taxRate = 12;}

if( typeCode == 'T'){
          taxRate = 15;}
taxAmount = itemPrice *( taxRate /100);
finalPrice = itemPrice + taxAmount;
return finalPrice;
}
main(){
cout<<"Enter the vehicle type code (M, E, S, V, T): ";
cin>>typeCode;
cout<<"Enter the price of the vehicle: $";
cin>>itemPrice;
cout<<"The final price of a vehicle of type " << typeCode << " after adding the tax is $"<< calculate();

}