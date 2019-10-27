#include<iostream>
#include<fstream>
#include<conio>
#include<stdlib.h>
#include<dos.h>
#include<stdio.h>
#include<string.h>
void player1serve();
void ballin();
void player1serve2();
void player2serve();
void player2serve2();
void frontpage();
    char gamescore[5][6]={"0","15","30","40","FIN"};
    int gs1=0,gs2=0,ss1=0,ss2=0,os1=0,os2=0;
    int q,force1=0,unforce1=0,ace1=0,ace2=0,let1=0,let2=0,f=0,force2=0,unforce2=0;
    int ch,fault1=0,fault2=0,winner1=0,winner2=0,u,won,rally=0,t=63;
    char p1n[20],p2n[20],pla1[20],pla2[20] ;
    int i=0,j=0,k=26;

    class player
{

    int ace;
    int fault;
    int winner;
    char pname[20];
    public:
    void display();
   void give(char a[])
   {
     strcpy(pname,a);

	}
   void assign()
   {
     if(q==0)
      {
	ace=ace1;
	fault=fault1;
	winner=winner1;
      }
     else
     {
	ace=ace2;
	fault=fault2;
	winner=winner2;
     }
     ofstream f("tennis.txt",ios::app);
	f.write((char*)this,sizeof(player));
   }
}p1,p2;


void player :: display()
{ char n[20];
  cout<<"ENTER NAME";
  gets(n);
     clrscr();
    ifstream fin("tennis.txt",ios::in| ios::binary);
    int flag=0;
    while(fin)
    {
    fin.read((char*)this,sizeof(player));
    if(strcmp(pname,n)==0)
    {
      cout<<"PLAYER NAME "<<pname<<endl;
      cout<<"NO. OF ACE"<<ace<<endl;
      cout<<"NO. OF FAULTS"<<fault<<endl;
      cout<<"NO. OF WINNER"<<winner<<endl;
      flag=1 ;
    }
     }
     if(flag==0)
     {
       cout<<"SORRY THIS PALYER DOES NOT EXIST";
       frontpage();
      }
}


void after()
{
   clrscr();
 gotoxy(1,16);
 cout<<"INFORMATION IS GETTING RECORDED"<<endl;
 cout<<"PLEASE WAIT..............";
  q=0   ;
p1.assign();
q=1         ;
p2.assign();
}

int play()
{

    gotoxy(1,18)  ;
     cout<<"INPUT HERE :";
     cin>>ch;
    return ch;
}


   void draw()
   {
       gotoxy(0,0)     ;
       cout<<char(218);
       for(int i= 0; i<73; i++)
       {
	  if(i==55)
	     cout<<char(194);
	  else if(i==61)
	     cout<<char(194);
	       else if(i==67)
	    cout<<char(194);
		     else
	 cout<<char(196);

	 }    cout<<char(191);
      for(int j=2;j<=10;j++)
       {
	  gotoxy(1,j);
	  cout<<char(179) ;
	  gotoxy(75,j);
	  cout<<char(179);
       }
	 cout<<endl;
	cout<<char(195);
       for(int k= 0; k<73; k++)
       {
	     if(k==38)
	     cout<<char(194);
	     else if(k==55)
	   cout<<char(197);
	     else if(k==61)
	    {
	    cout<<char(193);
	     int s=10;
	     while(s!=1)
		{
	    gotoxy(63,s);
	    cout<<char(179);
	    s-- ;
	       }
		 gotoxy(64,11);
		 }

	    else if(k==67)
	    {
	    cout<<char(193);
	    int s=10;
	     while(s!=1)
		{
	    gotoxy(69,s);
	    cout<<char(179);
	    s-- ;
	       }
	     gotoxy(70,11);
	    }
		else
	     cout<<char(196);


	 }

	     cout<<char(180);
	      gotoxy(62,10);
	     for(int a=12;a<=16;a++)
	     {
		if(a==14)
		{

		   for(int d=14;d<=16;d++)
		   {

		     if(d==15)
		     {
		      gotoxy(25,d);
		      cout<<char(197);
		      gotoxy(28,d);
		      cout<<char(197);
		      gotoxy(31,d);
		      cout<<char(197);
		      gotoxy(34,d);
		      cout<<char(197);
		      gotoxy(37,d);
		      cout<<char(197);
		     }
			  else{
		gotoxy(25,d);
		cout<<char(179);
		gotoxy(28,d);
		cout<<char(179);
		gotoxy(31,d);
		cout<<char(179);
		gotoxy(34,d);
		cout<<char(179);
		gotoxy(37,d);
		cout<<char(179);
		}
		}
		gotoxy(57,a) ;
	       cout<<char(179);
		}
		else{
	       gotoxy(57,a) ;
	       cout<<char(179);
	       }
	      }
       for(int l=2;l<=10;l++)
	   {
	      gotoxy(57,l);
	      cout<<char(179);
	   }

	   for(int m=12;m<=16;m++)
	   {
	       if(m==13)
	       {
		int c =13;
		gotoxy(1,m);
	       cout<<char(195);
	       while(c!=51)
	       {
		if(c==36)
		cout<<char(194);
		else if (c==39)
		cout<<char(194);
		else if (c==42)
		cout<<char(194);
		else if (c==45)
		cout<<char(194);
		else if (c==48)
		cout<<char(194);
		else
	       cout<<char(196);
	       c++ ;
	       }
		gotoxy(75,m);
		cout<<char(179);
		}
		else if(m==15)
		{

		gotoxy(1,m) ;
	       cout<<char(195) ;
	       gotoxy(75,m);
	       cout<<char(179) ;
		 for(int d=2;d<25;d++)
		 {
		   gotoxy(d,15);
		   cout<<char(196);
		    }
		    for(d=26;d<28;d++)
		    {
		      gotoxy(d,15);
		   cout<<char(196);
		    }
		     for(d=29;d<31;d++)
		    {
		      gotoxy(d,15);
		   cout<<char(196);
		    }
		     for(d=32;d<34;d++)
		    {
		      gotoxy(d,15);
		   cout<<char(196);
		    }
		     for(d=35;d<37;d++)
		    {
		      gotoxy(d,15);
		   cout<<char(196);
		    }
		     for(d=38;d<40;d++)
		    {
		      gotoxy(d,15);
		   cout<<char(196);
		    }

		 }
		else
		{
	       gotoxy(1,m) ;
	       cout<<char(179) ;
	       gotoxy(75,m);
	       cout<<char(179) ;
	       }
	     }
	     cout<<endl;
	     cout<<char(192);

	for(int n= 0; n<73; n++)
       {
	  if (n==23)
	  cout<<char(193);
	  else if(n==26)
	  cout<<char(193);
	   else if(n==29)
	  cout<<char(193);
	   else if(n==32)
	  cout<<char(193);
	   else if(n==35)
	  cout<<char(193);

	 else if(n==55)
	   cout<<char(193);
	  else if (n==38)
	    cout<<char(193);
	   else
	 cout<<char(196);
	 }
	 cout<<char(217) ;

	   gotoxy(44,10) ;
	for(int b=12;b<=16;b++)
	   {
	     if(b==13)
	      {
		gotoxy(40,b);
		cout<<char(180);
	      }
	      else if(b==15)
	      {
	       gotoxy(40,b);
		cout<<char(180);
	      }
	      else{
	     gotoxy(40,b)  ;
	    cout<<char(179);
	    }
	    }


       }

  void  write()
  {
     gotoxy(2,12);
     cout<<"PLAYER NAME/SET SCORE";
     gotoxy(2,14);
     cout<<p1n;
     gotoxy(2,16);
     cout<<p2n;
     gotoxy(26,12);
     cout<<"1" ;

     gotoxy(29,12);
     cout<<"2" ;
     gotoxy(32,12);
     cout<<"3" ;
     gotoxy(35,12);
     cout<<"4" ;
     gotoxy(38,12);
     cout<<"5" ;
     gotoxy(43,12);
     cout<<"BEST OF LUCK " ;
     gotoxy(47,13);
     cout<<"TO BOTH";
     gotoxy(44,14);
     cout<<"IF YOU LOOSE";
     gotoxy(45,15);
     cout<<"DONT WORRY";
     gotoxy(59,12);
     cout<<"GAME SCORE" ;
     gotoxy(59,14);
     cout<<"P1";
     gotoxy(59,16);
     cout<<"P2";
     gotoxy(66,2);
     cout<<"P1" ;
     gotoxy(72,2);
     cout<<"P2" ;
     gotoxy(58,3);
     cout<<"Fault";
     gotoxy(66,3);
     cout<<fault1;
     gotoxy(72,3);
     cout<<fault2;
     gotoxy(58,5);
     cout<<"ACE" ;
     gotoxy(66,5);
     cout<<ace1;
     gotoxy(72,5);
     cout<<ace2;
     gotoxy(58,7);
     cout<<"WINER";
     gotoxy(66,7);
     cout<<winner1;
     gotoxy(72,7);
     cout<<winner2;
     gotoxy(2,2);
     cout<<"THIS POINT :";
     gotoxy(12,3);
     cout<<"PLAYER 1";
     gotoxy(41,3);
     cout<<"PLAYER 2";
     gotoxy(50,20);
     cout<<"PRESS 9 TO EXIT";

     }

      void player1serve2()
   {
	u=0;
	draw();
	write();
	gotoxy(62,14);
     cout<<gamescore[i];
     gotoxy(62,16);
     cout<<gamescore[j];
     gotoxy(68,14);
     cout<<"<-";
     gotoxy(k,15);
     cout<<ss1;
     gotoxy(k,16);
     cout<<ss2;
       for(int g=4;g<=10;g++)
       {
	 gotoxy(30,g);
	 cout<<char(179);
       }

     gotoxy(6,5);
     cout<<"1.DOUBLE FAULT";
     gotoxy(6,6);
     cout<<"2.ACE";
     gotoxy(6,7);
     cout<<"3.LET";
     gotoxy(35,5);
     cout<<"4.RECEIVEIN";
     gotoxy(35,6);
     cout<<"5.UNFORCED ERROR";
     gotoxy(35,7);
     cout<<"6.FORCED ERROR";
     gotoxy(35,8);
     cout<<"7.WINNER";
     switch(play())
     {
     case 1:
	    fault1++;
	    won=1;
	    break;
     case 2:
	    ace1++;
	    won=0;
	    break;
     case 3:
	    let1++;
	    clrscr();
	    player1serve();
	    break;
     case 4:
	    ballin();
	     break;

     case 5:
	    unforce2++;
	    won=0;
	    break;
     case 6:
	    force2++;
	    won=0;
	    break;
     case 7:
	    winner2++;
	    won=1;
	    break;
     case 9:
	    after();
	    delay(5000);
	    frontpage();
	    break;
     default:
	     cout<<"wrong input enter somrthing valid";
	     clrscr();
	     player1serve2();
	     break;
	   }

   }

   void ballin()
   {
      draw();
   write();
     gotoxy(62,14);
     cout<<gamescore[i];
     gotoxy(62,16);
     cout<<gamescore[j];
     gotoxy(68,f);
     cout<<"<-";
     gotoxy(k,14);
     cout<<ss1;
     gotoxy(k,16);
     cout<<ss2;
       for(int g=5;g<=7;g++)
       {
	 gotoxy(30,g);
	 cout<<char(179);
       }

       gotoxy(6,5);
     cout<<"1.FORCED ERROR";
     gotoxy(6,6);
     cout<<"2.UNFORCED ERROR";
     gotoxy(6,7);
     cout<<"3.WINNER";
     gotoxy(35,5);
     cout<<"4.FORCED ERROR";
     gotoxy(35,6);
     cout<<"5.UNFORCED ERROR";
     gotoxy(35,7);
     cout<<"6.WINNER";
     gotoxy(26,9);
     cout<<"7.RALLY";
       switch(play())
     {
     case 1:
	    force1++;
	    won=1;
	    break;
     case 2:
	    unforce1++;
	    won=1;
	    break;
     case 3:
	    winner1++;
	    won=0;
	    break;
     case 4:
	    force2++;
	    won=0;
	     break;

     case 5:
	    unforce2++;
	    won=0;
	    break;
     case 6:
	     winner2++;
	    won=1;
	    break;
     case 7:
	    rally++;
	    ballin();
	    break;
     case 9:
	    after();
	    delay(5000);
	    frontpage();
	    break;
     default:
	     cout<<"wrong input enter somrthing valid";
	     clrscr();
	     ballin();
	     break;

      }

   }

   void player2serve()
   {
	u=1;
	clrscr();
	draw();
	write();
	gotoxy(k,14);
     cout<<ss1;
     gotoxy(k,16);
     cout<<ss2;
       for(int g=4;g<=10;g++)
       {
	 gotoxy(30,g);
	 cout<<char(179);
       }

     gotoxy(35,5);
     cout<<"5.FAULT";
     gotoxy(35,6);
     cout<<"6.ACE";
     gotoxy(35,7);
     cout<<"7.LET";
     gotoxy(6,5);
     cout<<"1.RECEIVEIN";
     gotoxy(6,6);
     cout<<"2.UNFORCED ERROR";
     gotoxy(6,7);
     cout<<"3.FORCED ERROR";
     gotoxy(6,8);
     cout<<"4.WINNER";

     gotoxy(62,14);
     cout<<gamescore[i];
     gotoxy(62,16);
     cout<<gamescore[j];
     gotoxy(68,16);
     cout<<"<-";
     switch(play())
	 {
     case 1:
	    rally++;
	    clrscr();
	    ballin();
	    break;
     case 2:
	    unforce1++;
	    won=1;
	    break;
     case 3:
	    force1++;
	    won=1;
	    break;
     case 4:
	     winner1++;
	     won=0;
	     break;

     case 5:
	    fault2++;
	    player2serve2();
	    break;
     case 6:
	    ace2++ ;
	    won=1;
	    break;
     case 7:
	    player2serve();
	    break;
     case 9:
	    after();
	    delay(5000);
	    frontpage();
	    break;
     default:
	     cout<<"wrong input enter somrthing valid";
	     clrscr();
	     player2serve();
	     break;


      }


   }

    void player2serve2()
   {
       u=1;
       clrscr();
       draw();
       write();
       gotoxy(62,14);
       gotoxy(k,14);
     cout<<ss1;
     gotoxy(k,16);
     cout<<ss2;
       for(int g=4;g<=10;g++)
       {
	 gotoxy(30,g);
	 cout<<char(179);
       }

      gotoxy(62,14);
     cout<<gamescore[i];
     gotoxy(62,16);
     cout<<gamescore[j];
     gotoxy(68,16);
     cout<<"<-";
     gotoxy(35,5);
     cout<<"5.DOUBLE FAULT";
     gotoxy(35,6);
     cout<<"6.ACE";
     gotoxy(35,7);
     cout<<"7.LET";
     gotoxy(6,5);
     cout<<"1.RECEIVEIN";
     gotoxy(6,6);
     cout<<"2.UNFORCED ERROR";
     gotoxy(6,7);
     cout<<"3.FORCED ERROR";
     gotoxy(6,8);
     cout<<"4.WINNER";
     switch(play())
     {
     case 1:
	    rally++;
	    clrscr();
	    ballin();
	    break;
     case 2:
	    unforce1++;
	    won=1;
	    break;
     case 3:
	    force1++;
	    won=1;
	    break;
     case 4:
	     winner1++;
	     won=0;
	     break;

     case 5:
	    won=1;
	    break;
     case 6:
	    ace2++ ;
	    won=1;
	    break;
     case 7:
	    player2serve2();
	    break;
     case 9:
	    after();
	    delay(5000);
	    frontpage();
	    break;
     default:
	     cout<<"wrong input enter somrthing valid";
	     clrscr();
	     player2serve2();
	     break;

      }

   }



   void player1serve()
   {
       u=0;
       clrscr();
       draw();
       write();
       for(int g=4;g<=10;g++)
       {
	 gotoxy(30,g);
	 cout<<char(179);
       }

       gotoxy(6,5);
     cout<<"1.FAULT";
     gotoxy(6,6);
     cout<<"2.ACE";
     gotoxy(6,7);
     cout<<"3.LET";
     gotoxy(35,5);
     cout<<"4.RECEIVEIN";
     gotoxy(35,6);
     cout<<"5.UNFORCED ERROR";
     gotoxy(35,7);
     cout<<"6.FORCED ERROR";
     gotoxy(35,8);
     cout<<"7.WINNER";

     gotoxy(62,14);
     cout<<gamescore[i];
     gotoxy(62,16);
     cout<<gamescore[j];
     gotoxy(68,14);
     cout<<"<-";
     gotoxy(k,14);
     cout<<ss1;
     gotoxy(k,16);
     cout<<ss2;
     switch(play())
	 {
     case 1:
	    fault1++;
	    clrscr();
	    player1serve2();
	    break;
     case 2:
	    ace1++;
	      won=0;
	      break;
     case 3:
	    let1++;
	    clrscr();
	    player1serve();
	    break;
     case 4:
	    ballin();
	     break;

     case 5:
	    unforce2++;
	    won=0;
	    break;
     case 6:
	    force2++;
	    won=0;
	    break;
     case 7:
	    winner2++;
	    won=1;
	    break;
     case 9:
	    after();
	    delay(5000);
	    frontpage();
	    break;
     default:
	     cout<<"wrong input enter somrthing valid";
	     clrscr();
	     player1serve();
	     break;

      }

	 }

int toss()
{
int tossf;
randomize();
tossf=random(2);
cout<<tossf ;
return tossf;

}

int startpage()
{
  int q;
  cout<<"Enter 1 when you are ready for the match or 2" ;
  cin>>q;
  if(q==2)
  {
   cout<<"1.continue or 2.exit";
   cin>>q;
  }
  return q;
}


    void bestoffive()
    {
      draw();
      write();
      gotoxy(1,18);
      int toss1,toss2;
      clrscr();
       cout<<"TOSS TIME " ;
       cout<<"WHAT DOES "<<p1n<<" CHOOSE FROM 0 OR 1 ??"  ;
       cin>>toss1;
       cout<<"WHAT DOES "<<p2n<<" CHOOSE FROM 0 OR 1 ??"  ;
       cin>>toss2;
	  if(toss()==toss1)
	  {
	      int b;
	      int flag;
	      int a;
	     cout<<"WHAT DO YOU WANT TO CHOOSE"<<endl;
	     cout<<"1.SERVICE OR 2.RECEIVE" ;
	       cin>>a;
				if (a==1)
				    {
					 b=startpage();
					 clrscr();
					 if(b==1)
					     {
					    int os1=0,os2=0;
					    f=14;
					    while(os1<=5||os2<=5)
						{
						  int ss1=0,ss2=0;
						  i=0,j=0;
						     while(ss1<=6||ss2<=6)
							{
							  if(f==14)
							  {
							  player1serve();
							  f=14;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=16;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=16;

							    }
							     }
							     }

							    else if(f==16)
							    {
							      player2serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=14;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=14;

							    }
							     }
							     }



							    }
						if(ss1==6)
						   os1++;
						else
						   os2++;
						k++;
					      }
					}
					else
					exit(0);
					}
				else if(a==2)
				   {
					 b=startpage();
					 clrscr();
					 if(b==1)
					   {
					    int os1=0,os2=0;
					    f=16;
					    while(os1<=5||os2<=5)
						{
						  int ss1=0,ss2=0;
						  i=0,j=0;
						     while(ss1<=6||ss2<=6)
							{
							  if(f==14)
							  {
							  player1serve();
							  f=14;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=16;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=16;

							    }
							     }
							     }

							    else if(f==16)
							    {
							      player2serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=14;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=14;

							    }
							     }
							     }



							    }
						if(ss1==6)
						   os1++;
						else
						   os2++;
						k++;
					      }
					}
					else
					exit(0);
					}
						       }
	  else //if(toss()==toss2)
	    {
	     int b;
	     int a;
	     cout<<"WHAT DO YOU WANT TO CHOOSE"<<endl;
	     cout<<"1.SERVICE OR 2.RECEIVE" ;
	       cin>>a;
	       if (a==1)
	       {         b=startpage();
					 clrscr();
					 if(b==1)
					   {
					    int os1=0,os2=0;
					    f=14;
					    while(os1<=5||os2<=5)
						{
						  int ss1=0,ss2=0;
						  i=0,j=0;
						     while(ss1<=6||ss2<=6)
							{
							  if(f==14)
							  {
							  player1serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=16;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=16;

							    }
							     }
							     }

							    else if(f==16)
							    {
							      player2serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=14;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=14;

							    }
							     }
							     }



							    }
						if(ss1==6)
						   os1++;
						else
						   os2++;
						k++;
					      }
					}
					else
					exit(0);
							}

	       else if(a==2)
		   {

		 b=startpage();
					 clrscr();
					 if(b==1)
					   {
					    int os1=0,os2=0;
					    f=14;
					    while(os1<=5||os2<=5)
						{
						  int ss1=0,ss2=0;
						  i=0,j=0;
						     while(ss1<=6||ss2<=6)
							{
							  if(f==14)
							  {
							  player1serve();
							  f=14;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=16;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=16;

							    }
							     }
							     }

							    else if(f==16)
							    {
							      player2serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=14;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=14;

							    }
							     }
							     }



							    }
						if(ss1==6)
						   os1++;
						else
						   os2++;
						k++;
					      }
					}
					else
					exit(0);
	       }
	      }
	  }






  void bestofthree()
    {
      draw();
      write();
      gotoxy(35,12);
     cout<<" ";
     gotoxy(38,12);
     cout<<" ";

      gotoxy(1,18);
      int toss1,toss2;
      clrscr();
       cout<<"TOSS TIME " ;
       cout<<"WHAT DOES "<<p1n<<" CHOOSE FROM 0 OR 1 ??"  ;
       cin>>toss1;
       cout<<"WHAT DOES "<<p2n<<" CHOOSE FROM 0 OR 1 ??"  ;
       cin>>toss2;
	  if(toss()==toss1)
	  {
	      int b;
	      int flag;
	      int a;
	     cout<<"WHAT DO YOU WANT TO CHOOSE"<<endl;
	     cout<<"1.SERVICE OR 2.RECEIVE" ;
	       cin>>a;
				if (a==1)
				    {
					 b=startpage();
					 clrscr();
					 if(b==1)
					   {
					    int os1=0,os2=0;
					    f=14;
					    while(os1<=3||os2<=3)
						{
						  int ss1=0,ss2=0;
						  i=0,j=0;
						     while(ss1<=6||ss2<=6)
							{
							  if(f==14)
							  {
							  player1serve();
							  f=14;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=16;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=16;

							    }
							     }
							     }

							    else if(f==16)
							    {
							      player2serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=14;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=14;

							    }
							     }
							     }



							    }
						if(ss1==6)
						   os1++;
						else
						   os2++;
						t++;
					      }
					}
					else
					exit(0);
					}
				else if(a==2)
				   {
					 b=startpage();
					 clrscr();
					 if(b==1)
					   {
					    int os1=0,os2=0;
					    f=16;
					    while(os1<=3||os2<=3)
						{
						  int ss1=0,ss2=0;
						  i=0,j=0;
						     while(ss1<=6||ss2<=6)
							{
							  if(f==14)
							  {
							  player1serve();
							  f=14;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=16;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=16;

							    }
							     }
							     }

							    else if(f==16)
							    {
							      player2serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=14;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=14;

							    }
							     }
							     }



							    }
						if(ss1==6)
						   os1++;
						else
						   os2++;
						t++;
					      }
					}
					else
					exit(0);
					}
						       }
	  else //if(toss()==toss2)
	    {
	     int b;
	     int a;
	     cout<<"WHAT DO YOU WANT TO CHOOSE"<<endl;
	     cout<<"1.SERVICE OR 2.RECEIVE" ;
	       cin>>a;
	       if (a==1)
	       {         b=startpage();
					 clrscr();
					 if(b==1)
					   {
					    int os1=0,os2=0;
					    f=14;
					    while(os1<=3||os2<=3)
						{
						  int ss1=0,ss2=0;
						  i=0,j=0;
						     while(ss1<=6||ss2<=6)
							{
							  if(f==14)
							  {
							  player1serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=16;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=16;

							    }
							     }
							     }

							    else if(f==16)
							    {
							      player2serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=14;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=14;

							    }
							     }
							     }



							    }
						if(ss1==6)
						   os1++;
						else
						   os2++;
						t++;
					      }
					}
					else
					exit(0);
							}

	       else if(a==2)
		   {

		 b=startpage();
					 clrscr();
					 if(b==1)
					   {
					    int os1=0,os2=0;
					    f=14;
					    while(os1<=3||os2<=3)
						{
						  int ss1=0,ss2=0;
						  i=0,j=0;
						     while(ss1<=6||ss2<=6)
							{
							  if(f==14)
							  {
							  player1serve();
							  f=14;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=16;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=16;

							    }
							     }
							     }

							    else if(f==16)
							    {
							      player2serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=14;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=14;

							    }
							     }
							     }



							    }
						if(ss1==6)
						   os1++;
						else
						   os2++;
						t++;
					      }
					}
					else
					exit(0);
	       }
	      }

     }
    void oneset()
    {
     draw();
     write();
     gotoxy(29,12);
     cout<<" " ;
     gotoxy(32,12);
     cout<<" " ;
     gotoxy(35,12);
     cout<<" " ;
     gotoxy(38,12);
     cout<<" " ;

      gotoxy(1,18);
      int toss1,toss2;
      clrscr();
       cout<<"TOSS TIME " ;
       cout<<"WHAT DOES "<<p1n<<" CHOOSE FROM 0 OR 1 ??"  ;
       cin>>toss1;
       cout<<"WHAT DOES "<<p2n<<" CHOOSE FROM 0 OR 1 ??"  ;
       cin>>toss2;
	  if(toss()==toss1)
	  {
	      int b;
	      int flag;
	      int a;
	     cout<<"WHAT DO YOU WANT TO CHOOSE"<<endl;
	     cout<<"1.SERVICE OR 2.RECEIVE" ;
	       cin>>a;
				if (a==1)
				    {
					 b=startpage();
					 clrscr();
					 if(b==1)
					   {
					    int os1=0,os2=0;
					    f=14;
					    while(os1<=1||os2<=1)
						{
						  int ss1=0,ss2=0;
						  i=0,j=0;
						     while(ss1<=6||ss2<=6)
							{
							  if(f==14)
							  {
							  player1serve();
							  f=14;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=16;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=16;

							    }
							     }
							     }

							    else if(f==16)
							    {
							      player2serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=14;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=14;

							    }
							     }
							     }



							    }
						if(ss1==6)
						   os1++;
						else
						   os2++;
						t++;
					      }
					}
					else
					exit(0);
					}
				else if(a==2)
				   {
					 b=startpage();
					 clrscr();
					 if(b==1)
					   {
					    int os1=0,os2=0;
					    f=16;
					    while(os1<=1||os2<=1)
						{
						  int ss1=0,ss2=0;
						  i=0,j=0;
						     while(ss1<=6||ss2<=6)
							{
							  if(f==14)
							  {
							  player1serve();
							  f=14;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=16;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=16;

							    }
							     }
							     }

							    else if(f==16)
							    {
							      player2serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=14;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=14;

							    }
							     }
							     }



							    }
						if(ss1==6)
						   os1++;
						else
						   os2++;
						t++;
					      }
					}
					else
					exit(0);
					}
						       }
	  else //if(toss()==toss2)
	    {
	     int b;
	     int a;
	     cout<<"WHAT DO YOU WANT TO CHOOSE"<<endl;
	     cout<<"1.SERVICE OR 2.RECEIVE" ;
	       cin>>a;
	       if (a==1)
	       {         b=startpage();
					 clrscr();
					 if(b==1)
					   {
					    int os1=0,os2=0;
					    f=14;
					    while(os1<=1||os2<=1)
						{
						  int ss1=0,ss2=0;
						  i=0,j=0;
						     while(ss1<=6||ss2<=6)
							{
							  if(f==14)
							  {
							  player1serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=16;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=16;

							    }
							     }
							     }

							    else if(f==16)
							    {
							      player2serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=14;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=14;

							    }
							     }
							     }



							    }
						if(ss1==6)
						   os1++;
						else
						   os2++;
						t++;
					      }
					}
					else
					exit(0);
							}

	       else if(a==2)
		   {

		 b=startpage();
					 clrscr();
					 if(b==1)
					   {
					    int os1=0,os2=0;
					    f=14;
					    while(os1<=1||os2<=1)
						{
						  int ss1=0,ss2=0;
						  i=0,j=0;
						     while(ss1<=6||ss2<=6)
							{
							  if(f==14)
							  {
							  player1serve();
							  f=14;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=16;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=16;

							    }
							     }
							     }

							    else if(f==16)
							    {
							      player2serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=14;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=14;

							    }
							     }
							     }



							    }
						if(ss1==6)
						   os1++;
						else
						   os2++;
						t++;
					      }
					}
					else
					exit(0);
	       }
	      }


    }
     void miniset()
    {
     draw();
     write();
     gotoxy(29,12);
     cout<<" " ;
     gotoxy(32,12);
     cout<<" " ;
     gotoxy(35,12);
     cout<<" " ;
     gotoxy(38,12);
     cout<<" " ;
       draw();
      write();
      gotoxy(1,18);
      int toss1,toss2;
      clrscr();
       cout<<"TOSS TIME " ;
       cout<<"WHAT DOES "<<p1n<<" CHOOSE FROM 0 OR 1 ??"  ;
       cin>>toss1;
       cout<<"WHAT DOES "<<p2n<<" CHOOSE FROM 0 OR 1 ??"  ;
       cin>>toss2;
	  if(toss()==toss1)
	  {
	      int b;
	      int flag;
	      int a;
	     cout<<"WHAT DO YOU WANT TO CHOOSE"<<endl;
	     cout<<"1.SERVICE OR 2.RECEIVE" ;
	       cin>>a;
				if (a==1)
				    {
					 b=startpage();
					 clrscr();
					 if(b==1)
					   {
					    int os1=0,os2=0;
					    f=14;

						  int ss1=0,ss2=0;
						  i=0,j=0;
						     while(ss1<=4||ss2<=4)
							{
							  if(f==14)
							  {
							  player1serve();
							  f=14;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=16;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=16;

							    }
							     }
							     }

							    else if(f==16)
							    {
							      player2serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=14;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=14;

							    }
							     }
							     }


					      }
					}
					else
					exit(0);
					}
				else if(a==2)
				   {
					 b=startpage();
					 clrscr();
					 if(b==1)
					   {
					    int os1=0,os2=0;
					    f=16;
					      int ss1=0,ss2=0;
						  i=0,j=0;
						     while(ss1<=4||ss2<=4)
							{
							  if(f==14)
							  {
							  player1serve();
							  f=14;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=16;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=16;

							    }
							     }
							     }

							    else if(f==16)
							    {
							      player2serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=14;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=14;

							    }
							     }
							     }




					      }
					}
					else
					exit(0);
					}
						       }
	  else //if(toss()==toss2)
	    {
	     int b;
	     int a;
	     cout<<"WHAT DO YOU WANT TO CHOOSE"<<endl;
	     cout<<"1.SERVICE OR 2.RECEIVE" ;
	       cin>>a;
	       if (a==1)
	       {         b=startpage();
					 clrscr();
					 if(b==1)
					   {
					    int os1=0,os2=0;
					    f=14;

						  int ss1=0,ss2=0;
						  i=0,j=0;
						     while(ss1<=4||ss2<=4)
							{
							  if(f==14)
							  {
							  player1serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=16;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=16;

							    }
							     }
							     }

							    else if(f==16)
							    {
							      player2serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=14;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=14;

							    }
							     }
							     }




					      }
					}
					else
					exit(0);
							}

	       else if(a==2)
		   {

		 b=startpage();
					 clrscr();
					 if(b==1)
					   {
					    int os1=0,os2=0;
					    f=14;
										  int ss1=0,ss2=0;
						  i=0,j=0;
						     while(ss1<=4||ss2<=4)
							{
							  if(f==14)
							  {
							  player1serve();
							  f=14;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=16;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=16;

							    }
							     }
							     }

							    else if(f==16)
							    {
							      player2serve();
							  f=16;
							  if(won==0)
							   {
							    if(i==3)
							     i=6;
							    else if(i<3)
							     i++;
							   }
							  else   // if (won==1)
							   {
							    if(j==3)
							     j=6;
							    else if(j<3)
							     j++;
							   }
							   if(i==6||j==6)
							   {

							    if(i==6)
							    {
							    ss1++;
							    i=0,j=0;
							    f=14;

							    }
							    if(j==6)
							    {
							     ss2++;
							     i=0,j=0;
							     f=14;

							    }
							     }
							     }




					      }
					}
					else
					exit(0);
	       }
	      }


    }

  void secondpage()
  {
    int in;
    gotoxy(0,1);
    cout<<"GIVE THE FOLLOWING NAMES :";
    gotoxy(3,3);
    cout<<"PLAYER 1 NAME:";
    gets(p1n);
    gotoxy(3,4);
    cout<<"PLAYER 2 NAME:";
    gets(p2n);

    p1.give(p1n);
    p2.give(p2n);
    gotoxy(1,6);
    cout<<"WHAT ARE THE GAME RULES:"   ;
    gotoxy(1,8);
    cout<<"1.BEST OF FIVE SETS"<<endl;
    cout<<"2.BEST OF THREE SETS"<<endl;
    cout<<"3.ONE SET TO WIN"<<endl;
    cout<<"4.MINI SET"<<endl;
    cout<<"5.EXIT"<<endl;
    cout<<"INPUT HERE:";
    cin>>in;
    switch(in)
    {
       case 1:
	    bestoffive()    ;
	    break;
       case 2:
	      bestofthree()    ;
	   break;
       case 3:
	      oneset()          ;
	   break;
       case 4:
	      miniset()          ;
	      break;
       case 5:
	    exit(0);
	    break;

    }
  }


    void frontpage()
    {
     player p;
     char CH;
      gotoxy(36,1) ;
       cout<<"TRACK YOUR GAME";
      gotoxy(31,8);
       cout<<"DO YOU WANT TO TRACK????";
      gotoxy(39,10);
       cout<<"1.YES";
      gotoxy(39,11);
       cout<<"2.EXIT";
      gotoxy(39,13);
       cout<<"3.SHOW PLAYER DETAILS";
      gotoxy(30,18);
       cout<<"DONE BY: UDIT,AASTHA,SUSHANT";
       gotoxy(20,20)  ;
       cout<<"INPUT HERE:";
      cin>>CH;
      clrscr();
    if(CH=='1')
	       secondpage() ;

   else if(CH=='2')
		 exit(0);
	else
	     p.display();
	  }


void main()
{
    clrscr();
    frontpage();
    getch();

}
