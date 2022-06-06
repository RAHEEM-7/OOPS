// Md. Abdul Raheem / BT19CSE067 / Problem 1 / Assignment 3


class NonSponsored extends Student	// NonSponsored class
{
    	public NonSponsored(String name,String address,String emailId,String phoneNo,float basic_fee,float other_fee,String status)
    	{
        	super(name,address,emailId,phoneNo,basic_fee,other_fee,status);
	}
	
	public float calculateFee() 		// calculateFee func to calculate total fee for Nonsponsored student.
	{
		float Fee; 
    		Fee = (float)(this.basic_fee * 0.7  +  this.other_fee);
    		return Fee;
	}
	
	public void display()		// print func to print details.
	{
	    	System.out.println("Name:"+ this.name );
    		System.out.println("Address:"+ this.address );
    		System.out.println("EmailId:"+ this.emailId );
    		System.out.println("PhoneNo:"+ this.phoneNo );
    		System.out.println("Fee:"+ calculateFee() );
	}
}  // Nonsponsored class ends here.
