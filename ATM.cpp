#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
class sbi {
	int total=10000;
	int pin=1234;
	public:
	int temp;
	void withdraw ()
{
	while (true)
	{
	cout<<"\nenter the pin = ";
	cin>>temp;
	if (temp==pin)
	{
	cout<<"enter the your amount = ";
	cin>>temp;
	if (temp > 0 && temp <= total )
	{
	total-=temp;
	cout<<"withdraw = "<<temp<<endl;
	cout<<"current amount = "<<total;
	break;	
}
	else
		{
			cout<<"invalid amount";
		}
	}
	else
	{
	cout<<"wrong try again";
	}	
	}
}
	void check_blance ()
	{
		cout<<"your balance = "<<total;
	}
	void change_pin()
	{
		cout<<"enter your old pin = ";
		cin>>temp;
		
		if (temp==pin)
		{
			cout<<"enter your new pin = ";
			cin>>pin;
			cout<<"\npin changed sucessfully";
		}
		else
		{
			cout<<"wrong pin & try again"<<endl;
		}	
		
	}
	void add_money()
	{
		cout<<"enter the money you add now = ";
		cin>>temp;
		total+=temp;
		cout<<"payment added = "<<temp; 
		cout<<"\ntotal amount = "<<total; 
	}
	void user_info()
	{
		
		while(true)
		{
			cout<<"enter the pin = ";
			cin>>temp;
		
		if (temp==pin){
			cout<<"\nuser name is = BHAVESH KHEDKAR "<<endl<<"mobile number = 8329006552 "<<endl<<"Account = saving "<<endl;
			return ;
		}
		else
		{
			cout<<"try again wrong pin"<<endl;
		}
		}
}
	
};
int main ()
{
sbi b;
int choice;
	while(true)
	{
	cout<<"     \n\n**WELCOME TO BRK ATM** "<<endl<<endl;
	cout<<"1. cash add section "<<endl;
	cout<<"2. pin section "<<endl;
	cout<<"3. check total amount section "<<endl;
	cout<<"4. withdraw section "<<endl;
	cout<<"5. user personal information section "<<endl;
	cout<<"6. EXIT section ";
	cout<<"\n\nenter the choice = ";
	cin>>choice;
switch (choice)
{
	case 1:
		b.add_money();
		break;
	case 2:
		b.change_pin();
		break;
	case 3:
		b.check_blance();
		break;
	case 4:
		b.withdraw();
		break;
	case 5:
		b.user_info();
		break;
	default:
		cout<<"exited";
		exit(0);
}
	}
	return 0;
}