// Md. Abdul Raheem / BT19CSE067 / Problem 1 / Assignment 3


abstract class Student extends Person	// Abstract Student class 
{
	float basic_fee;
	float other_fee;
	String status;
	public Student(String name,String address,String emailId,String phoneNo,float basic_fee,float other_fee,String status)
	{
    		super(name,address,emailId,phoneNo);
    		this.basic_fee = basic_fee;
    		this.other_fee = other_fee;
    		this.status = status;
	}
	
	public abstract float calculateFee();	// Abstract function

} // Student class ends here 
