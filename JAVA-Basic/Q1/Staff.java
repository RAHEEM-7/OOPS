// Md. Abdul Raheem / BT19CSE067 / Problem 1 / Assignment 3


class Staff extends Employee	// Staff class
{
	public Staff(String name,String address,String emailId,String phoneNo,float salary,int working_hours,int level)
	{
        	super(name,address,emailId,phoneNo,salary,working_hours,level);
    	}
    	 
    	public float calculateIncrement()		// calculateIncrement function to calculate Increment in salary of Staff.
    	{
        	float Fee;
        	Fee = (float)(this.salary * 1.10) ;
        	return Fee;
    	}
    	
    	public int calculatePromotedLevel()	// calculatePromotedLevel function to know if the level is promoted or not and the final level at present.
    	{
        	if(this.working_hours>500)
        	{
            		this.level = this.level+1;
        	}
        	return this.level;
    	}
    	
    	public void display()	//// print function to print details.
    	{
        	System.out.println("Name:"+ this.name );
        	System.out.println("Address:"+ this.address );
        	System.out.println("EmailId:"+ this.emailId );
        	System.out.println("PhoneNo:"+ this.phoneNo );
        	System.out.println("Increment:"+ calculateIncrement());
        	System.out.println("Level:"+calculatePromotedLevel());
    	}
}  // Staff class ends here
