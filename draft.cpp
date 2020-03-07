#include <stdio.h>
#include <iostream>
#include <string>
#include <stdio.h>
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

    printf("Please input the number:");

    scanf("%d",&code);

    printf("Please input the quantity");

    scanf("%d",&number);

    int flag = 0;
    for (int i = 0; i < 3; i ++) {
        if (goods[i].code == code) {
            goods[i].number +=number;
            flag = 1;
            printf("The items has been added successfully! !!\n");
            printf("*****************************\n");

            break;

        }

    }

    if (flag == 0) {

            printf("Sorry, we do not have the items you want to buy\n");

        }

}



void removeFromCart(Goods *goods){ 

    //goodList();

    int code = 0,number = 0;

    printf("Please enter the item number you want to remove:");

    scanf("%d",&code);

    printf("Please enter the quantity you want to remove:");

    scanf("%d",&number);

    int flag = 0;

    for (int i = 0; i < 3; i ++) {

        if (goods[i].code == code && goods[i].number - number > 0) {

            goods[i].number -=number;

            flag = 1;

            printf("Successfully modified!\n");

            printf("*****************************\n");

            break;

        }

    }

    if (flag == 0) {

        printf("There are not enough items in the shopping cart.\n");

    }

}



int payTheBill(Goods *goods){

    printf("***************************Items in current cart***********************\n");

    double sum = 0;

    for (int i = 0; i < 3; i++) {

        if (goods[i].number > 0) {

            printf("%d\t%s    \t%.2lf\t\t%.2lf\t\t%d\t\t%.2lf\n",goods[i].code,goods[i].name,goods[i].price,goods[i].discount,goods[i].number,goods[i].number*goods[i].discount*goods[i].price);

            sum += goods[i].number*goods[i].discount*goods[i].price;

        }

    }

    printf("Current total is%.2f\n",sum);

    printf("***************************************************************\n");

    return 0;

}



void showTheCart(Goods *goods){//?????

    printf("***************************Items in current cart***********************\n");

    double sum = 0;

    for (int i = 0; i < 3; i++) {

        if (goods[i].number > 0) {

            printf("%d\t%s    \t%.2lf\t\t%.2lf\t\t%d\t\t%.2lf\n",goods[i].code,goods[i].name,goods[i].price,goods[i].discount,goods[i].number,goods[i].number*goods[i].discount*goods[i].price);

            sum += goods[i].number*goods[i].discount*goods[i].price;

        }

    }

    printf("\n\t\tCurrent total is%.2f\n",sum);

    printf("***************************************************************\n");

}
using namespace std;
int main(int argc, const string * argv[]) {
    Goods goods[8] = {

        {1,"Microwave Oven 1.5L",299,0,0,299},
        {2,"Tiers Shoe Rack  ",40,0,0,299},
        {3,"Panasonic Iron",80,0,0,299}
    	
        
        

    }; 


    mainInterface(goods);
    printf("Thank you for your patronage.");
    return 0;
}
