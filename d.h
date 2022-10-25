#include<iostream>
using namespace std;

General()
           {   
                int  manual_no,question_no,z;
                cout<<"ENTER THE MANUAL NO...."<<endl;
                cin>>manual_no;
                system("CLS");
switch(manual_no)
      {
    case 2:
	     	{
	          	cout<<"Q.1   Write a C++ program to print your name, your date of birth, your email address, your father name, your mobile number,"<<endl<<"       your city your department and any other information you want to display. All these information should be in separate lines."<<endl;
		        cout<<"Q.2   Write a computer program to add,Subtract and multiply two numbers and display their results on the screen ?"<<endl;
                cout<<"Q.3   Write a C++ program to convert the Celsius temperature to Fahrenheit. ?"<<endl;
                cout<<"Q.4   Write a program to calculate the radius of the circle ?"<<endl;
                cout<<"Q.5   Write a program in C++ by taking the amount in rupees and convert it into dollars and print the result on the screen ?"<<endl;
                cout<<"----------------------------------------------------"<<endl;
				cout<<"Enter question number: ";
                cin>>question_no;
                M2(question_no);
            break;
            }
 	case 3:
         	{
		        cout<<"Q.1  Write a program in C++ to get the age of a person. The program should calculate and display the age of the person in months?"<<endl;
	     	    cout<<"Q.2  Write a program in C++ to get the marks of the students in three subjects ,Programing fundamental ,digital logic desing, and circut analysis.calculate the total and avarge marks.Each subject has a maximum 100 marks ?"<<endl;
	     	    cout<<"Q.3  Write a program in C++ to compute and print the volume of a cylinder where 'r'is the radius and 'h' is the hight and these values are provided by the user at run time ? "<<endl;
	   	        cout<<"Q.4  Write a program to read the temprature in Fahrenheit.Convert the temprature to Celcius degree?"<<endl;
	   	        cout<<"----------------------------------------------------"<<endl;
				cout<<"Enter the question number : ";
	   	        cin>>question_no;
	   	        M3(question_no);
	   	    break;
            }
    case 4:
	        {
		        cout<<"Q.1    Write a program to input a number from keyboard and then print the message “It is an odd number” if it is an odd number else print “it is an even number ?"<<endl;
                cout<<"Q.2    Write a program to input two integer and then find out whether both numbers are divisible by 2 or not. If they are divisible print the message 'numbers are divisible' else print 'numbers are not divisible' ?"<<endl;
                cout<<"Q.3    Write a program to find out the grade of the student based on the marks obtained in three subjects. The grade is calculated as:"<<endl;
			    cout<<"       1. If the average is greater than 80 grade is ‘A’."<<endl;
			    cout<<"       2. If average is less than 80 and greater than 50 grade is 'B"<<endl;
		    	cout<<"       3. If average is less than 50 and greater than 33 then the grade is ‘C’"<<endl;
                cout<<"       4. If average is less than 33 grade is ‘F’"<<endl;
                cout<<"Q.4    Write a program in C++ to input 4 integers. Find out the largest value and then print it on the screen by using nested f structure "<<endl;
                cout<<"Q.5    Write a program that prompts the user to input a number. The program should then output the number and a message saying whether the number is positive, negative, or zero"<<endl;
                cout<<"----------------------------------------------------"<<endl;
				cout<<"Enter the question number : ";
	   	        cin>>question_no;
	   	        M4(question_no);
            break;
			}
	case 5:
       	    {   
		        cout<<"Q.1   Make a simple calculator which can perform addition, subtraction,  multiplication and division operations using switch statement ?"<<endl;
                cout<<"      Note:-   In the above questions, the character constants has to be used in  Cases. The operations will be ‘+’, ‘-’, ‘*’ and ‘/’."<<endl;
                cout<<"Q.2   Write a program to find out the largest number from the three given  numbers ? "<<endl;
                cout<<"Q.3   Write a program to print first ten whole numbers. Use 'goto' statements ?"<<endl;
                cout<<"----------------------------------------------------"<<endl;
				cout<<"ENTER THE QUESTION NO : ";
                cin>>question_no;
                M5(question_no);
            break;     
	     	}
	case 6:
	        {
		        cout<<"Q.1    Write a program to print the multiplication table of a  number entered from the keyboard ?"<<endl;
			    cout<<"Q.2    Write a program to calculate whether the number entered is  prime or not. (using for loop)"<<endl;
                cout<<"Q.3    Write a program that inputs a no. and check whether it’s a perfect no. or not. i.e a perfect no. is a no. that is numerically equal to the sum of its divisors. For example,'6' 1+2+3=6."<<endl;
			    cout<<"Q.4    Write a program to print natural numbers 1 to 10 in descending order. (using while loop)"<<endl;
			    cout<<"----------------------------------------------------"<<endl;
				cout<<"ENTER THE QUESTION NO : ";
			    cin>>question_no;
			    M6(question_no);
			break;
	     	}    
    case 7:
    	    {   
		        cout<<"Q.1    Write a program that inputs a sentence from the user and  counts the no. of words and characters in the sentence using  while loop only ?"<<endl;
		        cout<<"Q.2    Write a program that inputs a no. and check whether it’s a  palindrome or not. i.e 4994 using do while ?"<<endl;
			    cout<<"Q.3    Write a program to find the sum of the following series: 1/3+3/5+5/7+………97/99 using do while only ?"<<endl;
			    cout<<"----------------------------------------------------"<<endl;
				cout<<"ENTER THE QUESTION NO : "; 
			    cin>>question_no;
			    M7(question_no);
			break;
	        }
	 case 8:
	        {
	    	    cout<<"Q.1     Write a program to print the output as shown below ?"<<endl;
                cout<<"1"<<endl;
                cout<<"1 2 "<<endl;
                cout<<"1 2 3 "<<endl;
                cout<<"1 2 3 4 "<<endl;
                cout<<"1 2 3 4 5 "<<endl;
	    	    cout<<"Q.2     Write a program to print the output as shown below ?"<<endl; 
	    	    cout<<"*"<<endl;
                cout<<"* * "<<endl;
                cout<<"* * * "<<endl;
                cout<<"* * * * "<<endl;
                cout<<"* * * * *"<<endl;
				cout<<"----------------------------------------------------"<<endl;
                cout<<"ENTER THE QUESTION NO : "; 
			    cin>>question_no;
			    M8(question_no);
			break;
		   }   
	case 9:
	      {   
	            cout<<"Q.1    Write a program that inputs ten odd values from the user. Calculate the sum and  average of the elements and then print the sum and average on the screen ?"<<endl;
	            cout<<"Q.2    Write a program that inputs current day and month from the user.It then calculates and displays the total number of days in current year till the entered date using        arrays ?"<<endl;
	    	    cout<<"Q.3    Write a program that inputs 10 no.s from the user in array and print the maximum  value in array ? "<<endl;
	    	    cout<<"Q.4    Write a program that allows the user to enter the number of votes received by 5  candidate. The program should then output candidate’s number, the number of votes received, and the percentage of the total votes received by the candidate. A "<<endl;
			    cout<<"       sample output is: "<<endl;
                cout<<"       Candidate Votes           Received            % of Total Votes"<<endl; 
                cout<<"              1                   5000                     25.91"<<endl;
			    cout<<"----------------------------------------------------"<<endl;
				cout<<"ENTER THE QUESTION NO : "; 
			    cin>>question_no;
			    M9(question_no);
			break;
	        }	     
    case 10:
    	    {  
		        cout<<"Q.1    Write a program to check whether an entered no. is prime no, even no. or odd no. using function. (it must cover all possibilities)   Hint : 2 is a prime even no ?"<<endl;
    		    cout<<"Q.2    Write a program that inputs a no. in main function and passes the no. to a function. Print the table of the number coming after that entered no?"<<endl;
    		    cout<<"Q.3    2.	Write a program inputs a no. and a character in main function and passes them to a function. It then displays a square of that entered character against the no. of rows user entered?"<<endl;
                cout<<"       Hint: if user enter 5 and &, it displays output as follows:"<<endl;
                cout<<"                             &&&&&    "<<endl;
                cout<<"                             &&&&&    "<<endl;
                cout<<"                             &&&&&    "<<endl;
                cout<<"                             &&&&&    "<<endl;
			    cout<<"                             &&&&&    "<<endl;
                cout<<"Q.4    Write a program to sort an array in ascending order using function?"<<endl;
	            cout<<"Q.5    Write a program for calculator that input two no.s and one arithmetic operator in main function and pass them to a function. The function applies arithmetic operation on two numbers on the basis of the operator entered by the user using switch statement ?"<<endl;
	            cout<<"----------------------------------------------------"<<endl;
				cout<<"ENTER THE QUESTION NO : "; 
			    cin>>question_no;
			    M10(question_no);
			break;
	     	}
    case 11:
        	{
    	    	cout<<"Q.1    Write a program to define a structure with 4 members. The first member be student name and the other member be student marks obtained in subjects. Input values from the user. Add the marks of the subject and calculate the total marks and then print these numbers and total marks of the student ?"<<endl;
		        cout<<"Q.2    Write a program to input data for 6 students and each student has following data to be stored ?"<<endl; 
                cout<<"       1. Name of Student"<<endl;
                cout<<"       2. Age of Student"<<endl; 
                cout<<"       3. Phone No"<<endl;
                cout<<"       4. Father Name"<<endl; 
                cout<<"       Also display the input data ?"<<endl;
	            cout<<"----------------------------------------------------"<<endl;
				cout<<"ENTER THE QUESTION NO "<<endl; 
			    cin>>question_no;
			    M11(question_no);
			break;
	        }
	   default:
	   	    { 
	   	         cout<<"you enter a invalid MANUAL No..!!  PLEASE ENTER AGAIN"<<endl;
	   	         cout<<"*hint : 'range 2 to 11' : ";
	   	         General();
	   		
		  }
		  
	}
	
}
	                



