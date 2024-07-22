#include<iostream>
#include<string>
using namespace std;
class ATM{
	private:
		int balance;
	public:
		
		ATM(int bal){
			balance=bal;		
		}
		
		int showbalance(){
			cout <<"\n\t\tYour current Balance is :)"<<balance << endl;
			return balance;
		}
		
		void withdraw(int amount){
			if(amount > balance){
				showbalance();
				cout<<"You Exceed Your Current Balance "<<endl;
//				return false ;
			}else{
			
			balance = balance - amount;
		}
	}
	
		void deposite(int amount){
			balance = balance + amount;
		} 
	
};

int main(){
	ATM atm(1000);
	int choice, amount, d_amount, success;
    char option;
    int pin_code=4321;
    int pin;
    
    
    cout << "\t=>WELCOME TO KHYBER BANK :) "<<endl;
    cout << "\t\t======================================" << endl;
    cout<<"\tEnter your PIN code : ";
    cin>>pin;
    
	if(pin==pin_code){
		
    while (1) {
        start:
        system("cls"); // Use "clear" for Linux and "cls" for Windows
       		
			   cout << "\t=>WELCOME TO KHYBER BANK :) "<<endl;
   			cout << "\t\t======================================" << endl;
			cout << "\t\tPress 1. For View Balance       -o-o-o-" << endl;
        	cout << "\t\tPress 2. For Cash Widthdraw     -o-o-o-" << endl;
      		cout << "\t\tPress 3. For Cash Deposite      -o-o-o-" << endl;
    	    cout << "\t\tPress 4. For Exit Program       -o-o-o-" << endl;
    	    cout << "\t\t---------------------------" << endl;
    	    cout << "\n\t\t Enter your choice " << endl;
    	    cin >> choice;
    	    cout << "\t\t---------------------------" << endl;
    	    switch (choice) {
        	    case 1:
        	    	atm.showbalance();
        	        break;
           
		    	case 2:
            	cout << "\n\t\t Enter The cash to Widthraw " << endl;
       		     cin >> amount;
            	atm.withdraw(amount);
                break;
           
		    case 3:
            	cout << "\n\t\t Enter The cash to Deposite" << endl;
       		     cin >> d_amount;
            	atm.deposite(d_amount);
				break;
		
			case 4:
				cout << "\n\t\tSuccesfully Terminated" << endl;
				exit(0);
				break;    
        
		    default:
                cout << "Invalid choice!" << endl;
                break;
        	}
       
	   		cout << "----------------------" << endl;
      		cout << "\tDo you want to try again?" << endl;
     	    cout << "\t==YES || NO== " << endl;
        	cout << "\tPress y or Y for YES " << endl;
   		    cout << "\tPress n or N for NO  " << endl;
    	    cout << "\n\t\t Enter your choice :)" << endl;
            cout << "----------------------" << endl;
        	cin >> option;
        	if (option == 'y' || option == 'Y') {
        		goto start;
        	}
			 else if (option == 'n' || option == 'N') {
            	cout << "Program successfully terminated..." << endl;
            	exit(0);
        	}
    }
		}else {
			cout<<"Invalid PIN Code!"<<endl;
		}
     return 0;  

}
