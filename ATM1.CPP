#include<iostream.h>
#include<conio.h>
void showmenu()
{  cout<<"*****MENU*****"<<endl;
   cout<<"1.CHECK THE BALANCE"<<endl;
   cout<<"2.DEPOSIT"<<endl;
   cout<<"3.WITHDRAWAL"<<endl;
   cout<<"4.EXIT"<<endl;
   cout<<"_______________"<<endl;
}
void main()
{ int option;
  double balance=500;
  double deposit;
  double withdraw;
  do
  { showmenu();
    cout<<" ENTER THE OPTION :";
    cin>>option;
    clrscr();
    switch(option)
    {  case 1:cout<<"YOUR BALANCE IS:"<<balance<<"rupees"<<endl;
       break;
       case 2:cout<<"DEPOSIT AMOUNT:";
       cin>>deposit;
       balance+=deposit;
       break;
       case 3:cout<<"YOUR WITHDRAWAL AMOUNT:";
       cin>>withdraw;
       if(withdraw<=balance)
	 balance-=withdraw;
       else
	 cout<<"SORRY, NOT ENOUGH BALANCE"<<endl;
       break;
    }
  }while(option!=4);
 getch();
}
