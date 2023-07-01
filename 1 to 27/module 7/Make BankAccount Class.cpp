#include<bits/stdc++.h>
using namespace std;
class Accountn
{
public:
    string account_holder;
    string addresh;
    int account_number;
    int age;
protected:
    int balance;
private:
    string password;

public:
    Accountn(string accountn_holder, string addresh, int age, string password)
    {
        this->account_holder=account_holder;
        this->addresh=addresh;
        this->age=age;
        this->password=password;
        this->account_number=rand()%1000000000;
        this->balance = 0;
        cout<<"your account number is "<<this->account_number<<endl;
    }
    int show_balance(string password)
    {
        if(this->password == password)
        {
            return this->balance;
        }
        else
        {
            return -1;
        }
    }

    void add_money(string password, int amount)
    {
        if(this->password == password)
        {
            this->balance+= amount;
            cout<<"add money suessfully"<<endl;
        }
        else
        {
            cout<<"password dedn't match"<<endl;
        }

    }

    void deposit_money(string password, int amount)
    {
        if(this->password == password)
        {
            this->balance-= amount;
            cout<<"deposit money suessfully"<<endl;
        }
        else
        {
            cout<<"password didn't match"<<endl;
        }

    }
    friend class Mycash;

};
class Mycash
{
protected:
    int balance;

public:
    Mycash()
    {
        this->balance=0;
    }

public:
    void add_money_form_bank(Accountn * myaccount, string password, int amount)
    {
        if(myaccount->password == password)
        {
            this->balance+=amount;
            myaccount->balance-=amount;
            cout<<"add money form bank account successful"<<endl;
        }
        else
        {
            cout<<"Password didn't match"<<endl;
        }
    }
    int show_balance()
    {
        return balance;
    }



};


Accountn* create_account()
{
    string account_holder, addresh,password;
    int age;
    cout<<"Create account"<<endl;
    cout<<"Account Holder Name: ";
    cin>>account_holder;




    cout<<"Addresh: ";
    cin>>addresh;

    cout<<"Age: ";
    cin>>age;

    cout<<"Password: ";
    cin>>password;

    //cin>>addresh>>age>>password;

    //Dynamic allocation
    Accountn *myAccoount = new Accountn(account_holder,addresh,age,password);
    return myAccoount;

}

void add_money(Accountn *myaccoutn)
{
    int amount;
    string password;
    cout<<"add money"<<endl;
    cin>>password>>amount;
    myaccoutn->add_money(password, amount);
    cout<<myaccoutn->show_balance("abcd")<<endl;
}

void deposit_money(Accountn *myaccoutn)
{
    int amount;
    string password;
    cout<<"deposit money"<<endl;
    cin>>password>>amount;

    myaccoutn->deposit_money(password, amount);
    cout<<"Bank Balance"<<myaccoutn->show_balance("abcd")<<endl;
}

void add_money_form_bank(Mycash *mycash, Accountn *myaccount)
{
    int amount;
    string password;
    cout<<"add money form bank"<<endl;
    cin>>password>>amount;


    mycash->add_money_form_bank(myaccount,password, amount);
    cout<<"Bank Balance"<<myaccount->show_balance("abcd")<<endl;
    cout<<"Mycash Balance"<<mycash->show_balance()<<endl;
}


int main()
{

    Accountn *myaccount = create_account();
    add_money(myaccount);
    deposit_money(myaccount);
    Mycash *mycash = new Mycash();
    add_money_form_bank(mycash, myaccount);




    return 0;

}
