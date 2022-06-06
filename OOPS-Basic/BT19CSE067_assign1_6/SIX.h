//Md.Abdul Raheem | BT19CSE067 | Problem_6| Assignment_1
#ifndef _SIX_H
#define _SIX_H
#include<string>

using namespace std;
class Account
{
    string fname;
    string sname;
    long int acc_no;
    string type;
    float balance;
    static int count;
    public:
            Account();
            Account(string fname,string sname);
            void setbalance(float balance);
            float getbalance();
            void setAccno(long int acc_no);
            long int getAccno();
            void setType(string type);
            string getType();
            float deposit(float amnt);
            float withdraw(float amt);
            int getcount();
            void display();
};

#endif