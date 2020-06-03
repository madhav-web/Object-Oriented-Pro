#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int MAX = 35;
class Account
{
private:
    string name;
public:
    void Register()
    {
        string a;
        cout << "Type your name" <<endl;
        cin >> a;
        name = a;
    }
};
class User: public Account
{
private:
    string username;
    string password;
public:
    User();
    ~User()
    {
        cout << " Account is Deleted"<<endl;
    }

};
User:: User()
{
    char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z', '@', '/', '*', '&', '%', '$' };

    string res1 = "";
    for (int i = 0; i < 10; i++)
        res1 = res1 + alphabet[rand() % MAX];

    string res2 = "";
    for (int j = 0; j < 10; j++)
        res2 = res2 + alphabet[rand() % MAX];

        this->username = res1;
        this->password = res2;
        cout<< "Your username: "<<username<<endl;
        cout<< "Your password: "<<password<<endl;
}
int main()
{
    srand(time(NULL));
    int a;
    cout << "1.Press 1 for registration"<<endl;
    cout << "2. Press 2 for deleting the account"<<endl;
    cin >> a;
    switch(a)
    {
    case 1:
        {
            User *use1;
            use1 = new User();
            use1->Register();
        }
    case 2:
        {

        }
    }
}
