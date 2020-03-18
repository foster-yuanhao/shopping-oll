#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>
using namespace std;
int responce;
string staff;    //the staff code.
int menu;        //for the item list
int shopping;
int ju;
int tq;
int additems;
int a,aq,b,bq,c,cq,d,dq,e,eq,f,fq,g,gq,h,hq;
int num;
int main(){
    cout<<"----------are you a staff member 1.Yes 2.No----------"<<endl;
    cin>>responce;
if (responce==1){
        cout<<"Please enter the staff code."<<endl;
        label:
        cin>>staff;
        if (!strcmp(staff.c_str(), "staff")){ 
        startcus1 :
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
        if (menu==4){
        	exit(1);
		}
        if (menu==3){
        	
		}
        if (menu==2){
        cout<<"________________________________\n";
        cout<<a<<endl;
		switch(a){
			case 1:
				cout<<"Microwave Oven 1.5L ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack ";
				break;
			case 3: 
				cout<<"Panasonic Iron ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet ";
				break;
			case 5:
				cout<<"Rice Cooker 1L ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB ";
				break;
			case 7:
				cout<<"Hair Dryer ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker " ;
				break;
				 
		}
		
		cout<<aq<<endl;
		cout<<b<<endl;
				switch(b){
			case 1:
				cout<<"Microwave Oven 1.5L ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack ";
				break;
			case 3: 
				cout<<"Panasonic Iron ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet ";
				break;
			case 5:
				cout<<"Rice Cooker 1L ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB ";
				break;
			case 7:
				cout<<"Hair Dryer ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker " ;
				break;
		}
		cout<<bq<<endl;
		cout<<c<<endl;
				switch(c){
			case 1:
				cout<<"Microwave Oven 1.5L ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack ";
				break;
			case 3: 
				cout<<"Panasonic Iron ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet ";
				break;
			case 5:
				cout<<"Rice Cooker 1L ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB ";
				break;
			case 7:
				cout<<"Hair Dryer ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker " ;
				break;
				 
		}
		cout<<cq<<endl;
		cout<<d<<endl;
				switch(d){
			case 1:
				cout<<"Microwave Oven 1.5L ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack ";
				break;
			case 3: 
				cout<<"Panasonic Iron ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet ";
				break;
			case 5:
				cout<<"Rice Cooker 1L ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB ";
				break;
			case 7:
				cout<<"Hair Dryer ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker " ;
				break;
				 
		}
		cout<<dq<<endl;
		cout<<e<<endl;
				switch(e){
			case 1:
				cout<<"Microwave Oven 1.5L ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack ";
				break;
			case 3: 
				cout<<"Panasonic Iron ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet ";
				break;
			case 5:
				cout<<"Rice Cooker 1L ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB ";
				break;
			case 7:
				cout<<"Hair Dryer ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker " ;
				break;
				 
		}
		cout<<eq<<endl;
		cout<<f<<endl;
				switch(f){
			case 1:
				cout<<"Microwave Oven 1.5L ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack ";
				break;
			case 3: 
				cout<<"Panasonic Iron ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet ";
				break;
			case 5:
				cout<<"Rice Cooker 1L ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB ";
				break;
			case 7:
				cout<<"Hair Dryer ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker " ;
				break;
				 
		}
		cout<<fq<<endl;
		cout<<g<<endl;
				switch(g){
			case 1:
				cout<<"Microwave Oven 1.5L ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack ";
				break;
			case 3: 
				cout<<"Panasonic Iron ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet ";
				break;
			case 5:
				cout<<"Rice Cooker 1L ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB ";
				break;
			case 7:
				cout<<"Hair Dryer ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker " ;
				break;
				 
		}
		cout<<gq<<endl;
		cout<<h<<endl;
				switch(h){
			case 1:
				cout<<"Microwave Oven 1.5L ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack ";
				break;
			case 3: 
				cout<<"Panasonic Iron ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet ";
				break;
			case 5:
				cout<<"Rice Cooker 1L ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB ";
				break;
			case 7:
				cout<<"Hair Dryer ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker " ;
				break;
				 
		}
		cout<<hq<<endl;
		}
        if (menu==1){
        cout<<"_________________________________________________________________________\n";
        cout<<"**********       NO.          ITEM NAME                        **********\n";
        cout<<"**********        1.      Microwave Oven 1.5L                  **********\n";
        cout<<"**********        2.      Tiers Shoe Rack                      **********\n";
        cout<<"**********        3.      Panasonic Iron                       **********\n";
        cout<<"**********        4.      Kitchen L Shape Carpet               **********\n";
        cout<<"**********        5.      Rice Cooker 1L                       **********\n";
        cout<<"**********        6.      San Disk Ultra Micro SD 32GB         **********\n";
        cout<<"**********        7.      Hair Dryer                           **********\n";
        cout<<"**********        8.      Mini Bluetooth Speaker               **********\n";
        cout<<"_________________________________________________________________________\n";
	    cout<<"                  Do you want to add any items? 1-Yes 2-No \n";
        cin>>additems;
        if(additems==1){
        cout<<"Enter the item number";
		cin>>a; 
        cout<<"how many items do you want?";
        cin>>aq;
	    cout<<"                  Do you want to add any items? 1-Yes 2-No \n";
        cin>>additems;
        if(additems==1){
        cout<<"Enter the item number";
		cin>>b; 
        cout<<"how many items do you want?";
        cin>>bq;
	    cout<<"                  Do you want to add any items? 1-Yes 2-No \n";
        cin>>additems;
        if(additems==1){
   		cout<<"Enter the item number";
		cin>>c; 
        cout<<"how many items do you want?";
        cin>>cq;
	    cout<<"                  Do you want to add any items? 1-Yes 2-No \n";
        cin>>additems;
        if(additems==1){
        cout<<"Enter the item number";
		cin>>d; 
        cout<<"how many items do you want?";
        cin>>dq;
	    cout<<"                  Do you want to add any items? 1-Yes 2-No \n";
        cin>>additems;
        if(additems==1){
        cout<<"Enter the item number";
		cin>>e; 
        cout<<"how many items do you want?";
        cin>>eq;
	    cout<<"                  Do you want to add any items? 1-Yes 2-No \n";
        cin>>additems;
        if(additems==1){
        	cout<<"Enter the item number";
		cin>>f; 
        cout<<"how many items do you want?";
        cin>>fq;
	    cout<<"                  Do you want to add any items? 1-Yes 2-No \n";
        cin>>additems;
        if(additems==1){
        		cout<<"Enter the item number";
		cin>>g; 
        cout<<"how many items do you want?";
        cin>>gq;
	    cout<<"                  Do you want to add any items? 1-Yes 2-No \n";
        cin>>additems;
        if(additems==1){
        			cout<<"Enter the item number";
		cin>>h; 
        cout<<"how many items do you want?";
        cin>>hq;
        goto startcus1;
        }
     
		else{
		
			goto startcus1;
		}
        }

		else{
			
			goto startcus1;
		}
        }
        
     
		
		else{
		
			goto startcus1;
		}
        }
	
		
		else{
	
			goto startcus1;
		}	
        }
     
		
		else{

			goto startcus1;
		}
			}
        
   
		
		else{
	
			goto startcus1;
		}  	
    }
 
		
		else{

			goto startcus1;
		}
    
		}
		
		else{
			goto startcus1;
		}
      
		
	 		
	

}

}
        else {
        cout<<"The staff code is wrong please enter it again."<<endl;
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
        if (menu==4){
        	exit(1);
		}
        if (menu==3){
		}
        if (menu==2){
        cout<<"________________________________\n";
        cout<<a<<" ";
		switch(a){
			case 1:
				cout<<"Microwave Oven 1.5L ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack ";
				break;
			case 3: 
				cout<<"Panasonic Iron ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet ";
				break;
			case 5:
				cout<<"Rice Cooker 1L ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB ";
				break;
			case 7:
				cout<<"Hair Dryer ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker " ;
				break;
				 
		}
		
		cout<<aq<<endl;
		cout<<b<<" ";
				switch(b){
			case 1:
				cout<<"Microwave Oven 1.5L ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack ";
				break;
			case 3: 
				cout<<"Panasonic Iron ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet ";
				break;
			case 5:
				cout<<"Rice Cooker 1L ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB ";
				break;
			case 7:
				cout<<"Hair Dryer ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker " ;
				break;
				 
		}
		cout<<bq<<endl;
		cout<<c<<" ";
				switch(c){
			case 1:
				cout<<"Microwave Oven 1.5L ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack ";
				break;
			case 3: 
				cout<<"Panasonic Iron ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet ";
				break;
			case 5:
				cout<<"Rice Cooker 1L ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB ";
				break;
			case 7:
				cout<<"Hair Dryer ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker " ;
				break;
				 
		}
		cout<<cq<<endl;
		cout<<d<<" ";
				switch(d){
			case 1:
				cout<<"Microwave Oven 1.5L ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack ";
				break;
			case 3: 
				cout<<"Panasonic Iron ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet ";
				break;
			case 5:
				cout<<"Rice Cooker 1L ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB ";
				break;
			case 7:
				cout<<"Hair Dryer ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker " ;
				break;
				 
		}
		cout<<dq<<endl;
		cout<<e<<" ";
				switch(e){
			case 1:
				cout<<"Microwave Oven 1.5L ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack ";
				break;
			case 3: 
				cout<<"Panasonic Iron ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet ";
				break;
			case 5:
				cout<<"Rice Cooker 1L ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB ";
				break;
			case 7:
				cout<<"Hair Dryer ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker " ;
				break;
				 
		}
		cout<<eq<<endl;
		cout<<f<<" ";
				switch(f){
			case 1:
				cout<<"Microwave Oven 1.5L ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack ";
				break;
			case 3: 
				cout<<"Panasonic Iron ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet ";
				break;
			case 5:
				cout<<"Rice Cooker 1L ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB ";
				break;
			case 7:
				cout<<"Hair Dryer ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker " ;
				break;
				 
		}
		cout<<fq<<endl;
		cout<<g<<" ";
				switch(g){
			case 1:
				cout<<"Microwave Oven 1.5L ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack ";
				break;
			case 3: 
				cout<<"Panasonic Iron ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet ";
				break;
			case 5:
				cout<<"Rice Cooker 1L ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB ";
				break;
			case 7:
				cout<<"Hair Dryer ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker " ;
				break;
				 
		}
		cout<<gq<<endl;
		cout<<h<<" ";
				switch(h){
			case 1:
				cout<<"Microwave Oven 1.5L ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack ";
				break;
			case 3: 
				cout<<"Panasonic Iron ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet ";
				break;
			case 5:
				cout<<"Rice Cooker 1L ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB ";
				break;
			case 7:
				cout<<"Hair Dryer ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker " ;
				break;
				 
		}
		cout<<hq<<endl;
		}
		}
        if (menu==1){
        	
		cout<<"_________________________________________________________________________\n";
        cout<<"**********       NO.          ITEM NAME                        **********\n";
        cout<<"**********        1.      Microwave Oven 1.5L                  **********\n";
        cout<<"**********        2.      Tiers Shoe Rack                      **********\n";
        cout<<"**********        3.      Panasonic Iron                       **********\n";
        cout<<"**********        4.      Kitchen L Shape Carpet               **********\n";
        cout<<"**********        5.      Rice Cooker 1L                       **********\n";
        cout<<"**********        6.      San Disk Ultra Micro SD 32GB         **********\n";
        cout<<"**********        7.      Hair Dryer                           **********\n";
        cout<<"**********        8.      Mini Bluetooth Speaker               **********\n";
        cout<<"_________________________________________________________________________\n";
	    cout<<"                  Do you want to add any items? 1-Yes 2-No \n";
        cin>>additems;
        if(additems==1){
        cout<<"Enter the item number";
		cin>>a; 
        cout<<"how many items do you want?";
        cin>>aq;
	    cout<<"                  Do you want to add any items? 1-Yes 2-No \n";
        cin>>additems;
        if(additems==1){
        cout<<"Enter the item number";
		cin>>b; 
        cout<<"how many items do you want?";
        cin>>bq;
	    cout<<"                  Do you want to add any items? 1-Yes 2-No \n";
        cin>>additems;
        if(additems==1){
   		cout<<"Enter the item number";
		cin>>c; 
        cout<<"how many items do you want?";
        cin>>cq;
	    cout<<"                  Do you want to add any items? 1-Yes 2-No \n";
        cin>>additems;
        if(additems==1){
        cout<<"Enter the item number";
		cin>>d; 
        cout<<"how many items do you want?";
        cin>>dq;
	    cout<<"                  Do you want to add any items? 1-Yes 2-No \n";
        cin>>additems;
        if(additems==1){
        cout<<"Enter the item number";
		cin>>e; 
        cout<<"how many items do you want?";
        cin>>eq;
	    cout<<"                  Do you want to add any items? 1-Yes 2-No \n";
        cin>>additems;
        if(additems==1){
        	cout<<"Enter the item number";
		cin>>f; 
        cout<<"how many items do you want?";
        cin>>fq;
	    cout<<"                  Do you want to add any items? 1-Yes 2-No \n";
        cin>>additems;
        if(additems==1){
        		cout<<"Enter the item number";
		cin>>g; 
        cout<<"how many items do you want?";
        cin>>gq;
	    cout<<"                  Do you want to add any items? 1-Yes 2-No \n";
        cin>>additems;
        if(additems==1){
        			cout<<"Enter the item number";
		cin>>h; 
        cout<<"how many items do you want?";
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
