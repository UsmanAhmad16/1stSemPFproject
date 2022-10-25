#include<iostream>
#include<fstream>
#include <unistd.h> 
#include"a.h"
#include"b.h"
#include"c.h"
#include"d.h"
#include"e.h"
using namespace std;
int main()
	   { 
	    ifstream in("tital name.txt");
        char str[500];
        while(in) {
        in.getline(str, 500); 
        if(in){
    	cout << str << endl;}
        }
        in.close();
        sleep(2);
        cout<<"\nStarting the program please wait....."<<endl;
        sleep(5);
        cout<<"\nloading up files....."<<endl;
        sleep(3); 
        system ("CLS"); 

              	General();
              	cout<<endl;
              	cout<<"----------------------------------------------------"<<endl;
                cout<<endl;
                G1();
                cout<<endl;
            return 0;
		
	}
