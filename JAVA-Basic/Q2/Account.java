// Md. Abdul Raheem / BT19CSE067 / Problem 2 / Assignment 3

class Account		// Account class
{
    int Account_no;
    float Balance;
    float Available_loan_limit;
    float outstanding_loan_limit;
    float[] amount_paid_monthly;
    int no_of_credit_applications;
    int no__of_times_accepted;
    
    public Account(int Account_no,float Balance,float Available_loan_limit,float outstanding_loan_limit,float[] amount_paid_monthly,int no_of_credit_applications,int no__of_times_accepted)
    {
        this.Account_no = Account_no;
        this.Balance = Balance;
        this.Available_loan_limit = Available_loan_limit;
        this.outstanding_loan_limit = outstanding_loan_limit;
        this.amount_paid_monthly = amount_paid_monthly;
        this.no_of_credit_applications = no_of_credit_applications;
        this.no__of_times_accepted = no__of_times_accepted;
    }

} // Account class ends here
