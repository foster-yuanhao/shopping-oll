#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#define T 10000//Declear constant T=10000
using namespace std;//using namespace std
double normaldanmemberdc(double price){  //Customer and member discount function
	double tp;
	if(price>=300){
		tp=price*0.95;
	}
	else{
		tp=price;
	}
	return tp;
}
double staff(double price){  //Staff discount function
	double tp;
	if(price>=5 && price<=30){
		tp=price-1;
	}
	else if(price>=31 && price<=99){
		tp=price-5;
	}
	else if(price>=100){
		tp=price-10;
	}
	else{
		tp=price;
	}
	return tp;
}
void menu(){ //Main menu
        cout<<"\n \t\t\t=========================================\n";
        cout<<"\n\t\t\t----------WELCOME TO THE SHOP-------------\n";
        cout<<"\n \t\t\t=========================================\n";
        cout<<"\n \t\t\t    * * * * * * * * * * * * ";
        cout<<"\n\t\t\t       1. SHOPPING LIST";
        cout<<"\n\t\t\t       2. CHECK OUT";
        cout<<"\n\t\t\t       3. EXIT";
        cout<<"\n\t\t\t    * * * * * * * * * * * *\n";
}
void read(){//Read product list from file function
    int i,datalen=0;
    int t=1;
    string num[36];
    ifstream file("products.txt");
    while( ! file.eof() )
    file>>num[datalen++];
		for(i=3;i<datalen;i=i+3){
			cout<<t<<"    "<<num[i]<<"     "<<num[i+1]<<"     "<<num[i+2]<<endl;
		t++;
		}
    file.close();
}
int main(){
	int choose=0,additems=0,aaa=0,i=0;
	int no[T]={0},qu[T]={0};
	string jud;
	int loop=0,loop2=0;
	double ttt=0;
	int y=0,qq=0;
	double mmp[8]={250,35,75,47,12,24,35,10};
	double npp[8]={299,40,80,50,12,24,40,10};
	double a[T]={0},b[T]={0},c[T]={0},d[T]={0},e[T]={0},f[T]={0},g[T]={0},h[T]={0};
	double sumt1=0,sumt2=0,sumt3=0,sumt4=0,sumt5=0,sumt6=0,sumt7=0,sumt8=0,summ=0;
	caidan:
	menu();
	cin>>choose;
	if(choose==1){
		cout<<"No.     Items      price    Member_price  "<<endl;
    cout<<"____________________________________________________"<<endl;
		read();
cout<<"Do you want to continue add items?Anynumber for YES,2 for NO";
cin>>additems;
if(additems==2){
	goto caidan;
}
else{
	for(int t=0;additems!=2;cin>>additems){
		cc:
		cout<<"Enter the item number";
		cin>>no[t];
		if(!(no[t]==1 || no[t]==2 || no[t]==3 || no[t]==4 || no[t]==5 || no[t]==6 || no[t]==7 || no[t]==8)){
			cout<<"Please input the correct number"<<endl;
			goto cc;
		}
		cout<<"How many items do you want?";
		cin>>qu[t];
		t++;
		cout<<"Do you want to continue add items?Anynumber for YES,2 for NO";
	}
	goto caidan;
}
}
else if(choose==2){
cout<<"Please input your code.(if you don't have,input anything.)"<<endl;
cin>>jud;
if(jud=="STAFF"){  //from line95-line197 for staff checkout part
cout<<"Welcome , you are our staff."<<endl;
cout<<"Name        Prise       Quantity     Totalprise   \n";
cout<<"____________________________________________________\n";
for(int kl=0;kl<T;kl++){
	if(no[kl]==0){
		cout<<"";
	}
	else if(no[kl]==1){
		cout<<"Microwave\t";
		cout<<npp[0]<<"\t\t";
		cout<<qu[kl]<<"\t\t";
		a[kl]=npp[0]*qu[kl];
		cout<<a[kl]<<endl;
	}
	else if(no[kl]==2){
		cout<<"Iron\t";
		cout<<npp[1]<<"\t\t";
		cout<<qu[kl]<<"\t\t";
		b[kl]=npp[1]*qu[kl];
		cout<<b[kl]<<endl;
	}
	else if(no[kl]==3){
		cout<<"Rice_cooker\t";
		cout<<npp[2]<<"\t\t";
		cout<<qu[kl]<<"\t\t";
		c[kl]=npp[2]*qu[kl];
		cout<<c[kl]<<endl;
	}
	else if(no[kl]==4){
		cout<<"Hair_Dryer\t";
		cout<<npp[3]<<"\t\t";
		cout<<qu[kl]<<"\t\t";
		d[kl]=npp[3]*qu[kl];
		cout<<d[kl]<<endl;
	}
	else if(no[kl]==5){
		cout<<"Shoe_Rack\t";
		cout<<npp[4]<<"\t\t";
		cout<<qu[kl]<<"\t\t";
		e[kl]=npp[4]*qu[kl];
		cout<<e[kl]<<endl;
	}
		else if(no[kl]==6){
			cout<<"Kitchen_Carpet\t";
			cout<<npp[5]<<"\t\t";
			cout<<qu[kl]<<"\t\t";
			f[kl]=npp[5]*qu[kl];
			cout<<f[kl]<<endl;
		}
		else if(no[kl]==7){
			cout<<"MicroSD\t";
			cout<<npp[6]<<"\t\t";
			cout<<qu[kl]<<"\t\t";
			g[kl]=npp[6]*qu[kl];
			cout<<g[kl]<<endl;
		}
			else if(no[kl]==8){
				cout<<"Mini_Speaker\t";
				cout<<npp[7]<<"\t\t";
				cout<<qu[kl]<<"\t\t";
				h[kl]=npp[7]*qu[kl];
				cout<<h[kl]<<endl;
			}
	}//Use no. To determine the product name
Sleep(1000);//wait 1000ms
for(i=0;i<T;i++){
        sumt1=sumt1+a[i];
        sumt2=sumt2+b[i];
        sumt3=sumt3+c[i];
        sumt4=sumt4+d[i];
        sumt5=sumt5+e[i];
        sumt6=sumt6+f[i];
		sumt7=sumt7+g[i];
		sumt8=sumt8+h[i];
		}  //Array sum
summ=sumt1+sumt2+sumt3+sumt4+sumt5+sumt6+sumt7+sumt8;//Array sum
cout<<"You need to pay"<<staff(summ)<<endl;
cout<<"Thank you!";
}
else if(jud=="MEMBER"){//from line198-line299 for member checkout part
cout<<"Welcome,you are our member"<<endl;
cout<<"Name        Prise       Quantity     Totalprise   \n";
cout<<"____________________________________________________\n";
for(int kl=0;kl<T;kl++){
	if(no[kl]==0){
		cout<<"";
	}
	else if(no[kl]==1){
		cout<<"Microwave\t";
		cout<<mmp[0]<<"\t\t";
		cout<<qu[kl]<<"\t\t";
		a[kl]=mmp[0]*qu[kl];
		cout<<a[kl]<<endl;
	}
	else if(no[kl]==2){
		cout<<"Iron\t";
		cout<<mmp[1]<<"\t\t";
		cout<<qu[kl]<<"\t\t";
		b[kl]=mmp[1]*qu[kl];
		cout<<b[kl]<<endl;
	}
	else if(no[kl]==3){
		cout<<"Rice_cooker\t";
		cout<<mmp[2]<<"\t\t";
		cout<<qu[kl]<<"\t\t";
		c[kl]=mmp[2]*qu[kl];
		cout<<c[kl]<<endl;
	}
	else if(no[kl]==4){
		cout<<"Hair_Dryer\t";
		cout<<mmp[3]<<"\t\t";
		cout<<qu[kl]<<"\t\t";
		d[kl]=mmp[3]*qu[kl];
		cout<<d[kl]<<endl;
	}
	else if(no[kl]==5){
		cout<<"Shoe_Rack\t";
		cout<<mmp[4]<<"\t\t";
		cout<<qu[kl]<<"\t\t";
		e[kl]=mmp[4]*qu[kl];
		cout<<e[kl]<<endl;
	}
		else if(no[kl]==6){
			cout<<"Kitchen_Carpet\t";
			cout<<mmp[5]<<"\t\t";
			cout<<qu[kl]<<"\t\t";
			f[kl]=mmp[5]*qu[kl];
			cout<<f[kl]<<endl;
		}
		else if(no[kl]==7){
			cout<<"MicroSD\t";
			cout<<mmp[6]<<"\t\t";
			cout<<qu[kl]<<"\t\t";
			g[kl]=mmp[6]*qu[kl];
			cout<<g[kl]<<endl;
		}
			else if(no[kl]==8){
				cout<<"Mini_Speaker\t";
				cout<<mmp[7]<<"\t\t";
				cout<<qu[kl]<<"\t\t";
				h[kl]=mmp[7]*qu[kl];
				cout<<h[kl]<<endl;
			}
	}//Use no. To determine the product name
	Sleep(1000);
for(i=0;i<T;i++){
        sumt1=sumt1+a[i];
        sumt2=sumt2+b[i];
        sumt3=sumt3+c[i];
        sumt4=sumt4+d[i];
        sumt5=sumt5+e[i];
        sumt6=sumt6+f[i];
		sumt7=sumt7+g[i];
		sumt8=sumt8+h[i];
		}//Array sum
summ=sumt1+sumt2+sumt3+sumt4+sumt5+sumt6+sumt7+sumt8;//Array sum
cout<<"You need to pay"<<normaldanmemberdc(summ)<<endl;
cout<<"Thank you!";
}
else{//from line300-line401 for customer checkout part
	cout<<"Welcome,you are our customer."<<endl;
	cout<<"Name        Prise       Quantity     Totalprise   \n";
	cout<<"____________________________________________________\n";
	for(int kl=0;kl<T;kl++){
	if(no[kl]==0){
		cout<<"";
	}
	else if(no[kl]==1){
		cout<<"Microwave\t";
		cout<<npp[0]<<"\t\t";
		cout<<qu[kl]<<"\t\t";
		a[kl]=npp[0]*qu[kl];
		cout<<a[kl]<<endl;
	}
	else if(no[kl]==2){
		cout<<"Iron\t";
		cout<<npp[1]<<"\t\t";
		cout<<qu[kl]<<"\t\t";
		b[kl]=npp[1]*qu[kl];
		cout<<b[kl]<<endl;
	}
	else if(no[kl]==3){
		cout<<"Rice_cooker\t";
		cout<<npp[2]<<"\t\t";
		cout<<qu[kl]<<"\t\t";
		c[kl]=npp[2]*qu[kl];
		cout<<c[kl]<<endl;
	}
	else if(no[kl]==4){
		cout<<"Hair_Dryer\t";
		cout<<npp[3]<<"\t\t";
		cout<<qu[kl]<<"\t\t";
		d[kl]=npp[3]*qu[kl];
		cout<<d[kl]<<endl;
	}
	else if(no[kl]==5){
		cout<<"Shoe_Rack\t";
		cout<<npp[4]<<"\t\t";
		cout<<qu[kl]<<"\t\t";
		e[kl]=npp[4]*qu[kl];
		cout<<e[kl]<<endl;
	}
		else if(no[kl]==6){
			cout<<"Kitchen_Carpet\t";
			cout<<npp[5]<<"\t\t";
			cout<<qu[kl]<<"\t\t";
			f[kl]=npp[5]*qu[kl];
			cout<<f[kl]<<endl;
		}
		else if(no[kl]==7){
			cout<<"MicroSD\t";
			cout<<npp[6]<<"\t\t";
			cout<<qu[kl]<<"\t\t";
			g[kl]=npp[6]*qu[kl];
			cout<<g[kl]<<endl;
		}
			else if(no[kl]==8){
				cout<<"Mini_Speaker\t";
				cout<<npp[7]<<"\t\t";
				cout<<qu[kl]<<"\t\t";
				h[kl]=npp[7]*qu[kl];
				cout<<h[kl]<<endl;
			}
	}//Use no. To determine the product name
	Sleep(1000);
for(i=0;i<T;i++){
        sumt1=sumt1+a[i];
        sumt2=sumt2+b[i];
        sumt3=sumt3+c[i];
        sumt4=sumt4+d[i];
        sumt5=sumt5+e[i];
        sumt6=sumt6+f[i];
		sumt7=sumt7+g[i];
		sumt8=sumt8+h[i];
		}//Array sum
summ=sumt1+sumt2+sumt3+sumt4+sumt5+sumt6+sumt7+sumt8;//Array sum
cout<<"You need to pay"<<normaldanmemberdc(summ)<<endl;
cout<<"Thank you!";
}
}
else if(choose==3){//exit
		exit(1);
	}
}
