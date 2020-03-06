#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
void name(); //the function of name.
void menu(); //the function of menu that users can choose.
void discount();//the function of judge discount.
void item();//the function of item list.
void code();//the function of the staff code.
void cart();
void back(); 
void addinfo();
void add();


int y,j[8]={1,2,3,4,5,6,7,8}, n[8], k = 1,lo, sum1 = 0, sum2;
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
	
//	name();
	lable:
	menu();
	switch(choose){
		case 1:
 			
		item();
		addinfo();
		add();
		for(lo=0;lo<8;lo++)
		cout<<n[lo];
		/*back();
		switch(choose1){
			case 1:
				goto lable;
			case 2:
				exit(0);
				break;
		}
		
		case 2:
		cart();	
		case 3:
		exit(0);
		
		*/	break; 
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
	cout<<"   ********  3.exit *******"<<endl;
	cout<<"***********************************"<<endl;
	cin>>choose;
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
	cout<<"**NO.****Items               Price *********"<<endl;
		for (y = 0; y<8; y++)
	cout<<"**"<<*(y + j)<<"**"<<*(y + i)<<"********"<<*(y + p)<<"********"<<endl; 
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
while(k<8){
cout<<"The item has been added to your shopping cart,if you want to add another item,please choose the number";
cin>>n[k];
++k;
}
}
void back(){
	cout<<"If you want to go back to the menu,please input 1"<<endl;
	cout<<"If you want exit the program,please input 2"<<endl;
	cin>>choose1;
}
