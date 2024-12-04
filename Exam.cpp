#include <iostream>
using namespace std;
int main()
{
	double balance=5000.0,withdraw,deposit;
	int choice;
	do
	{
	cout<<"\n---BANK ACCOUNT TRANSACTIONS--- \n1.Check Balance \n2.Deposit Money \n3.Withdraw Money \n4.Exit \nEnter your choice: ";
	cin>>choice;
	  switch(choice)
	  {
	    case 1: 
	       {
	    	    cout<<"Your Balance is: "<<balance;
	    	    break;
		   }
	    case 2:
	    	{
	    		cout<<"How much money you want to Deposit: ";
	    		cin>>deposit;
	    		balance+=deposit;
	    		if(deposit<0)
	    		 { cout<<"Invalid! Enter positive number: ";
	    		   continue;
				 }
				else
				{ cout<<"Done! Now your balance is: "<<balance<<endl;
				  break;
				}
				break;
			}
		case 3:
			{
				cout<<"How much money you want to Withdraw: ";
	    		cin>>withdraw;
	    		 if(withdraw<=0)
	    		 { cout<<"Invalid! Enter positive number. ";
	    		   continue;
				 }
				 if(withdraw>balance)
				 { cout<<"Error! You have not enough balance.\nRe-enter the amount.";
				   continue;
				 }
				 balance-=withdraw;
				 break;
			}
	    case 4:
	 	   {
	 		    cout<<"Exiting the program! GoodBye.";
	 		    break;
		   }
	    default:
		   {
			    cout<<"Invalid option! choose valid option.";
			    continue;
		   } 
	  } 
	}
	while(choice!=4);	
	return 0;
}
