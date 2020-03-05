#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
void name(); //the function of name.
void menu(); //the function of menu that users can choose.
void discount();//the function of judge discount.
void item();//the function of item list.
void code();//the function of the staff code. 

int y,j = 0 , n = 0, k = 0, sum1 = 0, sum2;
string nama,pc;
string i[8]={"Microwave Oven 1.5L",
"Panasonic Iron",
"Rice Cooker 1L",
"Hair Dryer",
"Tiers Shoe Rack",
"Kitchen L Shape Carpet",
"San Disk Ultra Micro SD 32GB",
"Mini Bluetooth Speaker"
}; 
int totalprice,lastprice,p[8]={299,40,80,50,12,24,40,10};
int choose ,choose1, choose2, choose3, choose4, choose5;

int main(){
//	code();
	for (y = 0; y<8; y++)
		cout<<*(y + i)<<endl; 
	name();
	menu();
	switch(choose){
		case 1:
			
		case 2:
			
		case 3:
			
		case 4:
			exit(0);
		
			break; 
	}
	
	

}






void name(){
	cout<<"Please input your name:"<<endl; 
	cin>>nama;
}
void menu(){
	cout<<"***********************************"<<endl;
	cout<<"*****Welcome to online shopping****"<<endl;
	cout<<"***********************************"<<endl;
	cout<<"   *****   1.shop list *****"<<endl;
	cout<<"   ****  2.shopping cart *****"<<endl;	
	cout<<"   *****  3.staff only *****"<<endl;
	cout<<"   ********  4.exit *******"<<endl;
	cout<<"***********************************"<<endl;
	cin>>choose;
} 
void discount(){
	if(totalprice>=300){
		lastprice=totalprice*0.05+totalprice;
	}
	else{
		lastprice=totalprice;
	}
}
void item(){

}
void code(){
	cout<<"Please input your code,if not,you can input \"no\""<<endl;
	cin>>pc;
} 
