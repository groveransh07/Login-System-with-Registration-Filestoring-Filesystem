#include <fstream>
#include <iostream>
#include <limits>
#include <string>
#include<fstream>

using namespace std;

bool IsloggedIN()
{
    string username,password,un,pw;
    cout<<"Enter username: ";
    cin>>username;
    cout<<"Enter Password: ";
    cin>>password;

    ifstream read(username + ".txt");
    getline(read, un);
    getline(read, pw);

    if (un==username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void login()
{
    bool status = IsloggedIN();
        if (!status)
        {
            cout<<"False Login !"<<endl;
            system("PAUSE");
            //return 0;
        }
}
void register_user()
{
    string username, password;
        cout<<"select a username:  ";cin>>username;
        cout<<"select a password:  ";cin>>password;

        ofstream file;
        file.open(username + ".txt");
        file<<username<<endl<<password;
        file.close();
}
void main_menu()
{
    int choice ;
    
       cout<< "Hello, Would you like to log in or register?" "\n" "[1] Login" "\n""[2] Register" "\n" "[3] Exit";
       cout<<"\nEntre your Choice: ";
       cin>>choice;

    switch (choice)
    {
    case 1:
        login();
        break;
    case 2:
        register_user();
        break;
    }
}
int main()
{
    main_menu();
}
/*int main()
{
    int choice;
    cout<<"1: Register\n 2: Login\n Your choice: ";
    cin>> choice;

    if(choice==1)
    {
        string username, password;
        cout<<"select a username:  ";cin>>username;
        cout<<"select a password:  ";cin>>password;

        ofstream file;
        file.open(username + ".txt");
        file<<username<<endl<<password;
        file.close();

        main();
    }
    else if(choice==2)
    {
        bool status = IsloggedIN();
        if (!status)
        {
            cout<<"False Login !"<<endl;
            system("PAUSE");
            return 0;
        }
    }
    else
    {
        cout<<"Succesfully Logged in !"<<endl;
        system("PAUSE");
        return 1;

    
    }

}*/
