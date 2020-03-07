#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <cstring>
using namespace std; 

void name(); //the function of name.
void menu(); //the function of menu that users can choose.
void discount();//the function of judge discount.
void item();//the function of item list.
void code();//the function of the staff code (The code is 505).
void cart();
void back(); 
void addinfo();
void add();
void cadd();

int a,b,c,n[8],k,s;
int m[8]={
299,
12,
40,
24,
80,
40,
50,
10,
};
string nama,pc;
string shopping[8]={

"1.        Microwave Oven 1.5L                 ",
"2.        Tiers Shoe Rack                     ",
"3.        Panasonic Iron                      ",
"4.        Kitchen L Shape Carpet              ",
"5.        Rice Cooker 1L                      ",
"6.        San Disk Ultra Micro SD 32GB        ",
"7.        Hair Dryer                          ",
"8.        Mini Bluetooth Speaker              ",
};


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
	
}



int main (){
	code();
if (!strcmp(pc.c_str(), "505"))
    cout<<"        you are staff        "<<endl;
else if (!strcmp(pc.c_str(), "no"))
    cout<<"no";
else
   cout<<"\n\t\t\t  The code isn't correct        ";
	menu();
	cin>>a;
	switch (a){
		case 1:
	    for (b=0;b<8;b++)
		cout<< shopping[b]<<m[b]<<"RM"<<endl;
			
		break;
		case 2:
			cout<< "shopping cart"<<endl;
			
		break;
		case 3:
		exit(0);
	}

	add();
	addinfo();
	cadd();
	
	
	
	
	

}
void code(){
	cout<<"Please input your staff code"<<endl;
	cin>>pc;
} 
void addinfo(){
	cout<<"Please input a number that you want to add to your cart."<<endl;
	cin>>n[0];

}
void add(){
	cout<<"Do you want to continue add the items?y(1) or n(2)"<<endl;
	cin>>s;
	switch(s){
	case 1:
		cadd();
		break;
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

