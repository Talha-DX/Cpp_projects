#include<iostream>
#include<string>
using namespace std;

struct stud{
	string name;
	int password;
};

int main(){
	
    cout << "                                ===================================================                           " << endl;
    cout << "                                            Welcome to the Student Portal                                     " << endl;
    cout << "                                ===================================================                           " << endl;
    
stud stu[50];
int student_count = 0;
int choice = 0;


while(choice != 3){
	
	cout<<"                                      ............Select One Option............                                     "<<endl;
	cout<<" 1: Registration "<<endl;
	cout<<" 2: Login "<<endl;
	cout<<" 3: Exit "<<endl;
	cout<<"\nEnter your choice:";
	cin>>choice;
	
	switch(choice){
		case 1:
            
								
				if(student_count>=50){
					cout<<"Space is reach its limit..."<<endl;
				}
				else{
					cout<<"Enter Your name:"<<endl;
					cin>>stu[student_count].name;
					cout<<"Create a new password:"<<endl;
					cin>>stu[student_count].password;
					student_count++;
					cout<<"                  ...The Account successfully registered...                                   "<<endl;
					cout<<"================================================================================================"<<endl;
				}
		   
		   break;
		case 2:
			{
            int cpassword;
            string cname;
			bool f = false;
			
			cout<<"Enter Your name:"<<endl;
			cin>>cname;
			cout<<"Enter Your Password:"<<endl;
			cin>>cpassword;
			
			for(int p=1;p<student_count;p++){
				if( stu[p].name == cname && stu[p].password == cpassword ){
					cout<<"Welocme "<<cname<<" Login Successfully"<<endl;
					f = true;
					break;
				}
			}
			if(!f){
				cout<<"The account is not registered..."<<endl;
			}
			cout<<"================================================================================================"<<endl;
			break;
	}
		case 3:
		cout<<"                               ....Program is Exiting....                                    "<<endl;
		cout<<"================================================================================================"<<endl;
		break;	
		    
	default:
		cout<<"                               .....Invalid Number.....                                        "<<endl;
		cout<<"================================================================================================"<<endl;
		break;	
			
	}
	
}
    
	return 0;
}
