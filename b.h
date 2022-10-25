#include<iostream>
using  namespace std;

M5(int a)
{ int question_no,b;
  question_no=a;
                    cout<<"----------------------------------------------------"<<endl;
switch(question_no)
        {
		case 1:
               {
               	    char op;
               	    float n1,n2,sum,sub,mul,div;
               	    cout<<"enter an operator"<<endl;
                	cin>>op;
                 	cout<<"enter two numbers"<<endl;
               	    cin>>n1>>n2;
                    switch(op){
                    case'+':
                	sum=n1+n2;
                	cout<<n1<<"+"<<n2<<"="<<sum<<endl;
                	break;
                    case '-':
                	sub=n1-n2;
                	cout<<n1<<"-"<<n2<<"="<<sub<<endl;
                	break;
                    case '*':
                	mul=n1*n2;
                	cout<<n1<<"*"<<n2<<"="<<mul<<endl;
                	break;
                    case'/':
                	div=n1/n2;
                	cout<<n1<<"/"<<n2<<"="<<div<<endl;
                	break;
                    default:
                	cout<<"Invalid intput"<<endl;	}
				   
                break;
		        }
        case 2:
        	    {
                    int a,b,c;
                	cout<<"enter first no \n";
                	cin>>a;
                 	cout<<"enter second no \n";
                	cin>>b;
                	cout<<"enter third no\n";
                	cin>>c;
                	if(a>b && a>c)
                	{cout<<"Largest no ="<<a;
					}
					if(b>a && b>c)
					{cout<<"Largest no ="<<b;
					}
					if(c>a&& c>b)
					{cout<<"Largest no="<<c;
					}
                break;
			    }
        case 3:
               {
                    int c=0,n;
                    start:
                    cout<<c<<endl;
                    c++;
                    if (c<=10)
                    goto start;
                    return 0;   
                break;
		    	}
        default:
		        {
		            cout<<"you enter a invalid QUESTION No...!!.PLEASE TRY AGAIN"<<endl;
		            cin>>b;
		            M5(b);
			    break;
	            }
	          	
        }
	  
}


M6(int a)
{ int question_no,b;
  question_no=a;
                    cout<<"----------------------------------------------------"<<endl;
switch(question_no)
        {
		case 1:
               {
				    int a,b;
	                cout<<"Enter a number for Table "<<endl;
	                cin>>a;
	                for(b=1;b<=20;b++)
	                cout<<a<<"*"<<b<<"="<<a*b<<endl;
	            break;
		    	}	      
        case 2:
               {
                	int a,n,count=0;
	                cout<<"Enter a number ";
	                cin>>n;
	                for(a=2;a<=n;a++){
	             	if(n%a==0)
	             	count++;}
	                if(count==1)
                   	{	cout<<"Entered no. is a prime no."<<endl;}
	                else
	                cout<<"entered no. is a composite no. "<<endl;

                	
                break;
				}
        
        case 3:
        	    {
                   int n,i,sum;
                   sum=0;
	               cout<<"Enter a Number to be checked ";
               	   cin>>n;
	               for(i=1;i<n;i++)
	               {	if(n%i==0)
		           {sum=sum+i;
			       cout<<i<<"+";}}
	               cout<<"\b="<<sum<<endl;
                   if(sum==n){
	               cout<<"the no. is a perfect no."<<endl;}
	               else
                   cout<<"The no. is not a perfect no."<<endl;
                break;
				}
			case 4:
				{
					int i;
	                i=10;
                	cout<<"Natural no. from 1 to 10 in descending order"<<endl;
                	while(i>=1)
                 	{	cout<<i<<endl;
	                	i--; }
	            break;
				}
      
        default:
		        {
		            cout<<"you enter a invalid QUESTION No...!!.PLEASE TRY AGAIN"<<endl;
		            cin>>b;
		            M6(b);
	         	}
	          	
        }
	  
}

        

M7(int a)
{ int question_no,b;
  question_no=a;
                    cout<<"----------------------------------------------------"<<endl;
switch(question_no)
        {
		case 1:
			    {
	                int word=1,characters=0;
	                char inpt;
	                cout<<"Enter a desired sentence "<<endl;
	                cin>>inpt;
	                while(inpt!='\n')
	                inpt=getchar();
		            if(inpt==' ')
		            word++;
		            else
		            characters++; 
	                cout<<endl;
	                cout<<"Words = "<<word<<endl<<"letters = "<<characters<<endl;
				break;
				}
        case 2:
		        { 
		            int n, num, digit, rev;
	                cout<<"Enter a +ve number ";
                 	cin>>num;
                	n=num;
                 	do
                	{digit=num%10;
		            rev=(rev*10)+digit;
		            num=num/10;}
	                while(num!=0);
	                cout<<"the reverse of number is "<<rev<<endl;
                	if(rev==n)	{
	            	cout<<"the number is a polindrome";}
	                else
                  	cout<<"the number is not a polindrome";
				break;	  
			    }
            case 3:
	            {
	               	float num1=1, num2=3, sum=0;
	                do
	                {sum=sum+(num1/num2);
		            num1+=2;
		            num2+=2;}
	                while(num1<=97 && num2<=99);
	                cout<<" the sum of series is "<<sum; 
				break;       	
                }
	        default:
	        	{
				    cout<<"you enter a invalid QUESTION No..!!  PLEASE ENTER AGAIN"<<endl;
			        cin>>b; 
			        M7(b);
	            }
       }
}


