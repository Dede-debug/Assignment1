#include <iostream>
# include <cmath>
using namespace std;

int main(){

    string item_prices;
int PrinterPrice = 100;
int PhonePrice = 200;
 int TablePrice = 150;
 const int vat =0.12;
 float payment;
int item1, item2, item3;


cout << "Welcome To Our Supermarket"<<endl;

string Customer_Name;
cout << "please enter your name"<<endl;
getline(cin,Customer_Name);

cout<< "items available"<<endl;
cout <<"1."<<"Printer"<<endl;
cout <<"2."<<"Phone"<<endl;
cout <<"3."<<"Table"<<endl;

string Unique_ID;
cout << "please enter your ID" <<endl;
cin >>Unique_ID;


string patronage;
cout << "please what do you want to patronize?" <<endl;
cin >>patronage;

double Your_Money;
cout<< "enter your total money"<<" "<< endl;
cin >> Your_Money;

if (Your_Money < PrinterPrice or PhonePrice or TablePrice)
    {
    cout << "sorry you cant patronize"<<endl;
    }
    else if(Your_Money == PrinterPrice)
    {
       cout<<"continue your patronage"<<endl;
    }

cout << "please enter the number of printer you wish to buy?" <<endl;
cin >>item1;
cout << " please enter the number of phone you wish to buy ?" <<endl;
cin >>item2;
cout << "please enter the number of table do you wish to buy?" <<endl;
cin >>item3;



int total_amount =((item1)+(item2)+(item3));
int total = ((vat*total_amount)+(total_amount));

cout<<"the total of items you wish to buy will cost = $";



       cout<<"OUR SUPERMARKET"<<endl;
       cout<<"name"<<endl;
       cout<<"identity"<<endl;
       cout<<"printer =$"<<endl;
       cout<<item1<<endl;
       cout<<"phone =$"<<endl;
       cout<<item2<<endl;
       cout<<"table= $"<<endl;
       cout<<item3<<endl;
       cout<<"vat amount=$"<<endl;
       cout<<vat<<endl;
       cout<<"total amount paid=$"<<endl;
       cout<<payment<<endl;

       if (payment==total)
       {
          cout<<"thank you for patronizing"<<endl;
       }
    else if (payment>total)
        {
    cout<<"your change is=$"<<endl;
    cout<< "balance"<<endl;
        }




return 0;
}
