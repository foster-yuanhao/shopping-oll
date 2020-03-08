#include <stdio.h>
#include <iostream>
#include <string>
#include<iostream>
using namespace std;
typedef struct Goods{
int code;
char name[20];
double price;
double discount;
int number;
double totalAccount;
}
Goods;
void mainInterface(Goods *goods);
void menu();
void goodList();
void addToCart(Goods *goods);
void removeFromCart(Goods *goods);
int payTheBill(Goods *goods);
void showTheCart(Goods *goods);
void menu(){
    	cout<<"\n \t\t\t=========================\n";
        cout<<"\n\t\t\t   WELCOME TO THE SHOP  \n";
        cout<<"\n \t\t\t=========================\n\n";
        cout<<"\n \t\t\t* * * * * * * * * * * * ";
        cout<<"\n\t\t\t  1. SHOPPING LIST";
        cout<<"\n\t\t\t  2. ADD ITEMS";
        cout<<"\n\t\t\t  3. DEL ITEMS";
		cout<<"\n\t\t\t  4. SHOPPING CART";
		cout<<"\n\t\t\t  5. CHECK OUT";
        cout<<"\n\t\t\t  6. EXIT";
        cout<<"\n\t\t\t* * * * * * * * * * * *\n";
       

}



void goodlist(){
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
	    for (int b=0;b<8;b++)
		cout<<shopping[b]<<m[b]<<"RM"<<endl;
}
void mainInterface(Goods *goods){
int select = 0;
do{
menu();
cout<<"\n\t\t\t Choose a number: ";
scanf("%d",&select);
switch (select) {
      case 6:
			
				exit(0); 

            case 1:

                goodlist();

                break;

            case 5:

                select = payTheBill(goods);

                break;

            case 3:

                removeFromCart(goods);

                break;

            case 2:

                addToCart(goods);

                break;

            case 4:

                showTheCart(goods);

                break;

            default:

                cout<<"error!!\nPlease enter again:\n";
                break;

        }

    }

    while (select != 0) ;

}



void addToCart(Goods *goods){
    //goodList();

    int code = 0, number = 0;

    cout<<("Please choose the item:");

    cin>>code;

    cout<<"How much do you want ?";

    cin>>number;

    int flag = 0;
    for (int i = 0; i < 3; i ++) {
        if (goods[i].code == code) {
            goods[i].number +=number;
            flag = 1;
            cout<<"The items have been added successfully! !!\n";
            cout<<"*****************************\n";

            break;

        }

    }

    if (flag == 0) {

            cout<<"Sorry, we do not have the items you want to buy\n";

        }

}



void removeFromCart(Goods *goods){ 

    //goodList();

    int code = 0,number = 0;

    cout<<"Please enter the number of the item you want to remove:";

    cin>>code;

    cout<<"How much you want to remove ?";

    cin>>number;

    int flag = 0;

    for (int i = 0; i < 3; i ++) {

        if (goods[i].code == code && goods[i].number - number > 0) {

            goods[i].number -=number;

            flag = 1;

            cout<<"Successfully modified!\n";

            cout<<"*****************************\n";

            break;

        }

    }

    if (flag == 0) {

        cout<<"There are not enough items in the shopping cart.\n";

    }

}



int payTheBill(Goods *goods){

    cout<<"***************************Items in current cart***********************\n";

    double sum = 0;

    for (int i = 0; i < 3; i++) {

        if (goods[i].number > 0) {

            cout<<goods[i].code,goods[i].name,goods[i].price,goods[i].discount,goods[i].number,goods[i].number*goods[i].discount*goods[i].price;

            sum += goods[i].number*goods[i].discount*goods[i].price;

        }

    }

    cout<<"Current total is\n"<<sum;

    cout<<"***************************************************************\n";

    return 0;

}



void showTheCart(Goods *goods){//?????

    cout<<("***************************Items in current cart***********************\n");

    double sum = 0;

    for (int i = 0; i < 3; i++) {

        if (goods[i].number > 0) {

            cout<<goods[i].code,goods[i].name,goods[i].price,goods[i].discount,goods[i].number,goods[i].number*goods[i].discount*goods[i].price;

            sum += goods[i].number*goods[i].discount*goods[i].price;

        }

    }

    cout<<"\n\t\tCurrent total is\n"<<sum;

    cout<<"***************************************************************\n";

}
using namespace std;
int main(int argc, const char * argv[]) {
    Goods goods[8] = {

        {1,"Microwave Oven 1.5L",299,0,0,299},
        {2,"Tiers Shoe Rack  ",40,0,0,299},
        {3,"Panasonic Iron",80,0,0,299}
    	
        
        

    }; 


    mainInterface(goods);
    cout<<"Thanks for choosing us.";
    return 0;
}
