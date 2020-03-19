#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>
using namespace std;
int responce;    //to determine if he/she is a staff
string staff;    //the staff code.
int menu;        //for the item list
int shopping;
int additems;
double tp,too;
int a,aq,b,bq,c,cq,d,dq,e,eq,f,fq,g,gq,h,hq;
int yi=299,er=12,san=40,si=24,wu=80,liu=40,qi=50,ba=10;
int aqp,bqp,cqp,dqp,eqp,fqp,gqp,hqp;
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
        cout<<" No          name              prise        quantity    totalprise   \n ";
        cout<<"____________________________________________________\n ";
        	 cout<<a<<" ";
		switch(a){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		switch(a){
				case 1:
				cout<<"299	       ";
				break;
			case 2:
				cout<<"12 	       ";
				break;
			case 3: 
				cout<<"40		   ";
				break;
			case 4:
				cout<<"24	       ";
				break;
			case 5:
				cout<<"80		   ";
				break;
			case 6:
				cout<<"40		    ";
				break;
			case 7:
				cout<<"50			";
				break;
			case 8:
				cout<<"10			";
				break;
			}
		cout<<aq<<"          ";
			switch(a){
				case 1:
				aqp=aq*yi;
				cout<<aqp<<endl;
				break;
			case 2:
				aqp=aq*er;
				cout<<aqp<<endl;
				break;
			case 3: 
					aqp=aq*san;
				cout<<aqp<<endl;
				break;
			case 4:
					aqp=aq*si;
				cout<<aqp<<endl;
				break;
			case 5:
					aqp=aq*wu;
				cout<<aqp<<endl;
				break;
			case 6:
					aqp=aq*liu;
				cout<<aqp<<endl;
				break;
			case 7:
					aqp=aq*qi;
				cout<<aqp<<endl;
				break;
			case 8:
				aqp=aq*ba;
				cout<<aqp<<endl;
				break;
				 
		}
		cout<<b<<" ";
				switch(b){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		switch(b){
				case 1:
				cout<<"299			";
				break;
			case 2:
				cout<<"12			";
				break;
			case 3: 
				cout<<"40			";
				break;
			case 4:
				cout<<"24			";
				break;
			case 5:
				cout<<"80			";
				break;
			case 6:
				cout<<"40			";
				break;
			case 7:
				cout<<"50			";
				break;
			case 8:
				cout<<"10			";
				break;
			}
		cout<<bq<<"          ";
		switch(b){
			case 1:
				bqp=bq*yi;
				cout<<bqp<<endl;
				break;
			case 2:
				bqp=bq*er;
				cout<<bqp<<endl;
				break;
			case 3: 
					bqp=bq*san;
				cout<<bqp<<endl;
				break;
			case 4:
					bqp=bq*si;
				cout<<bqp<<endl;
				break;
			case 5:
					bqp=bq*wu;
				cout<<bqp<<endl;
				break;
			case 6:
					bqp=bq*liu;
				cout<<bqp<<endl;
				break;
			case 7:
					bqp=bq*qi;
				cout<<bqp<<endl;
				break;
			case 8:
				bqp=bq*ba;
				cout<<bqp<<endl;
				break;
		}
		cout<<c<<" ";
				switch(c){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		switch(c){
				case 1:
				cout<<"299 ";
				break;
			case 2:
				cout<<"12 ";
				break;
			case 3: 
				cout<<"40 ";
				break;
			case 4:
				cout<<"24 ";
				break;
			case 5:
				cout<<"80 ";
				break;
			case 6:
				cout<<"40 ";
				break;
			case 7:
				cout<<"50 ";
				break;
			case 8:
				cout<<"10 ";
				break;
			}
		cout<<cq<<"          ";
		switch(c){
				case 1:
				cqp=cq*yi;
				cout<<cqp<<endl;
				break;
			case 2:
				cqp=cq*er;
				cout<<cqp<<endl;
				break;
			case 3: 
					cqp=cq*san;
				cout<<cqp<<endl;
				break;
			case 4:
					cqp=cq*si;
				cout<<cqp<<endl;
				break;
			case 5:
					cqp=cq*wu;
				cout<<cqp<<endl;
				break;
			case 6:
					cqp=cq*liu;
				cout<<cqp<<endl;
				break;
			case 7:
					cqp=cq*qi;
				cout<<cqp<<endl;
				break;
			case 8:
				cqp=cq*ba;
				cout<<cqp<<endl;
				break;
				 
		}
		cout<<d<<" ";
				switch(d){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		switch(d){
				case 1:
				cout<<"299 ";
				break;
			case 2:
				cout<<"12 ";
				break;
			case 3: 
				cout<<"40 ";
				break;
			case 4:
				cout<<"24 ";
				break;
			case 5:
				cout<<"80 ";
				break;
			case 6:
				cout<<"40 ";
				break;
			case 7:
				cout<<"50 ";
				break;
			case 8:
				cout<<"10 ";
				break;
			}
		cout<<dq<<"          ";
		switch(d){
				case 1:
				dqp=dq*yi;
				cout<<dqp<<endl;
				break;
			case 2:
				dqp=dq*er;
				cout<<dqp<<endl;
				break;
			case 3: 
					dqp=dq*san;
				cout<<dqp<<endl;
				break;
			case 4:
					dqp=dq*si;
				cout<<dqp<<endl;
				break;
			case 5:
					dqp=dq*wu;
				cout<<dqp<<endl;
				break;
			case 6:
					dqp=dq*liu;
				cout<<dqp<<endl;
				break;
			case 7:
					dqp=dq*qi;
				cout<<dqp<<endl;
				break;
			case 8:
				dqp=dq*ba;
				cout<<dqp<<endl;
				break;
				 
				 
		}
		cout<<e<<" ";
				switch(e){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		switch(e){
				case 1:
				cout<<"299 ";
				break;
			case 2:
				cout<<"12 ";
				break;
			case 3: 
				cout<<"40 ";
				break;
			case 4:
				cout<<"24 ";
				break;
			case 5:
				cout<<"80 ";
				break;
			case 6:
				cout<<"40 ";
				break;
			case 7:
				cout<<"50 ";
				break;
			case 8:
				cout<<"10 ";
				break;
			}
		cout<<eq<<"          ";
		switch(e){
				case 1:
				eqp=eq*yi;
				cout<<eqp<<endl;
				break;
			case 2:
				eqp=eq*er;
				cout<<eqp<<endl;
				break;
			case 3: 
					eqp=eq*san;
				cout<<eqp<<endl;
				break;
			case 4:
					eqp=eq*si;
				cout<<eqp<<endl;
				break;
			case 5:
					eqp=eq*wu;
				cout<<eqp<<endl;
				break;
			case 6:
					eqp=eq*liu;
				cout<<eqp<<endl;
				break;
			case 7:
					eqp=eq*qi;
				cout<<eqp<<endl;
				break;
			case 8:
				eqp=eq*ba;
				cout<<eqp<<endl;
				break;
				 
		}
		cout<<f<<" ";
				switch(f){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		switch(f){
				case 1:
				cout<<"299 ";
				break;
			case 2:
				cout<<"12 ";
				break;
			case 3: 
				cout<<"40 ";
				break;
			case 4:
				cout<<"24 ";
				break;
			case 5:
				cout<<"80 ";
				break;
			case 6:
				cout<<"40 ";
				break;
			case 7:
				cout<<"50 ";
				break;
			case 8:
				cout<<"10 ";
				break;
			}
		cout<<fq<<"          ";
			switch(f){
				case 1:
				fqp=fq*yi;
				cout<<fqp<<endl;
				break;
			case 2:
				fqp=fq*er;
				cout<<fqp<<endl;
				break;
			case 3: 
					fqp=fq*san;
				cout<<fqp<<endl;
				break;
			case 4:
					fqp=fq*si;
				cout<<fqp<<endl;
				break;
			case 5:
					fqp=fq*wu;
				cout<<fqp<<endl;
				break;
			case 6:
					fqp=fq*liu;
				cout<<fqp<<endl;
				break;
			case 7:
					fqp=fq*qi;
				cout<<fqp<<endl;
				break;
			case 8:
				fqp=fq*ba;
				cout<<fqp<<endl;
				break;
				 
		}
		cout<<g<<" ";
				switch(g){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
			switch(g){
				case 1:
				cout<<"299 ";
				break;
			case 2:
				cout<<"12 ";
				break;
			case 3: 
				cout<<"40 ";
				break;
			case 4:
				cout<<"24 ";
				break;
			case 5:
				cout<<"80 ";
				break;
			case 6:
				cout<<"40 ";
				break;
			case 7:
				cout<<"50 ";
				break;
			case 8:
				cout<<"10 ";
				break;
			}
		cout<<gq<<"          ";
			switch(g){
				case 1:
				gqp=gq*yi;
				cout<<gqp<<endl;
				break;
			case 2:
				gqp=gq*er;
				cout<<gqp<<endl;
				break;
			case 3: 
					gqp=gq*san;
				cout<<gqp<<endl;
				break;
			case 4:
					gqp=gq*si;
				cout<<gqp<<endl;
				break;
			case 5:
					gqp=gq*wu;
				cout<<gqp<<endl;
				break;
			case 6:
					gqp=gq*liu;
				cout<<gqp<<endl;
				break;
			case 7:
					gqp=gq*qi;
				cout<<gqp<<endl;
				break;
			case 8:
				gqp=gq*ba;
				cout<<gqp<<endl;
				break;
				 
		}
		cout<<h<<" ";
				switch(h){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
			switch(h){
				case 1:
				cout<<"299 ";
				break;
			case 2:
				cout<<"12 ";
				break;
			case 3: 
				cout<<"40 ";
				break;
			case 4:
				cout<<"24 ";
				break;
			case 5:
				cout<<"80 ";
				break;
			case 6:
				cout<<"40 ";
				break;
			case 7:
				cout<<"50 ";
				break;
			case 8:
				cout<<"10 ";
				break;
			}
		cout<<hq<<"          ";
			switch(h){
				case 1:
				hqp=hq*yi;
				cout<<hqp<<endl;
				break;
			case 2:
				hqp=hq*er;
				cout<<hqp<<endl;
				break;
			case 3: 
					hqp=hq*san;
				cout<<hqp<<endl;
				break;
			case 4:
					hqp=hq*si;
				cout<<hqp<<endl;
				break;
			case 5:
					hqp=hq*wu;
				cout<<hqp<<endl;
				break;
			case 6:
					hqp=hq*liu;
				cout<<hqp<<endl;
				break;
			case 7:
					hqp=hq*qi;
				cout<<hqp<<endl;
				break;
			case 8:
				hqp=hq*ba;
				cout<<hqp<<endl;
				break;
		}
		tp=(aqp+bqp+cqp+dqp+eqp+fqp+gqp+hqp)*0.95;
		cout<<"you need to pay "<<tp<<"RM";
        	
        	
        	
        	
        	
        	
        	
        	system("pause");
        	
        	
        	
		}
        if (menu==2){
        cout<<"No          name                      quantity      \n ";
        cout<<"____________________________________________________\n ";
        cout<<a<<" ";
		switch(a){
			case 1:
				cout<<"Microwave Oven 1.5L                     ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack                         ";
				break;
			case 3: 
				cout<<"Panasonic Iron                          ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet                  ";
				break;
			case 5:
				cout<<"Rice Cooker 1L                          ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB            ";
				break;
			case 7:
				cout<<"Hair Dryer                              ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker                  ";
				break;
		}
		
		cout<<aq<<endl;
		cout<<b<<" ";
				switch(b){
			case 1:
				cout<<"Microwave Oven 1.5L                     ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack                         ";
				break;
			case 3: 
				cout<<"Panasonic Iron                          ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet                  ";
				break;
			case 5:
				cout<<"Rice Cooker 1L                          ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB            ";
				break;
			case 7:
				cout<<"Hair Dryer                              ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker                  ";
				break;
		}
		cout<<bq<<endl;
		cout<<c<<" ";
				switch(c){
				cout<<"Microwave Oven 1.5L                     ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack                         ";
				break;
			case 3: 
				cout<<"Panasonic Iron                          ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet                  ";
				break;
			case 5:
				cout<<"Rice Cooker 1L                          ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB            ";
				break;
			case 7:
				cout<<"Hair Dryer                              ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker                  ";
				break;
				 
		}
		cout<<cq<<endl;
		cout<<d<<" ";
				switch(d){
			case 1:
				cout<<"Microwave Oven 1.5L                     ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack                         ";
				break;
			case 3: 
				cout<<"Panasonic Iron                          ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet                  ";
				break;
			case 5:
				cout<<"Rice Cooker 1L                          ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB            ";
				break;
			case 7:
				cout<<"Hair Dryer                              ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker                  ";
				break;
				 
		}
		cout<<dq<<endl;
		cout<<e<<" ";
				switch(e){
			case 1:
				cout<<"Microwave Oven 1.5L                     ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack                         ";
				break;
			case 3: 
				cout<<"Panasonic Iron                          ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet                  ";
				break;
			case 5:
				cout<<"Rice Cooker 1L                          ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB            ";
				break;
			case 7:
				cout<<"Hair Dryer                              ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker                  ";
				break;
				 
		}
		cout<<eq<<endl;
		cout<<f<<" ";
				switch(f){
			case 1:
				cout<<"Microwave Oven 1.5L                     ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack                         ";
				break;
			case 3: 
				cout<<"Panasonic Iron                          ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet                  ";
				break;
			case 5:
				cout<<"Rice Cooker 1L                          ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB            ";
				break;
			case 7:
				cout<<"Hair Dryer                              ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker                  ";
				break;
				 
		}
		cout<<fq<<endl;
		cout<<g<<" ";
				switch(g){
			case 1:
				cout<<"Microwave Oven 1.5L                     ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack                         ";
				break;
			case 3: 
				cout<<"Panasonic Iron                          ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet                  ";
				break;
			case 5:
				cout<<"Rice Cooker 1L                          ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB            ";
				break;
			case 7:
				cout<<"Hair Dryer                              ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker                  ";
				break;
		}
		cout<<gq<<endl;
		cout<<h<<" ";
				switch(h){
			case 1:
				cout<<"Microwave Oven 1.5L                     ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack                         ";
				break;
			case 3: 
				cout<<"Panasonic Iron                          ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet                  ";
				break;
			case 5:
				cout<<"Rice Cooker 1L                          ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB            ";
				break;
			case 7:
				cout<<"Hair Dryer                              ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker                  ";
				break;
		}
		cout<<hq<<endl;
		goto startcus1;
		}
        if (menu==1){
        cout<<"__________________________________________________________________________\n";
        cout<<"**********   |    NO.          ITEM NAME                   |    **********\n";
        cout<<"**********   |    1.      Microwave Oven 1.5L              |    **********\n";
        cout<<"**********   |    2.      Tiers Shoe Rack                  |    **********\n";
        cout<<"**********   |    3.      Panasonic Iron                   |    **********\n";
        cout<<"**********   |    4.      Kitchen L Shape Carpet           |    **********\n";
        cout<<"**********   |    5.      Rice Cooker 1L                   |    **********\n";
        cout<<"**********   |    6.      San Disk Ultra Micro SD 32GB     |    **********\n";
        cout<<"**********   |    7.      Hair Dryer                       |    **********\n";
        cout<<"**********   |    8.      Mini Bluetooth Speaker           |    **********\n";
        cout<<"_____________|_____________________________________________|______________\n";
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
        		cout<<"____________________________________\n";
        	 cout<<a<<" ";
		switch(a){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		switch(a){
				case 1:
				cout<<"299 ";
				break;
			case 2:
				cout<<"12 ";
				break;
			case 3: 
				cout<<"40 ";
				break;
			case 4:
				cout<<"24 ";
				break;
			case 5:
				cout<<"80 ";
				break;
			case 6:
				cout<<"40 ";
				break;
			case 7:
				cout<<"50 ";
				break;
			case 8:
				cout<<"10 ";
				break;
			}
		cout<<aq<<"          ";
			switch(a){
				case 1:
				aqp=aq*yi;
				cout<<aqp<<endl;
				break;
			case 2:
				aqp=aq*er;
				cout<<aqp<<endl;
				break;
			case 3: 
					aqp=aq*san;
				cout<<aqp<<endl;
				break;
			case 4:
					aqp=aq*si;
				cout<<aqp<<endl;
				break;
			case 5:
					aqp=aq*wu;
				cout<<aqp<<endl;
				break;
			case 6:
					aqp=aq*liu;
				cout<<aqp<<endl;
				break;
			case 7:
					aqp=aq*qi;
				cout<<aqp<<endl;
				break;
			case 8:
				aqp=aq*ba;
				cout<<aqp<<endl;
				break;
				 
		}
		cout<<b<<" ";
				switch(b){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		switch(b){
				case 1:
				cout<<"299 ";
				break;
			case 2:
				cout<<"12 ";
				break;
			case 3: 
				cout<<"40 ";
				break;
			case 4:
				cout<<"24 ";
				break;
			case 5:
				cout<<"80 ";
				break;
			case 6:
				cout<<"40 ";
				break;
			case 7:
				cout<<"50 ";
				break;
			case 8:
				cout<<"10 ";
				break;
			}
		cout<<bq<<"          ";
		switch(b){
			case 1:
				bqp=bq*yi;
				cout<<bqp<<endl;
				break;
			case 2:
				bqp=bq*er;
				cout<<bqp<<endl;
				break;
			case 3: 
					bqp=bq*san;
				cout<<bqp<<endl;
				break;
			case 4:
					bqp=bq*si;
				cout<<bqp<<endl;
				break;
			case 5:
					bqp=bq*wu;
				cout<<bqp<<endl;
				break;
			case 6:
					bqp=bq*liu;
				cout<<bqp<<endl;
				break;
			case 7:
					bqp=bq*qi;
				cout<<bqp<<endl;
				break;
			case 8:
				bqp=bq*ba;
				cout<<bqp<<endl;
				break;
		}
		cout<<c<<" ";
				switch(c){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		switch(c){
				case 1:
				cout<<"299 ";
				break;
			case 2:
				cout<<"12 ";
				break;
			case 3: 
				cout<<"40 ";
				break;
			case 4:
				cout<<"24 ";
				break;
			case 5:
				cout<<"80 ";
				break;
			case 6:
				cout<<"40 ";
				break;
			case 7:
				cout<<"50 ";
				break;
			case 8:
				cout<<"10 ";
				break;
			}
		cout<<cq<<"          ";
		switch(c){
				case 1:
				cqp=cq*yi;
				cout<<cqp<<endl;
				break;
			case 2:
				cqp=cq*er;
				cout<<cqp<<endl;
				break;
			case 3: 
					cqp=cq*san;
				cout<<cqp<<endl;
				break;
			case 4:
					cqp=cq*si;
				cout<<cqp<<endl;
				break;
			case 5:
					cqp=cq*wu;
				cout<<cqp<<endl;
				break;
			case 6:
					cqp=cq*liu;
				cout<<cqp<<endl;
				break;
			case 7:
					cqp=cq*qi;
				cout<<cqp<<endl;
				break;
			case 8:
				cqp=cq*ba;
				cout<<cqp<<endl;
				break;
				 
		}
		cout<<d<<" ";
				switch(d){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		switch(d){
				case 1:
				cout<<"299 ";
				break;
			case 2:
				cout<<"12 ";
				break;
			case 3: 
				cout<<"40 ";
				break;
			case 4:
				cout<<"24 ";
				break;
			case 5:
				cout<<"80 ";
				break;
			case 6:
				cout<<"40 ";
				break;
			case 7:
				cout<<"50 ";
				break;
			case 8:
				cout<<"10 ";
				break;
			}
		cout<<dq<<"          ";
		switch(d){
				case 1:
				dqp=dq*yi;
				cout<<dqp<<endl;
				break;
			case 2:
				dqp=dq*er;
				cout<<dqp<<endl;
				break;
			case 3: 
					dqp=dq*san;
				cout<<dqp<<endl;
				break;
			case 4:
					dqp=dq*si;
				cout<<dqp<<endl;
				break;
			case 5:
					dqp=dq*wu;
				cout<<dqp<<endl;
				break;
			case 6:
					dqp=dq*liu;
				cout<<dqp<<endl;
				break;
			case 7:
					dqp=dq*qi;
				cout<<dqp<<endl;
				break;
			case 8:
				dqp=dq*ba;
				cout<<dqp<<endl;
				break;
				 
				 
		}
		cout<<e<<" ";
				switch(e){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		switch(e){
				case 1:
				cout<<"299 ";
				break;
			case 2:
				cout<<"12 ";
				break;
			case 3: 
				cout<<"40 ";
				break;
			case 4:
				cout<<"24 ";
				break;
			case 5:
				cout<<"80 ";
				break;
			case 6:
				cout<<"40 ";
				break;
			case 7:
				cout<<"50 ";
				break;
			case 8:
				cout<<"10 ";
				break;
			}
		cout<<eq<<"          ";
		switch(e){
				case 1:
				eqp=eq*yi;
				cout<<eqp<<endl;
				break;
			case 2:
				eqp=eq*er;
				cout<<eqp<<endl;
				break;
			case 3: 
					eqp=eq*san;
				cout<<eqp<<endl;
				break;
			case 4:
					eqp=eq*si;
				cout<<eqp<<endl;
				break;
			case 5:
					eqp=eq*wu;
				cout<<eqp<<endl;
				break;
			case 6:
					eqp=eq*liu;
				cout<<eqp<<endl;
				break;
			case 7:
					eqp=eq*qi;
				cout<<eqp<<endl;
				break;
			case 8:
				eqp=eq*ba;
				cout<<eqp<<endl;
				break;
				 
		}
		cout<<f<<" ";
				switch(f){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		switch(f){
				case 1:
				cout<<"299 ";
				break;
			case 2:
				cout<<"12 ";
				break;
			case 3: 
				cout<<"40 ";
				break;
			case 4:
				cout<<"24 ";
				break;
			case 5:
				cout<<"80 ";
				break;
			case 6:
				cout<<"40 ";
				break;
			case 7:
				cout<<"50 ";
				break;
			case 8:
				cout<<"10 ";
				break;
			}
		cout<<fq<<"          ";
			switch(f){
				case 1:
				fqp=fq*yi;
				cout<<fqp<<endl;
				break;
			case 2:
				fqp=fq*er;
				cout<<fqp<<endl;
				break;
			case 3: 
					fqp=fq*san;
				cout<<fqp<<endl;
				break;
			case 4:
					fqp=fq*si;
				cout<<fqp<<endl;
				break;
			case 5:
					fqp=fq*wu;
				cout<<fqp<<endl;
				break;
			case 6:
					fqp=fq*liu;
				cout<<fqp<<endl;
				break;
			case 7:
					fqp=fq*qi;
				cout<<fqp<<endl;
				break;
			case 8:
				fqp=fq*ba;
				cout<<fqp<<endl;
				break;
				 
		}
		cout<<g<<" ";
				switch(g){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
			switch(g){
				case 1:
				cout<<"299 ";
				break;
			case 2:
				cout<<"12 ";
				break;
			case 3: 
				cout<<"40 ";
				break;
			case 4:
				cout<<"24 ";
				break;
			case 5:
				cout<<"80 ";
				break;
			case 6:
				cout<<"40 ";
				break;
			case 7:
				cout<<"50 ";
				break;
			case 8:
				cout<<"10 ";
				break;
			}
		cout<<gq<<"          ";
			switch(g){
				case 1:
				gqp=gq*yi;
				cout<<gqp<<endl;
				break;
			case 2:
				gqp=gq*er;
				cout<<gqp<<endl;
				break;
			case 3: 
					gqp=gq*san;
				cout<<gqp<<endl;
				break;
			case 4:
					gqp=gq*si;
				cout<<gqp<<endl;
				break;
			case 5:
					gqp=gq*wu;
				cout<<gqp<<endl;
				break;
			case 6:
					gqp=gq*liu;
				cout<<gqp<<endl;
				break;
			case 7:
					gqp=gq*qi;
				cout<<gqp<<endl;
				break;
			case 8:
				gqp=gq*ba;
				cout<<gqp<<endl;
				break;
				 
		}
		cout<<h<<" ";
				switch(h){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
			switch(h){
				case 1:
				cout<<"299 ";
				break;
			case 2:
				cout<<"12 ";
				break;
			case 3: 
				cout<<"40 ";
				break;
			case 4:
				cout<<"24 ";
				break;
			case 5:
				cout<<"80 ";
				break;
			case 6:
				cout<<"40 ";
				break;
			case 7:
				cout<<"50 ";
				break;
			case 8:
				cout<<"10 ";
				break;
			}
		cout<<hq<<"          ";
			switch(h){
				case 1:
				hqp=hq*yi;
				cout<<hqp<<endl;
				break;
			case 2:
				hqp=hq*er;
				cout<<hqp<<endl;
				break;
			case 3: 
					hqp=hq*san;
				cout<<hqp<<endl;
				break;
			case 4:
					hqp=hq*si;
				cout<<hqp<<endl;
				break;
			case 5:
					hqp=hq*wu;
				cout<<hqp<<endl;
				break;
			case 6:
					hqp=hq*liu;
				cout<<hqp<<endl;
				break;
			case 7:
					hqp=hq*qi;
				cout<<hqp<<endl;
				break;
			case 8:
				hqp=hq*ba;
				cout<<hqp<<endl;
				break;
		}
		tp=aqp+bqp+cqp+dqp+eqp+fqp+gqp+hqp;
		if(tp>=300){
			too=tp*0.95;
				cout<<"you need to pay"<<too<<"RM";
		}
		else{
			cout<<"you need to pay"<<tp<<"RM";
		}
        	system("pause");	
		}
        if (menu==2){
        cout<<"No          name                      quantity      \n ";
        cout<<"____________________________________________________\n ";
		cout<<a<<" ";
		switch(a){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		cout<<aq<<endl;
		cout<<b<<" ";
				switch(b){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		cout<<bq<<endl;
		cout<<c<<" ";
				switch(c){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		cout<<cq<<endl;
		cout<<d<<" ";
				switch(d){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		cout<<dq<<endl;
		cout<<e<<" ";
				switch(e){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		cout<<eq<<endl;
		cout<<f<<" ";
				switch(f){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		cout<<fq<<endl;
		cout<<g<<" ";
				switch(g){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		cout<<gq<<endl;
		cout<<h<<" ";
				switch(h){
			case 1:
				cout<<"Microwave Oven 1.5L             ";
				break;
			case 2:
				cout<<"Tiers Shoe Rack             ";
				break;
			case 3: 
				cout<<"Panasonic Iron             ";
				break;
			case 4:
				cout<<"Kitchen L Shape Carpet             ";
				break;
			case 5:
				cout<<"Rice Cooker 1L             ";
				break;
			case 6:
				cout<<"San Disk Ultra Micro SD 32GB             ";
				break;
			case 7:
				cout<<"Hair Dryer             ";
				break;
			case 8:
				cout<<"Mini Bluetooth Speaker             ";
				break;
		}
		cout<<hq<<endl;
		goto startcus;
		}
        if (menu==1){
        cout<<"__________________________________________________________________________\n";
        cout<<"**********   |    NO.          ITEM NAME                   |    **********\n";
        cout<<"**********   |    1.      Microwave Oven 1.5L              |    **********\n";
        cout<<"**********   |    2.      Tiers Shoe Rack                  |    **********\n";
        cout<<"**********   |    3.      Panasonic Iron                   |    **********\n";
        cout<<"**********   |    4.      Kitchen L Shape Carpet           |    **********\n";
        cout<<"**********   |    5.      Rice Cooker 1L                   |    **********\n";
        cout<<"**********   |    6.      San Disk Ultra Micro SD 32GB     |    **********\n";
        cout<<"**********   |    7.      Hair Dryer                       |    **********\n";
        cout<<"**********   |    8.      Mini Bluetooth Speaker           |    **********\n";
        cout<<"_____________|_____________________________________________|_______________\n";
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
}
