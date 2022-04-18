#include<iostream>

using namespace std;
//we have usued pesudocode here for the equation from the requirements

int main()
{
    cout<<"Hello, welcome to Software based cleaning service"<<endl;
    
    int number_of_small_rooms {0};
    cout<<"How many small rooms would you like to clean?"<<endl;
    cin>>number_of_small_rooms;
    
    int number_of_large_rooms {0};    
    cout<<"How many large rooms would you like to clean?"<<endl;
    cin>>number_of_large_rooms;
    
    const double price_per_small_room {25};
    const double price_per_large_room {35};
    
    const double sales_tax {0.06};
    const int estimate_expiry {30}; //days
    
    cout<<"Estimated carpet cleaning service"<<endl;
    cout<<"Number of small rooms: "<<number_of_small_rooms<<endl;
    cout<<"Number of large rooms: "<<number_of_large_rooms<<endl;

    cout<<"Price per small room: $"<<price_per_small_room<<endl;
    cout<<"Price per large room: $"<<price_per_large_room<<endl;
    
    double cost_of_room=(price_per_small_room*number_of_small_rooms)+(price_per_large_room*number_of_large_rooms);    
    cout<<"Cost of room:$"<<cost_of_room<<endl;
    
    double tax_calculation=cost_of_room*sales_tax;
    cout<<"Tax:$"<<tax_calculation<<endl;
    
    cout<<"==========================="<<endl;
    cout<<"Total estimate:$"<<cost_of_room+tax_calculation<<endl;
    cout<<"This estimate is valid for "<<estimate_expiry<<" days"<<endl;
    
    return 0;
}