//Md.Abdul Raheem | BT19CSE067 | Problem_6| Assignment_1
#include<string>
#include<iostream>
#include "SIX.h"

using namespace std;
Account::Account()
{
    fname="unknown";
    sname="unknown";
    balance=0;
    acc_no=0;
    type="unknown";
}
Account::Account(string fn,string sn)
{
    fname=fn;
    sname=sn;
}
void Account::setbalance(float bal)
{
    balance=bal;
}
float Account::getbalance()
{
    return balance;
}
void Account::setAccno(long int Acc_No)
{
    acc_no=Acc_No;
}
long int Account::getAccno()
{
    return acc_no;
}
void Account::setType(string typ)
{
    type=typ;
}
string Account::getType()
{
    return type;
}
float Account::deposit(float x)
{
    balance=balance+x;
    return balance;
}
float Account::withdraw(float y)
{
    if(balance >=y)
    {
        balance=balance-y;
    } 
    else
    {
        cout << "balance is not sufficient" << endl;
    }
    return balance;
}
void Account::display()
{
    cout << "Name" << fname + " " + sname << endl;
    cout << "Balance" << balance << endl;
}
int Account::getcount()
{
    count=count+1;
    return count;
}
int Account::count=0;