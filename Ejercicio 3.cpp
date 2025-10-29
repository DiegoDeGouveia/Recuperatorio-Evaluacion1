#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int randomNum = 0;
    int Attempts = 5;
    int number;
    char option;

    do{
        randomNum = rand() % 101;
        do{
            cout<<" Please introduce a number to play (You have only 5 attempts):"<<endl;
            cin>>number;

            Attempts --;

            const int distance = abs (randomNum - number);

            if(distance == 0) {
                cout<<"Congrats you guessed the number"<<endl;
            }else if(distance >=70) {
                cout<<"You are too faaaarrrr"<<endl;
            } else if(distance >=50){
                cout<<"You are quite far away"<<endl;
            } else if(distance >=30) {
                cout<<"You are kinda close"<<endl;
            } else if(distance >=10) {
                cout<<"Damn you too close bro"<<endl;
            } else if(distance >=1) {
                cout<<"YOU ARE ON FIRE, almost guessed"<<endl;
            }

            cout<<"You have " << Attempts << " attempts remaining";
        } while(Attempts > 0);
        
        Attempts = 5;

        cout<<"\n Would you like to continue? (y/n)"<<endl;
    option = getch();

} while(option == 'Y'||option =='y');

return 0;


    }