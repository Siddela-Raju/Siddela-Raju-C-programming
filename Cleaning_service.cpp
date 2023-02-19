#include<iostream>
using namespace std;

int main(){

    cout<<"Welcome to the Raju's Carpet Cleaning Service"<<endl;

    cout<<"\nHow many small rooms would you like to clean? ";

    int Number_of_small_rooms{0};
    cin>>Number_of_small_rooms;

    cout<<"\nHow many large rooms would you like to clean? ";

    int Number_of_large_rooms{0};
    cin>>Number_of_large_rooms;

    cout<<"Price per small room: $"<<Number_of_small_rooms * 25<<endl;
    cout<<"Price per large room: $"<<Number_of_large_rooms * 35<<endl;
    cout<<"Cost: $
    "<<(Number_of_small_rooms * 25) +
     (Number_of_large_rooms * 35)<<endl;

    cout<<"Tax: $"
    <<(Number_of_small_rooms * 1.65) +
     (Number_of_large_rooms * 1.65)<<endl;

    cout<<"========================================"<<endl; 

    cout<<"Total estimate: $"
    <<(Number_of_small_rooms * 25) +
     (Number_of_small_rooms * 1.65) +
      (Number_of_large_rooms * 35) +
       (Number_of_large_rooms * 1.65)<<endl;

    cout<<"This estimate is valid for 30 days"<<endl;
     
    cout<<endl;

    return 0;

}