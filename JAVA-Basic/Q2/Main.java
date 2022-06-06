// Md. Abdul Raheem / BT19CSE067 / Problem 2 / Assignment 3

import java.util.*;
public class Main	// Main class 
{
    public static void main(String args[])
    {
        float[] a = {20000,20000,20000,0,20000};
        CIBIL c = new CIBIL(1234,50000,500000,400000,a,3,2);
        System.out.println("Cibil :"+ c.calculateCIBIL());
        System.out.println(c.isEligible());
        
        int acc_no;
        float Balance,Available_loan_limit,outstanding_loan_limit;
        float[] amount_paid_monthly;
        int i,size,no_of_credit_applications,no__of_times_accepted;
  	Scanner inp = new Scanner(System.in);
  	
  	System.out.print("Enter the Account Number : ");
  	acc_no = inp.nextInt();
  	System.out.print("Enter the Balance : ");
  	Balance = inp.nextFloat();
  	System.out.print("Enter the Available loan limit : ");
  	Available_loan_limit = inp.nextFloat();
  	System.out.print("Enter the Outstanding loan limit : ");
  	outstanding_loan_limit = inp.nextFloat();
  	System.out.print("Enter the number of months the amount paid minimum there should be 5 months : "); 
  	size = inp.nextInt();
  	amount_paid_monthly = new float[size];
  	for(i=0; i<size; i++)
  	{
		System.out.print("Enter amount paid monthly : ");
		amount_paid_monthly[i] = inp.nextFloat(); 	
    	}
    	System.out.print("Enter the number of credit applications : ");
    	no_of_credit_applications = inp.nextInt();
    	System.out.print("Enter the number of times accepted : ");
    	no__of_times_accepted = inp.nextInt();
    	
    	CIBIL cibil = new CIBIL(acc_no,Balance,Available_loan_limit,outstanding_loan_limit,amount_paid_monthly,no_of_credit_applications,no__of_times_accepted);
    	System.out.println("\n Details : ");
    	System.out.println("Cibil :"+ cibil.calculateCIBIL());
    	System.out.println(cibil.isEligible());
    } 
}// Main class ends here
