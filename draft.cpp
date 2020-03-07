#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>
using namespace std;
void menu(); //the function of menu that users can choose.
void discount();//the function of judge discount.
void item();//the function of item list.
void code();//the function of the staff code.
void cart();
void back(); 
void addinfo();
void add();
void cadd();


int y,j[8]={1,2,3,4,5,6,7,8}, n[8], k = 1,lo, s,u;
string nama,pc;
string i[8]={

"1.        Microwave Oven 1.5L                 ",
"2.        Tiers Shoe Rack                     ",
"3.        Panasonic Iron                      ",
"4.        Kitchen L Shape Carpet              ",
"5.        Rice Cooker 1L                      ",
"6.        San Disk Ultra Micro SD 32GB        ",
"7.        Hair Dryer                          ",
"8.        Mini Bluetooth Speaker              ",
};
int totalprice,lastprice,p[8]={299,40,80,50,12,24,40,10};
int choose ,choose1, choose2, choose3, choose4, choose5;

int main(){
/*	code();
if (!strcmp(pc.c_str(), "staff"))
    cout<<"staff";
else if (!strcmp(pc.c_str(), "no"))
    cout<<"no";
else
   cout<<"wrong";
   */

	menu();
	

	
	

}







void menu(){
	    cout<<"\n \t\t\t=========================\n";
        cout<<"\n\t\t\t   WELCOME TO THE SHOP  \n";
        cout<<"\n \t\t\t=========================\n\n";
        cout<<"\n \t\t\t* * * * * * * * * * * * ";
        cout<<"\n\t\t\t  1. SHOPPING LIST";
        cout<<"\n\t\t\t  2. SHOPPING CART";
        cout<<"\n\t\t\t  3. EXIT";
        cout<<"\n\t\t\t* * * * * * * * * * * *\n";
        cout<<"\n\t\t\t Enter Your choice: ";
	
	cin>>choose;
	switch(choose){
		case 1:
 			
		item();
		cadd();
		
		back();
		
		switch(choose1){
			case 1:
				menu();
			case 2:
				exit(0);
				break;
		}
		
		case 2:
		cart();	
		case 3:
		exit(0);
		
		break; 
} 
}
void discount(){
	if(totalprice>=300){
		lastprice=totalprice*0.95;
	}
	else{
		lastprice=totalprice;
	}
}
void item(){
cout<<"*********************************************"<<endl;
	cout<<"   NO.                     Items                         Price *********"<<endl;
		for (y = 0; y<8; y++)
	cout<<"   "<<*(y + i)<<"********"<<*(y + p)<<"********"<<endl; 
}
void code(){
	cout<<"Please input your code,if not,you can input \"no\""<<endl;
	cin>>pc;
} 
void cart(){
	
	
}
void addinfo(){
	cout<<"Please input a number that you want to add to your cart."<<endl;
	cin>>n[0];

}
void add(){
	cout<<"Do you want to continue add the items?y(1) or n(2)"<<endl;
	cin>>s;
		switch(s){
	case 2:
		menu();
		break;
}
}
void cadd(){
	addinfo();
	add();
	cout<<"Please input the number"<<endl;
		cin>>n[1];
		add();
	cout<<"Please input the number"<<endl;
		cin>>n[2];
		add();
	cout<<"Please input the number"<<endl;
		cin>>n[3];
		add();
	cout<<"Please input the number"<<endl;
		cin>>n[4];
		add();
	cout<<"Please input the number"<<endl;;
		cin>>n[5];
		add();
	cout<<"Please input the number"<<endl;
		cin>>n[6];
		add();
	cout<<"Please input the number"<<endl;
		cin>>n[7];
}
void back(){
	cout<<"If you want to go back to the menu,please input 1"<<endl;
	cout<<"If you want exit the program,please input 2"<<endl;
	cin>>choose1;
}
