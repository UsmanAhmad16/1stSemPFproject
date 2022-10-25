#include<iostream>
using namespace std;
void Check();
int max(int arr[3][2]);

M8(int a)
{int question_no,b;
 question_no=a;
                    cout<<"----------------------------------------------------"<<endl;
 switch(question_no)
        {
	    case 1:   
			   {
 	                int i,j;
	                for(i=1;i<=5;i++)
             	    {	for(j=1;j<=i;j++)
		            {	cout<<j;}
		            cout<<endl;}
                break;
                }
        case 2:
		       {
            	    int i,j;
              	    for(i=1;i<=5;i++)
                 	{for(j=1;j<=i;j++)
		            {	cout<<"* ";}
		            cout<<endl;}
	                return 0;
                break;
                }
        default:
		       {
			        cout<<"you enter a invalid QUESTION No..!!  PLEASE ENTER AGAIN"<<endl;
                    cin>>b;
                    M8(b);
               }

       }
}


M9(int a)
{ int question_no,b;
  question_no=a;
                    cout<<"----------------------------------------------------"<<endl;
switch(question_no)
       {
        case 1: 
			   {
	                int num[10];
	                int i;
	                int sum=0;
	                float avg;
	                cout<<"Enter ten odd values: ";	
	                for(i=0; i<=9; i++){
	                cin>>num[i];
                    if(num[i]%2==1)
                    sum=sum+num[i];	}
                    avg=sum/10;	
                    cout<<"Sum: "<<sum<<endl;
                    cout<<"Average: "<<avg<<endl;
                break;
				}
        case 2: 
				{
				    int d,m, count=0;
                	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
                	cout<<"Enter Current date ";
                	cin>>d;
                	cout<<"Enter Current month ";
                   	cin>>m;
                	for(int i=0;i<=(m-1);i++)
                 	{	count=count+a[i];}
	                cout<<"The total days till the current date are : "<<count;
	                return 0;
	            break;
                }
        case 3: 
				{
	                int a[10], i;
	                cout<<"Enter 10 numbers "<<endl;
                    for(i=0;i<10;i++)
                    {	cin>>a[i];}
	                int largest_num=a[0];
                    for(i=1;i<10;i++)
                    {	if(largest_num<a[i])
		            largest_num=a[i];}
	                cout<<"Largest number in array is "<<largest_num<<endl;
	                return 0;
	                system("pause");
	            break;
                }
        case 4:
				{
				    int v[5], Candidate[5], i, sum=0;
                    float Percentage[5];	
                    for(i=0;i<5;i++)  	
                    {	cout<<"Candidate= ";
		            cin>>Candidate[i];
		            cout<<"Vote= ";
		            cin>>v[i];
		            sum+=v[i];	}
	                for(i=0;i<5;i++)
	                {	Percentage[i]=(v[i]*100)/sum;
		            cout<<"% of vote= "<<Percentage[i]<<"%"<<endl; }
                    return 0;
                    system("pause");
                break;
				}   
        default: 
				{ 
				    cout<<"you enter a invalid QUESTION No..!!  PLEASE ENTER AGAIN"<<endl;
                    cin>>b;
                    M9(b);
                }
       }
}

M10(int a)
{ int question_no,b;
  question_no=a;
                    cout<<"----------------------------------------------------"<<endl;
switch(question_no)
       {         
	    case 1:
      	        {
                    int n, Count=0;
	                cout<<"Enter a number ";
	                cin>>n;
	                for(int i=2;i<n;i++)
                    {if(n%i==0)
	                Count++;}
	                if(Count==0)
                    {if(n%2==0)
		            cout<<n<<"  is an even prime no.";
	                else cout<<n<<"  is an odd prime no.";}
	                else if(Count!=0)
                    {	if(n%2==0)
		            cout<<n<<" is an even composite no.";
	                else
	                cout<<n<<"  is an odd composite no.";}
				break; 
	            }
	    case 2:
                {  
					int n;
					cin>>n;
                    int table=1;
                    cout<<"Table of "<<n<<" is "<<endl;
                    for(int i=1;i<=10;i++)
	                {table=(n+1)*i;
	                cout<<n+1<<"*"<<i<<"="<<table<<endl;}
	            break;
				}
		case 3:
				{
					int a;
                    cout<<"Enter a num"<<endl;
                    cin>>a;
                    int i,j;
                    for(i=0;i<a;i++)
                    {	for(j=0;j<a;j++)
	                {	cout<<a;}
		            cout<<endl;} 
				break;	
                }
        case 4:
			    {
					int arr[8], temp;
	                cout<<"Enter 8 integers "<<endl;
	                for(int i=0;i<8;i++)
                    {	cin>>arr[i];	}
                    for(int i=0;i<8;i++)
                    {	for(int j=i;j<8;j++)
	                {	if(arr[i]>arr[j])
	 	            {	temp=arr[i];
			        arr[i]=arr[j];
			        arr[j]=temp;	}  }	}
                    cout<<"Entered integers sorted in ascending order "<<endl;
                    for(int i=0;i<8;i++)
                    cout<<arr[i]<<endl;
				break;		
				} 
	
		case 5:
				{
                    float n1,n2;
                    char  op;
	                cout<<"Enter two numbers "<<endl;
                    cin>>n1>>n2;
                    cout<<"Enter an arithematic operator "<<endl;
                    cin>>op;
                    switch(op){
	                case '+':cout<<"Sum= "<<n1+n2;
	                break;
	                case '-':cout<<"Difference= "<<n1-n2;
	                break;
	                case '*':cout<<"Product= "<<n1*n2;
	                break;
		            case '/':cout<<"Division= "<<n1/n2;
		            break;
	                default:cout<<"Invalid Operator";
	                break;	}
	            break;
                }
        default:
                {
                    cout<<"you enter a invalid QUESTION No..!!  PLEASE ENTER AGAIN"<<endl;
                    cin>>b;
                    M10(b);
				}
					   
		  
	 }	  
	
}

M11(int a)
{int question_no,b;
question_no=a;
                    cout<<"----------------------------------------------------"<<endl;
switch(question_no)
      {
        case 1:
      	        {
      	            struct T1{
                    char name[20];
                    int M;
                    int E;
                    int U;	};
      	           	T1 s1;
	                int total;
                 	cout<<"Enter Name of student: ";
                	cin>>s1.name;
                	cout<<"Enter marks of Maths, English and Urdu respectively="<<endl;
                	cin>>s1.M;
                 	cin>>s1.E;
                	cin>>s1.U;
	             	total=s1.M+s1.E+s1.U;	
	                cout<<"Total Marks of a student is= "<<total;	            		
				break;
				}
			case 2:
				{
					struct abc{
	                string name;
	                int age;
                	double Phone;
                	string Fname;};			  			  		
			    	abc s1;
	                int i;	
                	for(i=0;i<=5;i++)
	                {	cout<<"Name: ";
	             	cin>>s1.name;
		            cout<<"Age: ";
		            cin>>s1.age;
		            cout<<"Phone: ";
		            cin>>s1.Phone;
		            cout<<"Father Name: ";
		            cin>>s1.Fname;
		            cout<<endl;	}
				break;
				}
			default:
			    {   
				    cout<<"you enter a invalid QUESTION No..!!  PLEASE ENTER AGAIN"<<endl;
                    cin>>b;
                    M11(b);
			    	
				}	
	   }
}



