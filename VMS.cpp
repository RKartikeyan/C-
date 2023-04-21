#include<iostream>
using namespace std;
int BJP=0, INC=0, AAP=0,BSP=0,CPI=0,NOTA=0,Voteslost=0;
int vote;

int main()

{
   cout<<"******=========VOTING MANAGEMENT SYSTEM=========*********\n";
   cout<<"--------THIS PROGRAM IS DESIGNED AND MANAGED BY: --------\n";
   cout<<"------    ****--------R KARTIKEYAN------------****   ----\n";
   cout<<"------    ****--------VANSHIKA NEGI-----------****   ----\n";
   cout<<"------    ****--------VIPUL SARASWAT----------****   ----\n";
   cout<<"------    ****-----------MUSKAN---------------****   ----\n";
   int i,n,age;
   cout<<"\n\nEnter the number of voters"<<endl;
   cin>>n;
   for (i=1;i<=n ;i++ )
   {
       cout<<"Enter Your Age"<<endl;
       cin>>age;
       if(age>=18)
       {
        cout<<"\n\n\n*****YOU ARE ELIGIBLE FOR VOTING*****\n\n\n"<<endl;
        cout<<"\nlist of political parties in DELHI\n"<<endl;
        cout<<"1.Bhartiye Janta Party"<<endl;
        cout<<"2.Indian National Congress"<<endl;
        cout<<"3.Aam Aadmi Party"<<endl;
        cout<<"4.Bahujan Samaj Party"<<endl;
        cout<<"5.Communist Party Of India"<<endl;
        cout<<"6.NOTA"<<endl;



        cout<<"\n\n\n--------SELECT YOUR POLITICAL PARTY--------\n\n\n"<<endl;

       }
       else
       {
           cout<<"You are not eligible for voting"<<endl;
       }
    if(age>=18)
    {
      cout<<"Enter The Party Number For Voting :\t";
      cin>>vote;
      switch(vote)
      {
         case 1: BJP++;
         break;

         case 2: INC++;
         break;

         case 3:AAP++;
         break;

         case 4:BSP++;
         break;

         case 5:CPI++;
         break;

         case 6:NOTA++;
         break;

         default:Voteslost++;


      }
    }

    }
cout<<"Number of votes for BJP:"<<BJP<<endl;
cout<<"Number of votes for INC:"<<INC<<endl;
cout<<"Number of votes for AAP:"<<AAP<<endl;
cout<<"Number of votes for BSP:"<<BSP<<endl;
cout<<"Number of votes for CPI:"<<CPI<<endl;
cout<<"Number of Person Who selected NOTA:"<<NOTA<<endl;
return 0;
}

