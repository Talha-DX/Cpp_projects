#include<iostream>
#include<string>
using namespace std;

struct Bank{

	char name[50];
	int A_pas;
	float balance;
};

void Acc(Bank &b1, bool &f)
{
	if(!f){
	cout<<"Enter Your name:"<<endl;
	cin>>b1.name;
	
    cout<<"Enter Account Password:"<<endl;
	cin>>b1.A_pas;
	
	cout<<"Enter Your account Total balance:"<<endl;
	cin>>b1.balance;

	cout<<"<--Account Succesfully Created-->"<<endl;
	f = true;
    }
    else
    cout<<"<...No more accounts...>"<<endl;


    cout<<"---------------------------------"<<endl;
}

void Dep(Bank &b1 ,bool &f)
{
	int d, s=0;
    b1.balance;
    if(f)
    {
	cout<<"Your current account balance is: "<<b1.balance<<endl;
	
	cout<<"How much money you want to Deposit: "<<endl;
	cin>>d;
	cout<<"Ater Deposite, Balance is: "<<b1.balance<<endl;
	s = d + b1.balance;
    b1.balance = s;
	cout<<"Before Deposite, Balance is: "<<b1.balance<<endl;
	
	cout<<"<--Money Succesfully Deposit in your Account-->"<<endl;
}
else
    {
	cout<<"You dont have any account"<<endl;
}
    cout<<"---------------------------------"<<endl;
}

void With(Bank &b1 ,bool &f)
{
int d, s=0;
    
    if(f){
	cout<<"Your current account balance is: "<<b1.balance<<endl;
	
	cout<<"How much money you want to Withdrawal: "<<endl;
	cin>>d;
	cout<<"Ater Withdrawal, Balance is: "<<b1.balance<<endl;
	s = b1.balance - d ;
	b1.balance = s;
    cout<<"Before Withdrawal, Balance is: "<<b1.balance<<endl;
	
	cout<<"<--Money Succesfully Withdrawal in your Account-->"<<endl;
}
else{
	cout<<"You dont have any account"<<endl;
}
    cout<<"---------------------------------"<<endl;	
}

void che(Bank &b1 ,bool &f)
{
if(f){
cout<<b1.name<<" your account have Total amount of :"<<b1.balance<<endl;
cout<<"<<<------Thank You------>>>"<<endl;
cout<<"---------------------------------"<<endl;	
}
else{
	cout<<"You dont have any account"<<endl;
}
}

void dt(Bank &b1 ,bool &f)
{
if(f){
cout<<"|------Your account detail------|"<<endl;
cout<<"Your Name :"<<b1.name<<endl;
cout<<"Your Account Password is :"<<b1.A_pas<<endl;
cout<<"Your Account Balance is :"<<b1.balance<<endl;	
cout<<"---------------------------------"<<endl;	
}
else{
	cout<<"You dont have any account"<<endl;
}
	
}

int main()
{
	Bank b1;
	int choice;
	bool f = false;
	cout << "***********************************************"<<endl;
    cout << "||        WELCOME TO THE BANKING SYSTEM       ||"<<endl;
    cout << "***********************************************"<<endl;
	while(choice != 6)
	{
		
		cout<<"<---Please Select any option--->"<<endl;
		cout<<"1: Creat Account."<<endl;
		cout<<"2: Deposit Money."<<endl;
		cout<<"3: WithDraw Money."<<endl;
		cout<<"4: Check Total Balance."<<endl;
		cout<<"5: View Account Detail."<<endl;
		cout<<"6: Exit."<<endl;
		cout<<"Enter your choice:";
		cin>>choice;
	
	
	switch(choice){
		case 1:
			Acc(b1,f);
		break;
		   
		case 2:
			 Dep(b1,f);
		break;
		     
		case 3:
			With(b1,f);
		break;
		
		case 4:
			che(b1,f);
		break;
		
		case 5:
			dt(b1,f);
		break;
		
		case 6:
			cout<<"<--- System Exiting --->"<<endl;
		break;
		
		default:
			cout<<"<---You enter wrong option. Thanks--->"<<endl;
	}
	
	
}
	return 0;
}
