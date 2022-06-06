// Md. Abdul Raheem / BT19CSE067 / Problem 1 / Assignment 3


class Sponsored extends Student	// Sponsored class
{
	public Sponsored(String name,String address,String emailId,String phoneNo,float basic_fee,float other_fee,String status)
    	{
        	super(name,address,emailId,phoneNo,basic_fee,other_fee,status);
    	}
    	
	public float calculateFee()	// calculateFee func to calculate total fee for sponsored student.
	{
		int s = 1;
		if(this.status.equals("Freshman"))
		{
			s = 1;
		}
		else if(this.status.equals("Sophomore"))
		{
			s = 2;
		}
		else if(this.status.equals("Junior"))
		{
			s = 3;
		}
		else if(this.status.equals("Senior"))
		{
			s = 4;
		}
		
    		float Fee; 
    		Fee = this.basic_fee + s * this.other_fee;
    		return Fee;
	}
	
	public void display()	// print function to print details.
	{
    		System.out.println("Name:"+ this.name );
    		System.out.println("Address:"+ this.address );
    		System.out.println("EmailId:"+ this.emailId );
    		System.out.println("PhoneNo:"+ this.phoneNo );
    		System.out.println("Fee:"+ calculateFee() );
	}
}  // sponsored class ends here.
