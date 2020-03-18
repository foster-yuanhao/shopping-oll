#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>
using namespace std;
int responce;
int menu;//for the item list
int shopping;
int ju;
int tq;
int chushihua;
int a,aq,b,bq,c,cq,d,dq,e,eq,f,fq,g,gq,h,hq;
int num;
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
        if (menu==1){
        	
		
        cout<<"**********       NO.          ITEM NAME                        **********\n";
        cout<<"**********        1.      Microwave Oven 1.5L                  **********\n";//aq
        cout<<"**********        2.      Tiers Shoe Rack                      **********\n";
        cout<<"**********        3.      Panasonic Iron                       **********\n";
        cout<<"**********        4.      Kitchen L Shape Carpet               **********\n";
        cout<<"**********        5.      Rice Cooker 1L                       **********\n";
        cout<<"**********        6.      San Disk Ultra Micro SD 32GB         **********\n";
        cout<<"**********        7.      Hair Dryer                           **********\n";
        cout<<"**********        8.      Mini Bluetooth Speaker               **********\n";
	    cout<<"Do you want to add any items?1-y 2-n\n";
        cin>>chushihua;
        if(chushihua==1){
        cout<<"item unmber";
		cin>>a; 
        cout<<"how many items quilty?";
        cin>>aq;
        cout<<"Do you want to add any items?1-y 2-n\n";
        cin>>chushihua;
        if(chushihua==1){
        cout<<"item unmber";
		cin>>b; 
        cout<<"how many items quilty?";
        cin>>bq;
        cout<<"Do you want to add any items?1-y 2-n\n";
        cin>>chushihua;
        if(chushihua==1){
   		cout<<"item unmber";
		cin>>c; 
        cout<<"how many items quilty?";
        cin>>cq;
		cout<<"Do you want to add any items?1-y 2-n\n";
        cin>>chushihua;
        if(chushihua==1){
        cout<<"item unmber";
		cin>>d; 
        cout<<"how many items quilty?";
        cin>>dq;
        cout<<"Do you want to add any items?1-y 2-n\n";
        cin>>chushihua;
        if(chushihua==1){
        cout<<"item unmber";
		cin>>e; 
        cout<<"how many items quilty?";
        cin>>eq;
        cout<<"Do you want to add any items?1-y 2-n\n";
        cin>>chushihua;
        if(chushihua==1){
        	cout<<"item unmber";
		cin>>f; 
        cout<<"how many items quilty?";
        cin>>fq;
         cout<<"Do you want to add any items?1-y 2-n\n";
        cin>>chushihua;
        if(chushihua==1){
        		cout<<"item unmber";
		cin>>g; 
        cout<<"how many items quilty?";
        cin>>gq;
          cout<<"Do you want to add any items?1-y 2-n\n";
        cin>>chushihua;
        if(chushihua==1){
        			cout<<"item unmber";
		cin>>h; 
        cout<<"how many items quilty?";
        cin>>hq;
        goto startcus;
        }
     
		else{
		
			goto startcus;
		}
        }

		else{
			
			goto startcus;
		}
        }
        
     
		
		else{
		
			goto startcus;
		}
        }
	
		
		else{
	
			goto startcus;
		}	
        }
     
		
		else{

			goto startcus;
		}
			}
        
   
		
		else{
	
			goto startcus;
		}  	
    }
 
		
		else{

			goto startcus;
		}
    
		}
		
		else{
			goto startcus;
		}
      
		
	 		
	


}
}
}
 


	
