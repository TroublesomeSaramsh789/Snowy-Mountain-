#include<graphics.h>
#include<iostream>
#include<conio.h>
using namespace std;
int snowflakes()
{
     settextstyle(8, 0, 3);
        int  ran=rand()%600, ran2=rand()%950;
        if (ran<400 || ran> 350)
       {    setbkcolor(CYAN);
            setcolor(WHITE);
           if(ran>500)
             {
                 setbkcolor(LIGHTGRAY);
                 outtextxy(ran2, ran, "*");
             }
              //else if (ran<300)
                //if(ran2<200 ||ran2>350)
           outtextxy(ran2, ran, "*");
           // Outer Structure
            int outer0[] = {0,600,     0,460,  55,400,     70,430,     165,340,    220,250,    255,260,    340,410,    365,395,    455,465,
                                485,440,        540,450,    605,390,    615,410,    720,280,    860,460,    880,440,    890,435,    950,520,    950,600};
            // Shadow
            int shadow[]={0,600,  0,520,  55,400,    108,507,  220,400,   250,260,    255,260,    355,435,    365,395,      475,480,  485,440,    590, 455,
                                605,390,    640,460,    720, 350,    730,290 ,  880,490,    890,435,    950,520,    950,600};

            // Shape of mountain
                setcolor(WHITE);
                setfillstyle(SOLID_FILL,WHITE);
                fillpoly(20,outer0);
            //  Shadow in mountain
                setcolor(LIGHTGRAY);
                setfillstyle(SOLID_FILL,LIGHTGRAY);
                fillpoly(20,shadow);
       }
        delay(100);
}

void snow(int x, int y)
{
    setcolor(WHITE);
    int randomx=rand()%900-20;
int randomy=rand()%600+30;
   line(x+1+randomx,y+randomy,x+1+randomx,y+4+randomy);
    line(x+randomx,y+randomy,x+randomx,y+4+randomy);
   line(x-1+randomx,y+randomy,x-1+randomx,y+4+randomy);
   line(x-2+randomx,y+randomy,x-2+randomx,y+4+randomy);
   setcolor(8);
   line(x+2+randomx,y+randomy,x+2+randomx,y+4+randomy);

}
void mountain1() {

            // Outer Structure
            int outer0[] = {0,600,     0,460,  55,400,     70,430,     165,340,    220,250,    255,260,    340,410,    365,395,    455,465,
                                485,440,        540,450,    605,390,    615,410,    720,280,    860,460,    880,440,    890,435,    950,520,    950,600};
            // Shadow
            int shadow[]={0,600,  0,520,  55,400,    108,507,  220,400,   250,260,    255,260,    355,435,    365,395,      475,480,  485,440,    590, 455,
                                605,390,    670,480,    720, 340,    730,290 ,  880,486,    890,435,    950,520,    950,600};
            // Sky Background
            setfillstyle(SOLID_FILL,CYAN);
            floodfill(0,0,LIGHTCYAN);
            settextstyle(7,0,29);
            outtextxy(120,130,"SNOWY MOUNTAIN");
            setcolor(YELLOW);
                        settextstyle(3,0,25);
            outtextxy(610,190,"By Saramsh Shrestha");
            // Shape of mountain
                setcolor(WHITE);
                setfillstyle(SOLID_FILL,WHITE);
                fillpoly(20,outer0);
            //  Shadow in mountain
                setcolor(LIGHTGRAY);
                setfillstyle(SOLID_FILL,LIGHTGRAY);
                fillpoly(20,shadow);
}
void mountain() {

            // Outer Structure
            int outer0[] = {0,600,     0,460,  55,400,     70,430,     165,340,    220,250,    255,260,    340,410,    365,395,    455,465,
                                485,440,        540,450,    605,390,    615,410,    720,280,    860,460,    880,440,    890,435,    950,520,    950,600};
            // Shadow
            int shadow[]={0,600,  0,520,  55,400,    108,507,  220,400,   250,260,    255,260,    355,435,    365,395,      475,480,  485,440,    590, 455,
                                605,390,    670,480,    720, 340,    730,290 ,  880,486,    890,435,    950,520,    950,600};
            // Sky Background
            setfillstyle(SOLID_FILL,CYAN);
            floodfill(0,0,LIGHTCYAN);
            // Shape of mountain
                setcolor(WHITE);
                setfillstyle(SOLID_FILL,WHITE);
                fillpoly(20,outer0);
            //  Shadow in mountain
                setcolor(LIGHTGRAY);
                setfillstyle(SOLID_FILL,LIGHTGRAY);
                fillpoly(20,shadow);
}

class Drop
{
public:
     int x= rand()%55;
   int y=rand()%(40);
   int yspeed= rand()%10;

   void fall()
   {
       y=yspeed;
   }
   void show()
  {
      for(int i=10; i<25; i++)
      { mountain();
          for(int a=1;a<25;a++)
         {
             snow(x,y);snow(x,y);snow(x,y);snow(x,y);snow(x,y);snow(x,y);snow(x,y);snow(x,y);snow(x,y);snow(x,y);
         }
   //Extra Snow
   fall();
   delay(800);
   cleardevice();
      }

  }
};
    int main()
{
    int a,i=0;
    int gd = DETECT, gm;
    initwindow(950,600);
    setbkcolor(CYAN);
    settextstyle(10, 0, 4); //settextstyle(font, direction, font_size);
    mountain1();
    setcolor(WHITE);
      do{  int input;
 /////////////////////////////CONSOLE UI
cout<<"SNOW TYPE CHOOSE:"<<endl;
cout<<"SNOWFALL: PRESS 1"<<endl;
cout<<"SNOWFLAKES: PRESS 2"<<endl;
cin>>input;

                                    if(input==1)
                                       {
                                           Drop d[100];
                                        for(i=0;i<100;i++)
                                        {
                                           d[i].fall();
                                            d[i].show();
                                            }
                                       }

                              else if(input==2)
                              {
                                  mountain();
                                for(int a=0;a<700;a++)
                                snowflakes();
                              }
        else
                a=1;

}
while(a!=0);
       getch();
    closegraph();
}
