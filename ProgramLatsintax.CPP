#include<iostream.h>
#include<conio.h>
 void main()
{
int bil;
cout<<"Masukan Bilangan : ";cin>>bil;
switch(bil)
{
	case 1 : cout<<"Anda memasukkan bil.satu";
   		   break;
   case 2 : cout<<"Anda memasukkan bil.dua";
   			break;
   case 3 : cout<<"Anda memasukkan bil.tiga";
   	      break;
   default : cout<<"Anda memasukkan bil selain 1,2,3";
   		    break;
             }
getch();
}
