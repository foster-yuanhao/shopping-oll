#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>
using namespace std;
int responce;
int menu;//for the item list
int shopping;
string staff; //the staff code.
int main(){
    cout<<"----------are you a staff member 1.Yes 2.No----------"<<endl;
    cin>>responce;
if (responce==1){
        cout<<"enter the staff code please."<<endl;
        label:
        cin>>staff;
        if (!strcmp(staff.c_str(), "staff")){ 
        cout<<"                       ----------You are a staff member----------\n";
        cout<<"\n \t\t\t=========================================\n";
        cout<<"\n\t\t\t----------WELCOME TO THE SHOP-------------\n";
        cout<<"\n \t\t\t=========================================\n";
        cout<<"\n \t\t\t    * * * * * * * * * * * * ";
        cout<<"\n\t\t\t       1. SHOPPING LIST";
        cout<<"\n\t\t\t       2. SHOPPING CART";
        cout<<"\n\t\t\t       3. CHECK OUT";
        cout<<"\n\t\t\t       4. EXIT";
        cout<<"\n\t\t\t    * * * * * * * * * * * *\n";
        cin>>menu;
        if (menu==1)
        cout<<"**********       NO.          ITEM NAME                        **********\n";
        cout<<"**********        1.      Microwave Oven 1.5L                  **********\n";
        cout<<"**********        2.      Tiers Shoe Rack                      **********\n";
        cout<<"**********        3.      Panasonic Iron                       **********\n";
        cout<<"**********        4.      Kitchen L Shape Carpet               **********\n";
        cout<<"**********        5.      Rice Cooker 1L                       **********\n";
        cout<<"**********        6.      San Disk Ultra Micro SD 32GB         **********\n";
        cout<<"**********        7.      Hair Dryer                           **********\n";
        cout<<"**********        8.      Mini Bluetooth Speaker               **********\n";
        }
        else {
        cout<<"please enter the staff code again."<<endl;
        goto label;
        }
    }
else{
           cout<<"                       ----------You are a normal customer----------"<<endl;
        cout<<"\n \t\t\t=========================================\n";
        cout<<"\n\t\t\t----------WELCOME TO THE SHOP-------------\n";
        cout<<"\n \t\t\t=========================================\n";
        cout<<"\n \t\t\t    * * * * * * * * * * * * ";
        cout<<"\n\t\t\t       1. SHOPPING LIST";
        cout<<"\n\t\t\t       2. SHOPPING CART";
        cout<<"\n\t\t\t       3. CHECK OUT";
        cout<<"\n\t\t\t       4. EXIT";
        cout<<"\n\t\t\t    * * * * * * * * * * * *\n";
        cin>>menu;
        if (menu==1)
        cout<<"**********       NO.          ITEM NAME                        **********\n";
        cout<<"**********        1.      Microwave Oven 1.5L                  **********\n";
        cout<<"**********        2.      Tiers Shoe Rack                      **********\n";
        cout<<"**********        3.      Panasonic Iron                       **********\n";
        cout<<"**********        4.      Kitchen L Shape Carpet               **********\n";
        cout<<"**********        5.      Rice Cooker 1L                       **********\n";
        cout<<"**********        6.      San Disk Ultra Micro SD 32GB         **********\n";
        cout<<"**********        7.      Hair Dryer                           **********\n";
        cout<<"**********        8.      Mini Bluetooth Speaker               **********\n";
        cin>>shopping
		switch(shopping){
	    case 1 :
	    	cout<<
	    	break;
        case 2 :
	        break;	
		case 3 :
			break;
        case 4 :
        	break;
        case 5 :
        	break;
        case 6 :
        	break;
        case 7 :
        	break;
        case 8 :
        	break;
		}

}
system("pause");
}
