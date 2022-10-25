#include<iostream>
using namespace std;

int M2(int a)
{ int question_no,b;
  question_no=a;
                   cout<<"----------------------------------------------------"<<endl;
switch(question_no)
        {  
		case 1:
               {
                    cout<<"My name is Usman Ahmad .\n";
                    cout<<"Group Members : Usman Ahmad ....Hassan Raza....Mahnoor Tariq....Samia Haroon"<<endl;
                    cout<<"Department : Computer Science\n";
                    cout<<"usmanahmad1696@gmail.com \n";
                    cout<<"date of birth=16-05-2001\n";
                    cout<<"My father name is Zafar Ali \n";
                    cout<<"Mobile number:03425134657\n";
                    cout<<"I am from HAFIZABAD \n";
                    cout<<"Adess : Mohala Madina Colony street no 3 Madharyanwala road Hafizabad \n";
                break;
		       }
        case 2:
            	{
                	int a,b;
                	cout<<"enter first no \n";
                	cin>>a;
                 	cout<<"enter second no \n";
                	cin>>b;
                	cout<<"\n Sum="<<a+b;
                 	cout<<"\n Substraction="<<a-b;
                    cout<<"\n Product="<<a*b;
                break;
				}
        case 3:
        	    {
                    float c,f;
                    cout<<"enter ceclius tempreture \n";
                    cin>>c;
                    f=(c*9/5) + 32;
                    cout<<"converting in farhenheit= \n"<<f;     
                break;
				}
        case 4:
            	{
                    float c,pi=(22/7),r;
                    cout<<"Cirumference= \n";
                    cin>>c;
                    r=(c/2*pi);
                    cout<<"Radius = \n"<<r;
                break;
				}

        case 5:
            	{  
                    float a,b;
                    cout<<"enter amout in rupees \n";
                    cin>>a;
                    b=a/179.08;
                    cout<<"In Dollar= \n"<<b;
                break;
				}
        default:
		        {
		            cout<<"you enter a invalid QUESTION No...!!.PLEASE TRY AGAIN"<<endl;
		            cin>>b;
		            M2(b);
			    break;
	         	}
	          	
        }
	  
}


M3(int a)
{
 int question_no,b;
 question_no=a;
                        cout<<"----------------------------------------------------"<<endl;
switch(question_no)
	   	    {    
	   	        case 1:
	   	          	{
					    float a,b;
						cout<<"enter age \n";
					    cin>>a;
					    b=12*a;
						cout<<"Age in month= \n"<<b;
					break;
                    }
                case 2:
                	{
                        float a,b,c;
                        cout<<"Programming fundamental=";
                        cin>>a;
                        cout<<"\n Digital Logic Design=";
                        cin>>b;
                        cout<<"\n Circuit analysis=";
                        cin>>c;
                        cout<<"\n Total Marks="<<a+b+c;
                        cout<<"\n Average Marks="<<(a+b+c)/3;
                    break;
                    }
                case 3:
                	{
                        float h,r,pi=(22/7),v;
                        cout<<"height=";
                        cin>>h;
                        cout<<"\nRadius=";
                    	cin>>r;
	                    v=pi*h*(r*r);
                    	cout<<"\nVolume="<<v;
					break;  
                    }
                case 4:
                	{
                        float f,c;
                        cout<<"Farhenheit tempreture=";
                        cin>>f;
                        c=(f-32)*5/9;
                        cout<<"\nIn Celcius="<<c;
                    break;
                    }
                default:
		            {
		                cout<<"you enter a invalid QUESTION No..!!  PLEASE ENTER AGAIN"<<endl;
			            cin>>b;
			            M3(b);
	             
				 	}
				 	
break;

			   }
		}
		
M4(int a)
{int question_no,b;
 question_no=a;
                        cout<<"----------------------------------------------------"<<endl;
 switch (question_no)
   { 
                case 1:
                   	{
                       int a;
                       cout<<"enter any number:";
				       cin>>a;
					   if(a%2==0){
				   	   cout<<"its even number"; }
                  	   else cout<<"its odd number";
                    break;
                    } 
                case 2:
                 	{
                        int a,b;
                        cout<<"enter any two numbers:\n";
                        cin>>a>>b;
                        if(a%2==0 && b%2==0){
                    	cout<<"numbers are divisible";}
					    else cout<<"numbers are not divisible";
                    break ;
                    }
                case 3:
                 	{               
                        float a,b,c,y,z;
                        cout<<"Obtained Marks in 3 subjects=";
                        cin>>a>>y>>z;  
                        cout<<"\nTotal Marks=";
                        cin>>b;
                        c=((a+y+z)/b)*100;
                        cout<<"\nPercentage="<<c;   
                        if(c>=80){
                     	cout<<"\ngrade is 'A'"; }
	                    if(c<80 && c>=50){
	                	cout<<"\ngrade is 'B'"; }     
	                    if(c<50 && c>=33){
	                 	cout<<"\ngrade is 'C'";}
	                    if(c<33){
	                 	cout<<"\ngrade is 'F'"; }
	                break; 
                    } 
                case 4:
                    {
                        int a,b,c,d;
                        cout<<"enter four digits:\n";
                        cin>>a>>b>>c>>d;
                        if(a>b && a>c &&  a>d){
                      	cout<<"Greatest no is "<<a;	 }
	                    if(b>a && b>c && b>d ){
	                 	cout<<"Greatest no is "<<b;	 }
	                    if(c>a && a>b && b>d){
	                	cout<<"Greatest no is "<<c; }
	                    if(d>a && d>b && d>c){
	                  	cout<<"Greatest no is "<<d; }
                    break;
                    }
                case 5:
                    {
                        int a;
                        cout<<"enter any number:";
                        cin>>a;
                        if(a>0){
                     	cout<<"\n its positive number"; }
	                    if(a<0){
	                 	cout<<"\n its negative number"; }
	                    if(a==0){
	                 	cout<<"\n its zero";}
                    break;
                    }
                default:
                    {   cout<<"you enter a invalid QUESTION No..!!  PLEASE ENTER AGAIN"<<endl;
			         cin>>b;
			          M4(b);
					}
       
	   }
	   
}


