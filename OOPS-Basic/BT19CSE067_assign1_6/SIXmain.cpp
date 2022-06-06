//Md.Abdul Raheem | BT19CSE067 | Problem_6| Assignment_1
#include<iostream>
#include "SIX.h"
#include <string>
 
 using namespace std;
 
 int main()
{
	string fname,sname,type;
	float dep,withdraw,balance;
	long int acc_no;
    int num;
	cout<<"enter no of bank accounts to be open now\n";
	cin>>num;
	class Account a[num];
	for(int i=0;i<num;i++)
	{
		Account();
	    cout<<"enter first name of account holder: "<<endl;
	    cin>>fname;
        cout<<"enter sur name of account holder: "<<endl;
        cin>>sname;
        a[i]=Account(string fname,string sname);
	    cout<<"enter account number: "<<endl;
	    cin>>acc_no;
        a[i].setAccno(acc_no);
    	cout<<"enter type of account: "<<endl;
	    cin>>type;
        a[i].setType(type);
	    cout<<"enter amount to deposit: "<<endl;
	    cin>>dep;
	    balance=a[i].deposit(dep);
	    cout<<"balance is: "<<balance<<endl;
	    cout<<"enter amount to withdraw: "<<endl;
	    cin>>withdraw;
	    balance=a[i].withdraw(withdraw);
	    cout<<"balance is: "<<balance<<endl;
	    a[i].no_accounts();
	    a[i].display_details();
    }
	return 0;
}
