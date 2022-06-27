#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	int value;
	int pass;
	pass=1;
	string password;
	string anyThing;
	cout<<"please enter the password\n";
	cin>>password;
	while(password!="0123")
	{
    pass++;
	if (pass==3)
	cout<<"warning this your last chance Try again be careful sir!\n";
	if (pass<3)
		cout<<"The password is wrong please try again\n";
		if (pass==4)
		{
    cout<<"You seem like a bad guy get out of here and don't come again....!\n but if you know the password maybe you can restart the program and give another try";
	cin>>anyThing;
		return 0;
	}
			cin>>password;
	}
	cout<<"The pass is correct Starting the program"<<"."<<"."<<"."<<"."<<"."<<"."<<"."<<"."<<"."<<"."<<"."<<"."<<"."<<"."<<".\n";
	cout<<"Now, what Do you want me to do ?!( + )or( * )or( / )or( - )?!!       ";
	char equ;
	choose:
	cin>>equ;
	int x,y;
	if (equ=='+')
	{
		int sum;
	    cout<<"-------------------------------------------------------\nYou choose to do sum integer x+y \n please enter first numbers    ";
		cin>>x;
		cout<<"Now,please enter second number    ";
		cin>>y;
		sum=x+y;
		cout<<"The result is---->   ";
		sum=x+y;
		cout<<sum;
	}
	else if(equ=='-')
	{
		int tr7;
		cout<<"-------------------------------------------------------\nYou choose to do suptract integer x-y \n please enter first numbers    ";
		cin>>x;
		cout<<"Now,please enter second number    ";
		cin>>y;
		tr7=x-y;
		cout<<"The result is---->   ";
		cout<<tr7;
	}
	 else if(equ=='/')
	{
		int esma;
		cout<<"-------------------------------------------------------\nYou choose to do Division integer x/y \n please enter first numbers    ";
		cin>>x;
		cout<<"Now,please enter second number    ";
		cin>>y;
		esma=x/y;
		cout<<"The result is---->   ";
		esma=x/y;
		cout<<esma;
	}
	else if(equ=='*')
	{
		int product;
	    cout<<"-------------------------------------------------------\nYou choose to do product integer x-y \n please enter first numbers    ";
		cin>>x;
		cout<<"Now,please enter second number    ";
		cin>>y;
		product=x*y;
		cout<<"The result is---->   ";
		product=x*y;
		cout<<product;
	}
	else if(equ=='^')
	{
		cout<<"-------------------------------------------------------\nYou choose to do product integer x^y \n please enter first numbers    ";
		cin>>x;
		cout<<"Now,please enter second number    ";
		cin>>y;
		value=pow(x,y);
		cout<<"The result is---->   ";
		cout<<value;
	}
	else
	{
	cout<<"wrong choice, Try again\n";
	goto choose;
	}
	cout<<"\nenter any thing to exit";
	cin>>y;
	return 0;
}
