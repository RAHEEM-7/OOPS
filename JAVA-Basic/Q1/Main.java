// Md. Abdul Raheem / BT19CSE067 / Problem 1 / Assignment 3

import java.util.*;
public class Main	// Main class 
{
	public static void main(String args[]) 
	{
        	Sponsored stu1 = new Sponsored("Abdul","Gudivada","abdul@gmail.com","9949097994",10000,5000,"Sophomore");
        	stu1.display();
        	System.out.println();
        	NonSponsored stu2 = new NonSponsored("Raheem","Vijayawada","raheem@gmail.com","9849391876",11000,6000,"Senior");
        	stu2.display();
       	System.out.println();
        	Faculty fac1 = new Faculty("Rohit","Kolkatta","rohit@gmail.com","9988776655",12000,1200,3);
        	fac1.display();
        	System.out.println();
        	Staff s = new Staff("ravi","Hyderabad","ravi@gmail.com","9999999999",9000,600,5);
        	s.display();
        	
        	Scanner inp = new Scanner(System.in);
        	String name,address,emailId,status,phoneNo;
        	float basic_fee,other_fee;
        	System.out.print("Enter the name of student : ");
        	name = inp.next();
        	System.out.print("Enter the address of student : ");
        	address = inp.next();
        	System.out.print("Enter the phone number of student : ");
        	phoneNo = inp.next();
        	System.out.print("Enter the email id of student : ");
      		emailId = inp.next();
        	System.out.print("Enter the basic fee : ");
        	basic_fee = inp.nextFloat();
        	System.out.print("Enter the other fee : ");
      	  	other_fee = inp.nextFloat();
        	System.out.print("Enter the status : ");
        	status = inp.next();
        	System.out.println();
        	Sponsored spons_stu = new Sponsored(name, address, emailId, phoneNo, basic_fee, other_fee, status);
        	spons_stu.display();
        	System.out.println("\n");
        	
        	System.out.print("Enter the name of student : ");
        	name = inp.next();
        	System.out.print("Enter the address of student : ");
        	address = inp.next();
        	System.out.print("Enter the phone number of student : ");
        	phoneNo = inp.next();
        	System.out.print("Enter the email id of student : ");
      		emailId = inp.next();
        	System.out.print("Enter the basic fee : ");
        	basic_fee = inp.nextFloat();
        	System.out.print("Enter the other fee : ");
      	  	other_fee = inp.nextFloat();
        	System.out.print("Enter the status : ");
        	status = inp.next();
        	System.out.println();
        	NonSponsored Nonspons_stu = new NonSponsored(name, address, emailId, phoneNo, basic_fee, other_fee, status);
        	Nonspons_stu.display();
        	System.out.println("\n");
        	
        	int working_hours,level;
        	float salary;
        	System.out.print("Enter the name of the Employee : ");
        	name = inp.next();
        	System.out.print("Enter the address of the Employee : ");
        	address = inp.next();
        	System.out.print("Enter the phone number of the Employee : ");
        	phoneNo = inp.next();
        	System.out.print("Enter the email id of the Employee : ");
      		emailId = inp.next();
        	System.out.print("Enter the salary of the Employee : ");
        	salary = inp.nextFloat();
        	System.out.print("Enter the working hours of the Employee : ");
      	  	working_hours = inp.nextInt();
        	System.out.print("Enter the level of the Employee  : ");
        	level = inp.nextInt();
        	System.out.println();
        	Faculty fac = new Faculty(name, address, emailId, phoneNo, salary, working_hours, level);
        	fac.display();
        	System.out.println("\n");
        	
        	System.out.print("Enter the name of the Employee : ");
        	name = inp.next();
        	System.out.print("Enter the address of the Employee : ");
        	address = inp.next();
        	System.out.print("Enter the phone number of the Employee : ");
        	phoneNo = inp.next();
        	System.out.print("Enter the email id of the Employee : ");
      		emailId = inp.next();
        	System.out.print("Enter the salary of the Employee : ");
        	salary = inp.nextFloat();
        	System.out.print("Enter the working hours of the Employee : ");
      	  	working_hours = inp.nextInt();
        	System.out.print("Enter the level of the Employee  : ");
        	level = inp.nextInt();
        	System.out.println();
        	Staff staf = new Staff(name, address, emailId, phoneNo, salary, working_hours, level);
        	staf.display();
        	System.out.println("\n");
        	
    	}
} // Main class ends here.
