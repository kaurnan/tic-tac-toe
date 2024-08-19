#include<graphics.h>
void selector(int,int,int);
void selection();
void Function_Execution(int);
void esc();
void Check_Multi_Winner(int);
void Multiplayer();

void Loading_Game()
{
	readimagefile("game_logo.jpg",300,220,400,320);
	rectangle(310,330,390,340);
	setcolor(CYAN);
	for(int i=0;i<=76;i++)
	{
		line(312+i,332,312+i,338);
		delay(50);
	}
	cleardevice();
}
void menu()
{
	readimagefile("title2.jpg",50,20,650,130);
	readimagefile("menu2.jpg",235,250,465,520);
	selector(240,1,1);
}
void selector(int h,int key,int choice)
{
		if(key==0)
		setcolor(BLACK);
		else
		setcolor(LIGHTRED);
		int d=0;
		switch(choice)
		{
			case 1:
				d=0;
				break;
			case 2:
				d=20;
				break;
			case 3:
				d=50;
				break;
			case 4:
				d=80;
				break;
			case 5:
				d=100;
				break;
		}
		settextstyle(0,HORIZ_DIR,6);
		outtextxy(140+d,h,(char*)"<");
		outtextxy(510-d,h,(char*)">");
}
void selection()
{
	int choice=1;
	while(1)
	{
		if(GetAsyncKeyState('1'))
		{
			selector(240,1,1);
			selector(300,0,2);
			selector(360,0,3);
			selector(420,0,4);
			selector(480,0,5);
//            PlaySound(TEXT("select_option.wav"),NULL,SND_SYNC);
            choice=1;
		}
		else if(GetAsyncKeyState('2'))
		{
			selector(240,0,1);
			selector(300,1,2);
			selector(360,0,3);
			selector(420,0,4);
			selector(480,0,5);
//            PlaySound(TEXT("select_option.wav"),NULL,SND_SYNC);
            choice=2;
		}
		else if(GetAsyncKeyState('3'))
		{
			selector(240,0,1);
			selector(300,0,2);
			selector(360,1,3);
			selector(420,0,4);
			selector(480,0,5);
//            PlaySound(TEXT("select_option.wav"),NULL,SND_SYNC);
            choice=3;
		}
		else if(GetAsyncKeyState('4'))
		{
			selector(240,0,1);
			selector(300,0,2);
			selector(360,0,3);
			selector(420,1,4);
			selector(480,0,5);
//            PlaySound(TEXT("select_option.wav"),NULL,SND_SYNC);
            choice=4;
		}
		else if(GetAsyncKeyState('5'))
		{
			selector(240,0,1);
			selector(300,0,2);
			selector(360,0,3);
			selector(420,0,4);
			selector(480,1,5);
//            PlaySound(TEXT("select_option.wav"),NULL,SND_SYNC);
            choice=5;
		}
		else if(GetAsyncKeyState(VK_RETURN))
		{
			Function_Execution(choice);

		}
	}
}
void esc()
{
	while(1)
		{
        if(GetAsyncKeyState(VK_ESCAPE))
        {  
        	cleardevice();
        	menu();
        	selection();	
        
		}
	}
}
void quiit()
{
	while(1)
	{
		if(GetAsyncKeyState('Y'))
		{
				closegraph();
		}
		else if(GetAsyncKeyState('N'))
		{
				cleardevice();
				menu();
				selection();
		}
	}	
}

// game intergace
void Game_Interface()
{    int board_color,  box_color;
    	board_color=10;          // green
    	box_color=10;	
    setcolor(board_color);
    for(int i=0;i<5;i++)
    {
    	// vertical
    	line(148+i,75,148+i,525);
    	line(298+i,75,298+i,525);
    	//horizontal
    	line(25,223+i,425,223+i);
    	line(25,373+i,425,373+i);	
	}
	setcolor(box_color);
	for(int i=0;i<5;i++)
	{
		rectangle(450+i,25+i,675-i,575-i);
	}
}

int p1=1,p2=1,p3=1,p4=1,p5=1,p6=1,p7=1,p8=1,p9=1;  // one thing at one place
	int n=0;
	int a[9]={-1,-1,-1,-1,-1,-1,-1,-1,-1};
	int flag=0;
	
void X_O(int place)
{   
	int l,t,r,b;
	char ch;
      if(a[place-1]==-1)
      {
      if(n%2==0)
      {
      readimagefile("player21.jpg",450+35,150,600+35,170);     	
	  }
	  else
	  {
     readimagefile("player11.jpg",450+35,150,600+35,170);	  	
	  }
	  }

	if(place==1 && p1==1)
	{
		l= 25 ; t= 100 ;r=125  ;b=200   ;
		p1++;
		n++;
	}
	else if(place==2 && p2==1)
	{
		l=175 ; t=100  ;r=275  ;b=200   ;	
		p2++;
		n++;	
	}
	else if(place==3 && p3==1)
	{
		l= 325 ; t=100  ;r=425  ;b=200   ;	
		p3++;
		n++;	
	}
	else if(place==4 && p4==1)
	{
		l= 25  ; t=250 ;r=125  ;b= 350  ;	
		p4++;
		n++;	
	}
	else if(place==5 && p5==1)
	{
		l=175  ; t=250  ;r=275  ;b= 350   ;	
		p5++;
		n++;	
	}
	else if(place==6 && p6==1)
	{
		l=325  ; t=250  ;r=425  ;b=350   ;	
		p6++;
		n++;
	}
	else if(place==7 && p7==1)
	{
		l=25  ; t=400  ;r=125  ;b=500   ;	
		p7++;
		n++;
	}
	else if(place==8 && p8==1)
	{
		l=175  ; t=400  ;r=275  ;b=500   ;	
		p8++;
		n++;
	}
	else if(place==9 && p9==1)
	{
		l=325  ; t=400  ;r=425  ;b=500   ;	
		p9++;
		n++;
	}
    if(a[place-1]==-1)
    {
    	if(n%2==0)
        ch='o';
        else
        ch='x';
	}
	if(ch=='o')
	readimagefile("o1.jpg",l,t,r,b);
	else if(ch=='x')
	readimagefile("x1.jpg",l,t,r,b);
    if(ch=='o')
    {
    a[place-1]=0;
    Check_Multi_Winner(0)	;
	}
    if(ch=='x')
    {
    a[place-1]=1;
    Check_Multi_Winner(1)	;
	}
	delay(10);		
}

void Check_Multi_Winner(int no)
{
	if((a[0]==no &&a[1]== no )&& (a[2]==no))
	{
    flag++;
	}
    if((a[3]==no &&a[4]==no )&& (a[5]==no))
    {
    flag++;   
	}
	if((a[6]==no &&a[7]==no )&& (a[8]==no))
    {
    flag++;    
	}
	if((a[0]==no &&a[3]==no )&& (a[6]==no))
    {
    flag++;    
	}
	if((a[1]==no &&a[4]==no )&& (a[7]==no))
    {
    flag++;    
	}
	if((a[2]==no &&a[5]==no )&& (a[8]==no))
    {
    flag++;    
	}
	if((a[0]==no &&a[4]==no )&& (a[8]==no))
    {
    flag++;   
	}
	if((a[2]==no &&a[4]==no )&& (a[6]==no))
    {
    flag++;    
	}
    if(flag==1)
    {
    	if(no==0)
    	readimagefile("player21.jpg",450+35,260+20,600+35,280+20);
    	delay(1000);

    	if(no==1)
    	readimagefile("player11.jpg",450+35,260+20,600+35,280+20);
    	delay(1000);
//    	settextstyle(3,HORIZ_DIR,7);
//    	outtextxy(150,300,"player1 win");
//    	delay(10000);
		cleardevice();
    	Game_Interface();
		Multiplayer();

	}
	
}

void Multiplayer()
{
     readimagefile("turn2.jpg",450+65,90,600,120);
     readimagefile("player12.jpg",450+35,150,600+35,170);
     readimagefile("winner2.jpg",450+35,200+20,600+35,230+20);	
     readimagefile("-2.jpg",450+100,260+20,600-25,270+20);	 	
	int place=0;
	while(1)
	{
		if(GetAsyncKeyState('1'))
		{
			place=1;
			X_O(place);			
		}
		if(GetAsyncKeyState('2'))
		{
			place=2;
			X_O(place);			
		}
		if(GetAsyncKeyState('3'))
		{
			place=3;			
			X_O(place);			
		}
		if(GetAsyncKeyState('4'))
		{			
			place=4;			
			X_O(place);			
		}
		if(GetAsyncKeyState('5'))
		{			
			place=5;			
			X_O(place);			
		}
		if(GetAsyncKeyState('6'))
		{		
			place=6;			
			X_O(place);			
		}
		if(GetAsyncKeyState('7'))
		{
     		place=7;			
			X_O(place);			
		}
		if(GetAsyncKeyState('8'))
		{		
			place=8;			
			X_O(place);			
		}
		if(GetAsyncKeyState('9'))
		{			
			place=9;			
			X_O(place);			
		}
		if(GetAsyncKeyState(VK_ESCAPE))
		{	
          p1=1,p2=1,p3=1,p4=1,p5=1,p6=1,p7=1,p8=1,p9=1;
          n=0;	
          flag=0;
         for(int i=0;i<9;i++)
         {
         	a[i]=-1;
		 }
	     	menu();
//           PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
			break;
		}
	}
}

void Function_Execution(int choice)
{
	if(choice==1)
	{
		cleardevice();
		setcolor(LIGHTGREEN);
	    settextstyle(0,HORIZ_DIR,4);
		outtextxy(150,250,"COMING SOON...");
//        PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
        esc();
	}
	if(choice==2)
	{
		cleardevice();
		Game_Interface();
		Multiplayer();
		esc();
	}
	if(choice==3)
	{
		cleardevice();
		readimagefile("menu_controls1.jpg",250,20,450,50);
		setcolor(10);
		settextstyle(1,HORIZ_DIR,2);
		outtextxy(250,70,"1-SINGLEPLAYER");
		outtextxy(250,100,"2-MULTIPLAYER");
		outtextxy(250,130,"3-CONTROLS");
		outtextxy(250,160,"4-ABOUT");
		outtextxy(250,190,"5-EXIT");
		readimagefile("game_controls1.jpg",250,250,450,280); 
		outtextxy(170,310,"1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 ");        
//        readimagefile("gamecontrols1.jpg",120,310,580,330);
    	readimagefile("other_controls1.jpg",260,380,440,410);
    	outtextxy(250,450,"ESC - BACK");
    	outtextxy(200,500,"ENTER - OPTION SELECT");
//        readimagefile("othercontrols1.jpg",200,440,500,560);

        esc();		
	}
	if(choice==4)
	{  
////        PlaySound(TEXT("res/select_option.wav"),NULL,SND_SYNC);
        cleardevice();
//		for(int i=100;i<700;i++)
			setcolor(WHITE);
			settextstyle(0,HORIZ_DIR,4);
			outtextxy(160,40,"TIC-TAC-TOE");  
//			delay(5);    
			settextstyle(3,HORIZ_DIR,2);
//            bar(50,1320-i,650,2000-i);
		    outtextxy(50,100,"Tic-tac-toe, noughts and crosses, or Xs and Os is a paper-and-pencil");
			outtextxy(50,130,"game for two players who take turns marking the spaces in a three-by-three");
			outtextxy(50,160,"grid with X or O. The player who succeeds in placing three of their"); 
			outtextxy(50,190,"marks in a horizontal, vertical, or diagonal row is the winner.");
      
			esc();
	
	}
	if(choice==5)
	{
		cleardevice();
		readimagefile("quitmsg1.jpg",50,200,650,250);
		readimagefile("yes1.jpg",100+50,300+10,170+50,330+10);
		readimagefile("no1.jpg",530-50,300+10,600-50,330+10);	
//        PlaySound(TEXT("select_option.wav"),NULL,SND_SYNC);
        quiit();
	}
}

int main()
{
	initwindow(700,600);
//	Loading_Game();
	menu();
	selection();
	getch();
	closegraph();
}
