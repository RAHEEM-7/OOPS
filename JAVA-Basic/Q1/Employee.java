// Md. Abdul Raheem / BT19CSE067 / Problem 1 / Assignment 3


abstract class Employee extends Person	// Abstarct Employee class
{
	float salary;
	int working_hours;
	int level;
	public Employee(String name,String address,String emailId,String phoneNo,float salary,int working_hours,int level)
	{
    		super(name,address,emailId,phoneNo);
    
    		this.salary = salary;
    		this.working_hours = working_hours;
    		this.level = level;
	}

	public abstract float calculateIncrement();	// Abstract functions.
	public abstract int calculatePromotedLevel(); // Abstract functions.
} //Employee class ends here.
