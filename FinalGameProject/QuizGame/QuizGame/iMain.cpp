#include "iGraphics.h"
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<time.h>
using namespace std;

#define screenHight 675
#define screenWidth 1200

int ongamePage=0; //gamepage
bool quite=false; //use for exit

int score=0; 
char scoreText[200]; ////score on screen
bool musicOn=true;  //use for music

int page=0; //for ques page
int hghscr=0; //store high score on high score page
bool ans=false; // ans for correct or false


void menuPage()   //Menu page view;
{
	iClear();
	iShowBMP(0,0,"PicQ\\Home1.bmp");
	iSetColor(0,0,0);
	iText(550,600,"PLAY QUIZ",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(300,450,"Play");
    iText(300,400,"Option");
	iText(300,350,"Instruction");
	iText(300,300,"about");
	iText(300,250,"High Score");
	iText(300,200,"Exit");
	
}

void correctAns() //correct answer page
{
	iClear();
	iShowBMP(0,0,"PicQ\\Home1.bmp");
	iSetColor(0,0,0);
	iText(440,450,"Correct Answer!!!",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(300,50,"Press 'P' to Continue" ,GLUT_BITMAP_TIMES_ROMAN_24);

}

void congo() //last page view for congratualation 
{
	iClear();
	iShowBMP(0,0,"PicQ\\Home1.bmp");
	iSetColor(0,0,0);
	iText(250,450,"CONGRATULATION!! You have completed all question!!",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(250,380,"You are a QUIZ hero!!",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(300,50,"Press X to Back Main Menu" ,GLUT_BITMAP_TIMES_ROMAN_24);
}



void gamePage() //play page view
{
	iClear();
	iShowBMP(0,0,"PicQ\\Home1.bmp");
	iSetColor(0,0,0);

	
		
		switch(page)
		{
			case 0:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"What is the capital of Bangladesh?");
				iText(100,380,"A.Dhaka  B.Chittagong  C.Rajshahi");
				break;
			}
			case 1:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"What is the capital of India?");
				iText(100,380,"A.Dhaka  B.Dilli  C.Rome");
				break;
			}
			case 2:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"What is the capital of Australia?");
				iText(100,380,"A.England  B.New Yourk  C.Canbera");
				break;
			}
			case 3:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"What is the capital of Italy?");
				iText(100,380,"A.Kualalampur  B.Rome  C.Vieana");
				break;
			}
			case 4:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"What is the capital of USA?");
				iText(100,380,"A.New Yourk  B.Mosko  C.Wasington");
				break;
			}
			case 5:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"Which is the fastest land animal in the world?");
				iText(100,380,"A.Leopard  B.Cheetah  C.Tiger");
				break;
			}
			case 6:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"Which of the following is used in pencils?");
				iText(100,380,"A.Graphite  B.Copper  C.Zinc");
				break;
			}
			case 7:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"Which of the following vitamin is most important for healthy eye?");
				iText(100,380,"A.Vitamin D  B.Vitamin A  C.Vitamin C");
				break;
			}
			case 8:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"Non-stick cooking utensils are coated with?");
				iText(100,380,"A.PVC  B.Vinyl  C.Teflon");
				break;
			}
			case 9:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"Another name for a tidal wave is a?");
				iText(100,380,"A.Cyclone  B.Flood  C.Tsunami");
				break;
			}
			case 10:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"The hardest substance available on earth is?");
				iText(100,380,"A.Platinum  B.Diamond  C.Gold");
				break;
			}
			case 11:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"The molten rock that comes from a volcano after it has erupated is known as what?");
				iText(100,380,"A.Lava  B.Metalrock  C.Racksalt");
				break;
			}
			case 12:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"What is the biggest planet in our solar system?");
				iText(100,380,"A.Mars  B.Jupiter  C.Mercury");
				break;
			}
			case 13:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"Ballons are filled with which gas?");
				iText(100,380,"A.Nitrogen  B.Ozone  C.Helium");
				break;
			}
			case 14:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"Who is the first programmer?");
				iText(100,380,"A.Dennis Ritche B.Ada Lovelace  C.Mark Juckerbarg");
				break;
			}
			case 15:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"Who is the founder of Nobel Prize?");
				iText(100,380,"A.Alfrade Nobel  B.Jackie Chaan  C.Einestine");
				break;
			}
			case 16:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"Who is the inventor of mobile phone?");
				iText(100,380,"A.Martin Cooper  B.Martin Barg  C.Martin jr");
				break;
			}
			case 17:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"Ricky Ponting is also known as what?");
				iText(100,380,"A.The Rickster  B.Punter  C.Pointer");
				break;
			}
			case 18:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"Who won the 1993 King of the Ring?");
				iText(100,380,"A.Owen Hart  B.Bret Hart  C.	Mabel");
				break;
			}
			case 19:
			{
				iClear();
				iShowBMP(0,0,"PicQ\\Home1.bmp");
				iSetColor(0,0,0);
				iText(100,400,"What is the Time Zone of Bangladesh?");
				iText(100,380,"A.Utc +5  B.Utc +6  C.Utc +7");
				break;
			}
		}
		 
		

	iText(1000,600,"Score: ");
	_itoa_s(score,scoreText,10);
	iText(1055,599,scoreText);
	iText(300,50,"To Back   <Press HOME Button>",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(50,50,"Back");

	if(ongamePage==1 && ((page==0 && ans==true) || (page==1 && ans==true) || (page==2 && ans==true) || (page==3 && ans==true) || (page==4 && ans==true)|| (page==5 && ans==true)|| (page==6 && ans==true)|| (page==7 && ans==true)|| (page==8 && ans==true)|| (page==9 && ans==true)|| (page==10 && ans==true)|| (page==11 && ans==true)|| (page==12 && ans==true)|| (page==13 && ans==true)|| (page==14 && ans==true)|| (page==15 && ans==true)|| (page==16 && ans==true)|| (page==17 && ans==true)|| (page==18 && ans==true)|| (page==19 && ans==true)))
	{
		
		iClear();
		correctAns();
	}
	if(ongamePage==1 && page==40){
	
		iClear();
		congo();
	}
	
}


void optionPage() //here is a different option 
{
	iClear();
	iShowBMP(0,0,"PicQ\\Home1.bmp");
	iSetColor(0,0,0);
	iText(550,600,"OPTION",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(300,400,"Bangladesh",GLUT_BITMAP_HELVETICA_18);
	iText(300,350,"International",GLUT_BITMAP_HELVETICA_18);
	iText(300,300,"Sports",GLUT_BITMAP_HELVETICA_18);
	iText(300,250,"Mathematics",GLUT_BITMAP_HELVETICA_18);
	iText(300,200,"Slum Dog Millionaire",GLUT_BITMAP_HELVETICA_18);
	iText(300,50,"To Back   <Press HOME Button>",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(50,50,"Back");
}


void instructionPage() //how to play the game
{
	iClear();
	iShowBMP(0,0,"PicQ\\Home1.bmp");
	iSetColor(0,0,0);
	iText(550,600,"INSTRUCTION",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(50,520,"Please Choose One Option To Continue The Game & If You Choose The Correct One You Will Get Score & Choose Wrong One The Game Is Over!!!");
	iText(50,480,"How to play ?");
	iText(50,440,"Here is a three option A B C");
	iText(50,400,"To play choose the correct one from keyboard");
	iText(300,50,"To Back   <Press HOME Button>",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(50,50,"Back");
}

void aboutPage() //discription the game
{
	iClear();
	iShowBMP(0,0,"PicQ\\ab1.bmp");
	iSetColor(0,0,0);
	iText(300,50,"To Back   <Press HOME Button>",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(50,50,"Back");
}



void highscorePage() //high score who played last time
{
	iClear();
	iShowBMP(0,0,"PicQ\\hs1.bmp");

	FILE *fl;
	fl = fopen("score.txt","r");
	fscanf(fl, "%d",&hghscr);
	fclose(fl);

	iSetColor(0,0,0);
	iText(550,600,"HIGH SCORE",GLUT_BITMAP_TIMES_ROMAN_24);
	_itoa_s(hghscr,scoreText,10);
	iText(550,550,scoreText,GLUT_BITMAP_HELVETICA_18);
	iText(300,50,"To Back   <Press HOME Button>",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(50,50,"Back");
}

void gameover()
{
	iClear();
	iShowBMP(0,0,"PicQ\\Home1.bmp");
	iSetColor(0,0,0);
	iText(400,550,"Wrong Answer!!",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(440,450,"Score: ",GLUT_BITMAP_TIMES_ROMAN_24);
	_itoa_s(score,scoreText,10);
	iText(520,450,scoreText,GLUT_BITMAP_HELVETICA_18);
	iText(250,200,"The game is over!!! Click Back To Main Menu",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(300,50,"To Back   <Press HOME Button>",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(50,50,"Back");
	
}


void iDraw()
{
	iClear();
	if(ongamePage==0)
	{
		menuPage();
	}
	else if(ongamePage==1)
	{
		gamePage();
	}
	else if(ongamePage==2)
	{
		optionPage();
	}
	else if(ongamePage==3)
	{
		instructionPage();
	}
	else if(ongamePage==4)
	{
		aboutPage();
	}
	else if(ongamePage==5)
	{
		highscorePage();
	}
	else if(ongamePage==6)
	{
		gameover();
	}
	if(quite==true)
	{
		exit(0);
	}
	
}


void iMouseMove(int mx, int my)
{
	
}


void iMouse(int button, int state, int mx, int my)
{
	if(ongamePage==0) //menu page control
	{
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if(mx>300&&mx<350&&my>450&&my<480)
			{
				ongamePage=1; //play
			}
			else if(mx>300&&mx<350&&my>400&&my<430)
			{
				ongamePage=2; //option
			}
			else if(mx>300&&mx<400&&my>350&&my<380)
			{
				ongamePage=3; //instruction
			}
			else if(mx>300&&mx<350&&my>300&&my<330)
			{
				ongamePage=4; //about
			}
			else if(mx>300&&mx<450&&my>250&&my<280)
			{
				ongamePage=5; //high score
			}
			else if(mx>300&&mx<350&&my>200&&my<230)
			{
				quite=true; //exit;
			}	
		}
	}

	if(ongamePage==1) //game page to home menu
	{
		if(mx>50&&mx<100&&my>50&&my<80)
		{
			ongamePage=0;
		}
	}
	else if(ongamePage==2) //option page to home menu
	{
		if(mx>50&&mx<100&&my>50&&my<80)
		{
			ongamePage=0;
		}
	}
	else if(ongamePage==3) //instruction page to home menu
	{
		if(mx>50&&mx<100&&my>50&&my<80)
		{
			ongamePage=0;
		}
	}
	else if(ongamePage==4) //about page to home menu
	{
		if(mx>50&&mx<100&&my>50&&my<80)
		{
			ongamePage=0;
		}
	}
	else if(ongamePage==5) //high score page to home menu
	{
		if(mx>50&&mx<100&&my>50&&my<80)
		{
			ongamePage=0;
		}
	}
	else if(ongamePage==6) //game over page to home menu
	{
		if(mx>50&&mx<100&&my>50&&my<80) //save high score
		{

			
			FILE *fl;
			fl = fopen("score.txt","r");
			fscanf(fl, "%d",&hghscr);
			fclose(fl);

			if(score>hghscr){
			
				FILE *fl;
				fl = fopen("score.txt","w");
				fprintf(fl, "%d",score);
				fclose(fl);
			}

			ongamePage=0;
			score=0;
			page=0;
		}
	}


	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

	}
}


void iKeyboard(unsigned char key) //use for play game
{
	if(ongamePage==1)
		{
			if(page==0)
			{
				if(key== 'a'|| key=='A')
				{
				
					//gamePage();
					ans=true;
					score+=5;
				}
				else if(key=='b' || key=='B' || key=='c' || key=='C')
				{
					ongamePage=6;
				}
			}
			else if(page==1)
			{
				if(key== 'b'|| key=='B')
				{
					ans=true;
					score+=5;
				}
				else if(key=='a' || key=='A' || key=='c' || key=='C')
				{
					ongamePage=6;
				}
			}
			else if(page==2)
			{
				if(key== 'c'|| key=='C')
				{
					ans=true;
					score+=5;
				}
				else if(key=='a' || key=='A' || key=='b' || key=='B')
				{
					ongamePage=6;
				}
			}
			else if(page==3)
			{
				if(key== 'b'|| key=='B')
				{
					ans=true;
					score+=5;
				}
				else if(key=='a' || key=='A' || key=='c' || key=='C')
				{
					ongamePage=6;
				}
			}
			else if(page==4)
			{
				if(key== 'c'|| key=='C')
				{
					ans=true;
					score+=5;
				}
				else if(key=='b' || key=='B' || key=='a' || key=='A')
				{
					ongamePage=6;
				}
			}
			else if(page==5)
			{
				if(key== 'b'|| key=='B')
				{
					ans=true;
					score+=5;
				}
				else if(key=='c' || key=='C' || key=='a' || key=='A')
				{
					ongamePage=6;
				}
			}
			else if(page==6)
			{
				if(key== 'a'|| key=='A')
				{
					ans=true;
					score+=5;
				}
				else if(key=='b' || key=='B' || key=='c' || key=='C')
				{
					ongamePage=6;
				}
			}
			else if(page==7)
			{
				if(key== 'b'|| key=='B')
				{
					ans=true;
					score+=5;
				}
				else if(key=='c' || key=='C' || key=='a' || key=='A')
				{
					ongamePage=6;
				}
			}
			else if(page==8)
			{
				if(key== 'c'|| key=='C')
				{
					ans=true;
					score+=5;
				}
				else if(key=='b' || key=='B' || key=='a' || key=='A')
				{
					ongamePage=6;
				}
			}
			else if(page==9)
			{
				if(key== 'c'|| key=='C')
				{
					ans=true;
					score+=5;
				}
				else if(key=='b' || key=='B' || key=='a' || key=='A')
				{
					ongamePage=6;
				}
			}
			else if(page==10)
			{
				if(key== 'b'|| key=='B')
				{
					ans=true;
					score+=5;
				}
				else if(key=='c' || key=='C' || key=='a' || key=='A')
				{
					ongamePage=6;
				}
			}
			else if(page==11)
			{
				if(key== 'a'|| key=='A')
				{
					ans=true;
					score+=5;
				}
				else if(key=='b' || key=='B' || key=='c' || key=='C')
				{
					ongamePage=6;
				}
			}
			else if(page==12)
			{
				if(key== 'b'|| key=='B')
				{
					ans=true;
					score+=5;
				}
				else if(key=='c' || key=='C' || key=='a' || key=='A')
				{
					ongamePage=6;
				}
			}
			else if(page==13)
			{
				if(key== 'c'|| key=='C')
				{
					ans=true;
					score+=5;
				}
				else if(key=='b' || key=='B' || key=='a' || key=='A')
				{
					ongamePage=6;
				}
			}
			else if(page==14)
			{
				if(key== 'b'|| key=='B')
				{
					ans=true;
					score+=5;
				}
				else if(key=='c' || key=='B' || key=='a' || key=='A')
				{
					ongamePage=6;
				}
			}
			else if(page==15)
			{
				if(key== 'a'|| key=='A')
				{
					ans=true;
					score+=5;
				}
				else if(key=='b' || key=='B' || key=='c' || key=='C')
				{
					ongamePage=6;
				}
			}
			else if(page==16)
			{
				if(key== 'a'|| key=='A')
				{
					ans=true;
					score+=5;
				}
				else if(key=='b' || key=='B' || key=='c' || key=='C')
				{
					ongamePage=6;
				}
			}
			else if(page==17)
			{
				if(key== 'b'|| key=='B')
				{
					ans=true;
					score+=5;
				}
				else if(key=='c' || key=='C' || key=='a' || key=='A')
				{
					ongamePage=6;
				}
			}
			else if(page==18)
			{
				if(key== 'b'|| key=='B')
				{
					ans=true;
					score+=5;
				}
				else if(key=='c' || key=='C' || key=='a' || key=='A')
				{
					ongamePage=6;
				}
			}
			else if(page==19)
			{
				if(key== 'b'|| key=='B')
				{
					ans=true;
					score+=5;
				}
				else if(key=='c' || key=='C' || key=='a' || key=='A')
				{
					ongamePage=6;
				}
			}
			
			
			


			if(page==0 && ans==true && (key=='p'||key=='P')){
		
				page=1;
				ans=false;
			}
			else if(page==1 && ans==true && (key=='p'||key=='P')){
		
				page=2;
				ans=false;
			}
			else if(page==2 && ans==true && (key=='p'||key=='P')){
		
				page=3;
				ans=false;
			}
			else if(page==3 && ans==true && (key=='p'||key=='P')){
		
				page=4;
				ans=false;
			}
			else if(page==4 && ans==true && (key=='p'||key=='P')){
		
				page=5;
				ans=false;
			}
			else if(page==5 && ans==true && (key=='p'||key=='P')){
		
				page=6;
				ans=false;
			}
			else if(page==6 && ans==true && (key=='p'||key=='P')){
		
				page=7;
				ans=false;
			}
			else if(page==7 && ans==true && (key=='p'||key=='P')){
		
				page=8;
				ans=false;
			}
			else if(page==8 && ans==true && (key=='p'||key=='P')){
		
				page=9;
				ans=false;
			}
			else if(page==9 && ans==true && (key=='p'||key=='P')){
		
				page=10;
				ans=false;
			}
			else if(page==10 && ans==true && (key=='p'||key=='P')){
		
				page=11;
				ans=false;
			}
			else if(page==11 && ans==true && (key=='p'||key=='P')){
		
				page=12;
				ans=false;
			}
			else if(page==12 && ans==true && (key=='p'||key=='P')){
		
				page=13;
				ans=false;
			}
			else if(page==13 && ans==true && (key=='p'||key=='P')){
		
				page=14;
				ans=false;
			}
			else if(page==14 && ans==true && (key=='p'||key=='P')){
		
				page=15;
				ans=false;
			}
			else if(page==15 && ans==true && (key=='p'||key=='P')){
		
				page=16;
				ans=false;
			}
			else if(page==16 && ans==true && (key=='p'||key=='P')){
		
				page=17;
				ans=false;
			}
			else if(page==17 && ans==true && (key=='p'||key=='P')){
		
				page=18;
				ans=false;
			}
			else if(page==18 && ans==true && (key=='p'||key=='P')){
		
				page=19;
				ans=false;
			}
			else if(page==19 && ans==true){
		
				page=40;
				ans=false;
			}
			else if(page==40 && (key=='x' || key=='X')){
		
				
				ans=false;
				ongamePage=0;
				page=0;
				score=0;
			}
	}
}


/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_HOME)
	{
		ongamePage=0;	
	}
}

int main()
{
	if(musicOn)
	{
		//PlaySound("Ado\\we_are_trap.wav",NULL,SND_LOOP|SND_ASYNC);
		//PlaySound("Ado\\whale.wav",NULL,SND_LOOP|SND_ASYNC);
		PlaySound("Ado\\The Original Anonymous Theme Song ( DOWNLOAD ).wav",NULL,SND_LOOP|SND_ASYNC);
	}
	
	iInitialize(screenWidth,screenHight,"TheQuizGame");
	return 0;
}	