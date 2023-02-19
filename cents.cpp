#include<iostream>
using namespace std;
int main(){

    const int dollar_value{100};
    const int quater_value{25};
    const int dime_Value{10};
    const int nickel_value{5};

    int change_amount{};
    
    cout << "Enter an amount in cents: ";
    cin >> change_amount;

    int balance{},dollar{},quater{},dime{},nickel{},penny{};

    dollar = change_amount/dollar_value;
    balance = change_amount - (dollar * dollar_value);

    quater = balance/quater_value;
    balance -= quater * quater_value;

    dime = balance/dime_Value;
    balance -= dime * dime_Value;

    nickel = balance/nickel_value;
    balance -= nickel * nickel_value;

    penny = balance;

    cout<<"You can provide change for this change as follow: "<<endl;
    cout << "dollars : " << dollar << endl;
    cout << "quaters : " << quater << endl;
    cout << "dimes   : " << dime << endl;
    cout << "nickels : " << nickel << endl;
    cout << "penny   : " << penny << endl;

    cout<<endl;

    return 0;

}



