#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct cars{
    string brand[200]={"Maruti","Honda","Ford","Mahindra","Tata","Hyundai","Kia","Mercedes","BMW","Audi"};
    string model[200]={"Swift","City","Endever","Scorpio","Harrier","Creta","Seltos","E220d","520d","A6"};
    string colour[200]={"White","Red","Black","Black","Red","White","Grey","Black","Blue","White"};
    string maxspeed[200]={"150","160","170","160","165","160","160","180","190","185"};
    string year[200]={"2018","2020","2019","2022","2022","2021","2023","2020","2021","2019"};
    string fueltype[200]={"Petrol","Petrol","Diesel","Diesel","Diesel","Petrol","Petrol","Diesel","Diesel","Petrol"};
    string price[200]={"5000","6000","7000","8000","9000","10000","11000","12000","13000","14000"};
}car;

void login();
void menu();
void details(int);

int main()
{   
    login();
    string decide="yes";
    cout<<"------------------------------"<<endl;
    cout<<"Welcome to car rental System."<<endl;
    cout<<"Choose your Option."<<endl;
    cout<<"------------------------------"<<endl;
    while (decide != "exit")
    {
        menu();
        cout<<"Your choice: ";
        int choice;
        cin>>choice;
        details(choice);
        cout<<"Are you sure You want to rent this car(Yes,No,Exit)"<<endl;
        cin>>decide;
        if(decide=="Yes" || decide=="yes"){
            cout<<"The details of the rented car is: "<<endl;
            cout<<"-----------------------------------"<<endl;
            cout<<"Brand: "<<car.brand[choice-1]<<endl;
            cout<<"Color: "<<car.colour[choice-1]<<endl;
            cout<<"Model: "<<car.model[choice-1]<<endl;
            cout<<"Year: "<<car.year[choice-1]<<endl;
            cout<<"Fuel Type: "<<car.fueltype[choice-1]<<endl;
            cout<<"Maximum Speed: "<<car.maxspeed[choice-1]<<endl;
            cout<<"Price: "<<car.price[choice-1]<<endl;
            exit(0);
        }
        else if(decide=="No" || decide=="no"){
            cout<<"Choose your option."<<endl;

        }
        else if(decide=="exit" || decide=="Exit"){
            cout<<"Thank You for using our services."<<endl;
            cout<<"---------------------------------"<<endl;
            system("PAUSE");
            system("cls");
        }
    }
    
}

void login(){
    string pass="";
    char ch;
    cout<<"Welcome to Car Rental System."<<endl;
    cout<<"Enter Password."<<endl;
    ch =_getch();
    while(ch != 13){
        pass.push_back(ch);
        cout<<"*";
        ch=_getch();
    }
    if(pass=="pass"){
        cout<<"Correct Password."<<endl;
        cout<<"Loading..."<<endl;
        system("PAUSE");
        cout<<"Welcome"<<endl;
        system("cls");
    }
    else{
        cout<<"Incorrect Password, Try Again"<<endl;
        system("PAUSE");
        system("cls");
        login();
    }
}

void menu(){
    for (int i = 0; i < 10; i++)
    {
        cout<<(i+1)<<"."<<car.brand[i]<<endl;
    }
}

void details(int choice){
    cout<<"The details of car are:- "<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<"Brand: "<<car.brand[choice-1]<<endl;
    cout<<"Color: "<<car.colour[choice-1]<<endl;
    cout<<"Model: "<<car.model[choice-1]<<endl;
    cout<<"Year: "<<car.year[choice-1]<<endl;
    cout<<"Fuel Type: "<<car.fueltype[choice-1]<<endl;
    cout<<"Maximum Speed: "<<car.maxspeed[choice-1]<<endl;
    cout<<"Price: "<<car.price[choice-1]<<endl;
}

