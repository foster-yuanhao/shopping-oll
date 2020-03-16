#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>
using namespace std;
int responce;
int menu;//for the item list
int shopping;
int ju;
int a,aq,b,bq,c,cq,d,dq,e,eq,f,fq,g,gq,h,hq;
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
	startcus:
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
        cout<<"**********        1.      Microwave Oven 1.5L                  **********\n";//aq
        cout<<"**********        2.      Tiers Shoe Rack                      **********\n";
        cout<<"**********        3.      Panasonic Iron                       **********\n";
        cout<<"**********        4.      Kitchen L Shape Carpet               **********\n";
        cout<<"**********        5.      Rice Cooker 1L                       **********\n";
        cout<<"**********        6.      San Disk Ultra Micro SD 32GB         **********\n";
        cout<<"**********        7.      Hair Dryer                           **********\n";
        cout<<"**********        8.      Mini Bluetooth Speaker               **********\n";
       	cout<<"Do you want to add any items?\n";
        cin>>a;
        cout<<"doyouwant to contiune add?1-yes 2-no";
        cin>>ju;
        if(ju==1){
		cout<<"Do you want to add any items?\n";
        cin>>b;
        	switch(b)
	    case 1 : 
	    	cout<<"how many items quilty?";
	    	cin>>aq;
	    	cout<<"you have add mic succssful";
	    	break;
        case 2 :
        		cout<<"how many items quilty?";
	    	cin>>bq;
        	cout<<"you have add mic succssful";
	        break;	
		case 3 :
				cout<<"how many items quilty?";
	    	cin>>cq;
			cout<<"you have add mic succssful";
			break;
        case 4 :
        		cout<<"how many items quilty?";
	    	cin>>dq;
        	cout<<"you have add mic succssful";
        	break;
        case 5 :
        		cout<<"how many items quilty?";
	    	cin>>eq;
        	cout<<"you have add mic succssful";
        	break;
        case 6 :
        		cout<<"how many items quilty?";
	    	cin>>fq;
        	break;
        case 7 :
        		cout<<"how many items quilty?";
	    	cin>>gq;
        	break;
        case 8 :
        		cout<<"how many items quilty?";
	    	cin>>hq;
        	break;
		}
}
}
	
