#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
    int operation;
    float a;
    float b;
    char option;
    float result;

    do{

    cout<<"the name of the mathematic operation Sum is 1;substraction is 2, multiplication is 3 and division is 4"<<endl;
    cin>>operation;

    

    switch(operation) {
        case 1:
        cout<<"You selected to do a sum"<<endl;
        cout<<"introduce value a"<<endl;
        cin>>a;
        cout<<"Introduce value b"<<endl;
        cin>>b;

        result= a+b;
        cout<<"The result is:"<<result<<endl;
        break;

        case 2:
        cout<<"You selected to do a substraction"<<endl;
        cout<<"introduce value a"<<endl;
        cin>>a;
        cout<<"Introduce value b"<<endl;
        cin>>b;

        result= a-b;
        cout<<"The result is:"<<result<<endl;
        break;

        case 3:
        cout<<"You selected to do a multiplication"<<endl;
        cout<<"introduce value a"<<endl;
        cin>>a;
        cout<<"Introduce value b"<<endl;
        cin>>b;

        result= a*b;
        cout<<"The result is:"<<result<<endl;
        break;

        case 4:
        cout<<"You selected to do a division"<<endl;
        cout<<"introduce value a"<<endl;
        cin>>a;
        cout<<"Introduce value b"<<endl;
        cin>>b;

        if(b==0){
        cout<<"The result is undetermined"<<endl;
        }else{
            result= a/b;
            cout<<"The result is:"<<result<<endl;
        }
        break;

        default:
        cout<<"Invalid number please select a number between 1-4"<<endl;
        break;
    }

    cout<<"\n Would you like to continue? (y/n)"<<endl;
    option = getch();

} while(option == 'Y'||option =='y');

return 0;

}