// Md. Abdul Raheem / BT19CSE067 / Problem 2 / Assignment 3


class CIBIL extends Account 	// CIBIL class
{
    public CIBIL(int Account_no,float Balance,float Available_loan_limit,float outstanding_loan_limit,float[] amount_paid_monthly,int no_of_credit_applications,int no__of_times_accepted)
    {
        super(Account_no,Balance,Available_loan_limit,outstanding_loan_limit,amount_paid_monthly,no_of_credit_applications,no__of_times_accepted);
    }
    
    public float calculateCIBIL()		// calculateCIBIL function to calculate CIBIL score
    {
        int k = 0;
        for(int i = 0;i<5;i++)
        {
            if(this.amount_paid_monthly[i]!=0)
            {
                k = k+1;
            }
        }
        
        float credit_history = (float)(0.4 * 1000 * k/5);
        float credit_utilization =(float) (0.35 * 1000 * (this.outstanding_loan_limit)/(this.Available_loan_limit));
        float credit_applications =(float) (0.25 * 1000*(this.no__of_times_accepted)/(this.no_of_credit_applications));
        
        float CIBIL = credit_history + credit_utilization + credit_applications;
        
        return CIBIL;
    }
    
    public boolean isEligible()	// isEligible function to know if the CIBIL score is above 600 or not.
    {
        if(calculateCIBIL() >= 600)
        {
            return true;
        }
        else
        {
            return false;

        }

    }
} // CIBIL class ends here
