#include<stdio.h>
#include<windows.h>
#include<graphics.h>
#include<time.h>

void screen();
void scr_time();
void scr_time2();
void f1();
void f2();
void f3();
void f4();
void f5();
void day();
void age();
void eng_ban();
void help();
void h1();
void h2();
void h3();
void h4();

int main()
{
    initwindow(800,600);
    setbkcolor(BLACK);
    screen();
    getch();
}

void scr_time()
{
    time_t rawTime;
    struct tm * currentTime;
    char a[100];
    settextstyle(8,0,6);
    setcolor(10);
    outtextxy(150,120,"BIRTHDAY BASH !!!");
    settextstyle(4,0,3);
    setcolor(12);
    outtextxy(180,400,"Press Any Key to Continue");

    while(!kbhit())
    {
        rawTime=time(NULL);
        currentTime=localtime(&rawTime);
        strftime(a,100,"%I:%M:%S",currentTime);
        setcolor(9);
        settextstyle(3,0,3);
        outtextxy(660,20,a);

        strftime(a,100,"%p",currentTime);
        settextstyle(8,0,2);
        outtextxy(760,25,a);

        strftime(a,100,"%d %b %Y",currentTime);
        settextstyle(3,0,2);
        outtextxy(665,50,a);

        delay(1000);
    }
}

void scr_time2()
{
    time_t rawTime;
    struct tm * currentTime;
    char a[100];
    while(!kbhit())
    {
        rawTime=time(NULL);
        currentTime=localtime(&rawTime);
        strftime(a,100,"%I:%M:%S",currentTime);
        setcolor(9);
        settextstyle(3,0,3);
        outtextxy(660,20,a);

        strftime(a,100,"%p",currentTime);
        settextstyle(8,0,2);
        outtextxy(760,25,a);

        strftime(a,100,"%d %b %Y",currentTime);
        settextstyle(3,0,2);
        outtextxy(665,50,a);

        delay(1000);
    }
}

void screen()
{
    int i,j;
    for(i=0,j=60; i<360&&j<361; i++,j++)
    {
        settextstyle(8,0,6);
        setcolor(13);
        outtextxy(150,120,"BIRTHDAY BASH !!!");
        settextstyle(3,0,2);
        setcolor(12);
        outtextxy(350,410,"LOADING....");
        setcolor(5);
        setlinestyle(1,0,8);
        ellipse(400,420,i,j,80,70);
        delay(15);
        cleardevice();
    }
    //Beep(1000,200);
    scr_time();
    getch();
    cleardevice();
    f1();
}
void f1()
{
    settextstyle(4,0,4);
    setcolor(9);
    outtextxy(230,100,"Main Menu");
    setfillstyle(9,9);
    bar(230,140,480,145);
    settextstyle(3,0,4);
    setcolor(9);
    outtextxy(200,200,"Find day of your birth");
    setcolor(WHITE);
    outtextxy(200,250,"Find age");
    outtextxy(200,300,"Find Bangla date of your birthday");
    outtextxy(200,350,"Help");
    outtextxy(200,400,"Exit");
    scr_time2();

    char ch=getch();
    char a;

    if(ch==13)
    {
        cleardevice();
        day();

    }
    else if(ch==0)
    {
        a=getch();
        if(a==80)
            f2();
        else if(a==72)
            f5();
    }
    getch();
}

void f2()
{
    settextstyle(4,0,4);
    setcolor(9);
    outtextxy(230,100,"Main Menu");
    setcolor(8);
    bar(230,140,480,145);
    settextstyle(3,0,4);
    setcolor(WHITE);
    outtextxy(200,200,"Find day of your birth");
    setcolor(9);
    outtextxy(200,250,"Find age");
    setcolor(WHITE);
    outtextxy(200,300,"Find Bangla date of your birthday");
    outtextxy(200,350,"Help");
    outtextxy(200,400,"Exit");

    char ch=getch();
    char a;
    if(ch==13)
    {
        cleardevice();
        age();
    }
    else if(ch==0)
    {
        a=getch();
        if(a==80)
            f3();
        else if(a==72)
            f1();
    }
    getch();
}

void f3()
{
    settextstyle(4,0,4);
    setcolor(9);
    outtextxy(230,100,"Main Menu");
    setcolor(8);
    bar(230,140,480,145);
    settextstyle(3,0,4);
    setcolor(WHITE);
    outtextxy(200,200,"Find day of your birth");
    outtextxy(200,250,"Find age");
    setcolor(9);
    outtextxy(200,300,"Find Bangla date of your birthday");
    setcolor(WHITE);
    outtextxy(200,350,"Help");
    outtextxy(200,400,"Exit");

    char ch=getch();
    char a;

    if(ch==13)
    {
        cleardevice();
        eng_ban();
    }
    else if(ch==0)
    {
        a=getch();
        if(a==80)
            f4();
        else if(a==72)
            f2();
    }
    getch();
}
void f4()
{
    settextstyle(4,0,4);
    setcolor(9);
    outtextxy(230,100,"Main Menu");
    setcolor(8);
    bar(230,140,480,145);
    settextstyle(3,0,4);
    setcolor(WHITE);
    outtextxy(200,200,"Find day of your birth");
    outtextxy(200,250,"Find age");
    outtextxy(200,300,"Find Bangla date of your birthday");
    setcolor(9);
    outtextxy(200,350,"Help");
    setcolor(WHITE);
    outtextxy(200,400,"Exit");
    scr_time2();

    char ch=getch();
    char a;

    if(ch==13)
    {
        help();
    }
    else if(ch==0)
    {
        a=getch();
        if(a==80)
            f5();
        else if(a==72)
            f3();
    }
    getch();
}

void f5()
{
    settextstyle(4,0,4);
    setcolor(9);
    outtextxy(230,100,"Main Menu");
    setcolor(8);
    bar(230,140,480,145);
    settextstyle(3,0,4);
    setcolor(WHITE);
    outtextxy(200,200,"Find day of your birth");
    outtextxy(200,250,"Find age");
    outtextxy(200,300,"Find Bangla date of your birthday");
    outtextxy(200,350,"Help");
    setcolor(9);
    outtextxy(200,400,"Exit");

    char ch=getch();
    char a;

    if(ch==13)
    {
        exit(0);
    }
    else if(ch==0)
    {
        a=getch();
        if(a==80)
            f1();
        else if(a==72)
            f4();
    }
    getch();
}

void day ()
{
    int day, month, year, weekday ;
    setfillstyle(5,WHITE);
    floodfill(790,555,WHITE);
    printf("Enter the date of your birthday(dd/mm/yyyy):\n");
    scanf("%d %d %d",&day,&month,&year);
    if(month<3)
        day = day + year - 1;
    else
        day = day + year - 2;

    weekday = ((23 * month/9) + day + 4 + year/4 - year/100 + year/400)%7;
    settextstyle(4,0,4);
    setcolor(10);
    outtextxy(100,200,"The day of of your birth is :");
    if(weekday==0)
    {
        printf("\n\n\n");
        outtextxy(270,260," Sunday.");
        getch();
        cleardevice();
        f1();
    }
    else if(weekday==1)
    {
        printf("\n\n\n");
        outtextxy(270,260," Monday.");
        getch();
        cleardevice();
        f1();
    }
    else if(weekday==2)
    {
        printf("\n\n\n");
        outtextxy(270,260," Tuesday.");
        getch();
        cleardevice();
        f1();
    }
    else if(weekday==3)
    {
        printf("\n\n\n");
        outtextxy(270,260," Wednesday.");
        getch();
        cleardevice();
        f1();
    }
    else if(weekday==4)
    {
        printf("\n\n\n");
        outtextxy(270,260," Thursday.");
        getch();
        cleardevice();
        f1();
    }
    else if(weekday==5)
    {
        printf("\n\n\n");
        outtextxy(270,260," Friday.");
        getch();
        cleardevice();
        f1();
    }
    else if(weekday==6)
    {
        printf("\n\n\n");
        outtextxy(270,260," Saturday.");
        getch();
        cleardevice();
        f1();
    }
}

void age()
{
    int d1,m1,y1,d2,m2,y2,d3,m3,y3;
    setfillstyle(5,WHITE);
    floodfill(790,555,WHITE);
    printf("Please enter the date till you want to find your age(dd/mm/yyyy):\n");
    scanf("%d %d %d",&d1,&m1,&y1);
    printf("Please enter the date of birth(dd/mm/yyyy):\n");
    scanf("%d %d %d",&d2,&m2,&y2);
    setcolor(2);
    settextstyle(3,0,4);

    if(d1>31||d1<=0||d2>31||d2<=0||m1>12||m2>12||m1<=0||m2<=0)
    {
        printf("\n\n\n");
        outtextxy(100,200,"You provide wrong information please ");
        outtextxy(200,250,"correct your information.");
        getch();
        cleardevice();
        f1();
    }

    else if(y1==y2)
    {
        if(m1==m2)
        {
            if(d1==d2)
            {
                printf("\n\n\n");
                outtextxy(200,200,"This kid just born today.");
                getch();
                cleardevice();
                f1();
            }
            else if(d1>d2)
            {
                printf("\n\n\n");
                char arr[200];
                sprintf(arr,"The age of kid is %d days.",d1-d2);
                outtextxy(200,200,arr);
                getch();
                cleardevice();
                f1();
            }
            else if(d2>d1)
            {
                printf("\n\n\n");
                outtextxy(200,200,"This kid is not born yet.");
                getch();
                cleardevice();
                f1();
            }
        }
        else if(m2>m1)
        {
            printf("\n\n\n");
            outtextxy(200,200,"This kid is not born yet.");
            getch();
            cleardevice();
            f1();
        }
        else if(m1>m2)
        {
            if(d1==d2)
            {
                printf("\n\n\n");
                char arr[200];
                sprintf(arr,"The age of kid is %d month 0 day.",m1-m2);
                outtextxy(150,200,arr);
                getch();
                cleardevice();
                f1();
            }
            else if(d2>d1)
            {
                m1=m1-1;
                d1=d1+30;
                d3=d1-d2;
                m3=m1-m2;
                printf("\n\n\n");
                char arr[200];
                sprintf(arr,"The age of kid is %d month %d days.",m3,d3);
                outtextxy(150,200,arr);
                getch();
                cleardevice();
                f1();
            }
            else
            {
                d3=d1-d2;
                m3=m1-m2;
                y3=y1-y2;
                printf("\n\n\n");
                char arr[200];
                sprintf(arr,"The age of kid is %d month %d days.",m3,d3);
                outtextxy(150,200,arr);
                getch();
                cleardevice();
                f1();
            }
        }
    }
    else if(y1<y2)
    {
        printf("\n\n\n");
        outtextxy(200,200,"This kid is not born yet.");
        getch();
        cleardevice();
        f1();
    }
    else if(y1>y2)
    {
        if(m1==m2)
        {
            if(d1==d2)
            {
                printf("\n\n\n");
                char arr[200];
                sprintf(arr,"Your age is %d year 0 months 0 days.",y1-y2);
                outtextxy(150,200,arr);
                getch();
                cleardevice();
                f1();
            }
            else if(d1>d2)
            {
                d3=d1-d2;
                y3=y1-y2;
                printf("\n\n\n");
                char arr[200];
                sprintf(arr,"Your age is %d year 0 month %d days.",y3,d3);
                outtextxy(150,200,arr);
                getch();
                cleardevice();
                f1();
            }
            else
            {
                d1=d1+30;
                m2=m2+1;
                m1=m1+12;
                y1=y1-1;
                d3=d1-d2;
                m3=m1-m2;
                y3=y1-y2;
                printf("\n\n\n");
                char arr[200];
                sprintf(arr,"Your age is %d year %d month %d days.",y3,m3,d3);
                outtextxy(150,200,arr);
                getch();
                cleardevice();
                f1();
            }
        }
        else if(m1>m2)
        {
            if(d1==d2)
            {
                m3=m1-m2;
                y3=y1-y2;
                printf("\n\n\n");
                char arr[200];
                sprintf(arr,"Your age is %d year %d month 0 days.",y3,m3);
                outtextxy(150,200,arr);
                getch();
                cleardevice();
                f1();
            }
            else if(d1>d2)
            {
                d3=d1-d2;
                m3=m1-m2;
                y3=y1-y2;
                printf("\n\n\n");
                char arr[200];
                sprintf(arr,"Your age is %d year %d month %d days.",y3,m3,d3);
                outtextxy(150,200,arr);
                getch();
                cleardevice();
                f1();
            }
            else
            {
                d1=d1+30;
                m2=m2+1;
                d3=d1-d2;
                m3=m1-m2;
                y3=y1-y2;
                printf("\n\n\n");
                char arr[200];
                sprintf(arr,"Your age is %d year %d month %d days.",y3,m3,d3);
                outtextxy(150,200,arr);
                getch();
                cleardevice();
                f1();
            }
        }
        else
        {
            if(d1==d2)
            {
                m1=m1+12;
                y2=y2+1;
                m3=m1-m2;
                y3=y1-y2;
                printf("\n\n\n");
                char arr[200];
                sprintf(arr,"Your age is %d year %d month 0 days.",y3,m3);
                outtextxy(150,200,arr);
                getch();
                cleardevice();
                f1();
            }
            else if(d1>d2)
            {
                m1=m1+12;
                y2=y2+1;
                d3=d1-d2;
                m3=m1-m2;
                y3=y1-y2;
                printf("\n\n\n");
                char arr[200];
                sprintf(arr,"Your age is %d year %d month %d days.",y3,m3,d3);
                outtextxy(150,200,arr);
                getch();
                cleardevice();
                f1();
            }
            else
            {
                d1=d1+30;
                m2=m2+1;
                m1=m1+12;
                y2=y2+1;
                d3=d1-d2;
                m3=m1-m2;
                y3=y1-y2;
                printf("\n\n\n");
                char arr[200];
                sprintf(arr,"Your age is %d year %d month %d days.",y3,m3,d3);
                outtextxy(150,200,arr);
                getch();
                cleardevice();
                f1();
            }
        }
    }
}

void eng_ban()
{
    int date,month,year;
    char* name;
    setfillstyle(5,WHITE);
    floodfill(790,555,WHITE);
    printf("Enter the date of birth(dd/mm/yyyy):\n");
    scanf("%d%d%d",&date,&month,&year);
    if(month>4 && month<=12)
        year=year-593;
    else
        year=year-1-593;

    if(month==4)
    {
        if(date<14)
        {
            month=12;
            name="Chaitra";
            date=date+14+3;
        }
        else if(date>=14)
        {
            month=1;
            name="Boishakh";
            date=date-14+1;
        }
    }
    else if(month==5)
    {
        if(date<15)
        {
            month=1;
            name="Boishakh";
            date=date+15+2;
        }
        else if(date>=15)
        {
            month=2;
            name="Joistha";
            date=date-15+1;
        }
    }
    else if(month==6)
    {
        if(date<15)
        {
            month=2;
            name="Joistha";
            date=date+15+2;
        }
        else if(date>=15)
        {
            month=3;
            name="Ashar";
            date=date-15+1;
        }
    }
    else if(month==7)
    {
        if(date<16)
        {
            month=3;
            name="Ashar";
            date=date+16;
        }
        else if(date>=16)
        {
            month=4;
            name="Srabon";
            date=date-16+1;
        }
    }
    else if(month==8)
    {
        if(date<16)
        {
            month=4;
            name="Srabon";
            date=date+16;
        }
        else if(date>=16)
        {
            month=5;
            name="Vadro";
            date=date-16+1;
        }
    }
    else if(month==9)
    {
        if(date<16)
        {
            month=5;
            name="Vadro";
            date=date+16;
        }
        else if(date>=16)
        {
            month=6;
            name="Ashwin";
            date=date-16+1;
        }
    }
    else if(month==10)
    {
        if(date<16)
        {
            month=6;
            name="Aswin";
            date=date+15;
        }
        else if(date>=16)
        {
            month=7;
            name="Kartik";
            date=date-16+1;
        }
    }
    else if(month==11)
    {
        if(date<15)
        {
            month=7;
            name="Kartik";
            date=date+15+1;
        }
        else if(date>=15)
        {
            month=8;
            name="Agrahoyon";
            date=date-15+1;
        }
    }
    else if(month==12)
    {
        if(date<15)
        {
            month=8;
            name="Agrahoyon";
            date=date+15+1;
        }
        else if(date>=15)
        {
            month=9;
            name="Poush";
            date=date-15+1;
        }
    }
    else if(month==1)
    {
        if(date<14)
        {
            month=9;
            name="Poush";
            date=date+14+3;
        }
        else if(date>=14)
        {
            month=10;
            name="Magh";
            date=date-14+1;
        }
    }
    else if(month==2)
    {
        if(date<13)
        {
            month=10;
            name="Magh";
            date=date+13+5;
        }
        else if(date>=13)
        {
            month=11;
            name="Falgun";
            date=date-13+1;
        }
    }
    else if(month==3)
    {
        if(date<15)
        {
            month=11;
            name="Falgun";
            date=date+15+2;
        }
        else if(date>=15)
        {
            month=12;
            name="Choitra";
            date=date-15+1;
        }
    }
    printf("\n\n\n");
    setcolor(3);
    outtextxy(100,200,"Bangla date of your birthday is:");
    char arr[200];
    sprintf(arr,"%d %s (Month Number=%d) %d",date,name,month,year);
    outtextxy(100,250,arr);
    getch();
    cleardevice();
    f1();
}

void help()
{
    cleardevice();
    h1();
}

void h1()
{
    settextstyle(4,0,4);
    setcolor(9);
    outtextxy(280,100,"Help");
    setfillstyle(9,9);
    bar(280,140,380,145);
    settextstyle(3,0,4);
    setcolor(9);
    outtextxy(150,200,"How to find weekday of your birth");
    setcolor(WHITE);
    outtextxy(150,250,"How to find your age");
    outtextxy(150,300,"How to find bangla date of your birthday");
    outtextxy(150,350,"Back");
    scr_time2();

    char ch=getch();
    char a;

    if(ch==13)
    {
        cleardevice();
        settextstyle(3,0,3);
        outtextxy(170,150,"To find weekday of your birthday you have to");
        outtextxy(170,180,"enter the date of your birthday 1st menu of");
        outtextxy(170,210,"main menu.");
        outtextxy(170,260,"For example: Suppose your birthday is 03 May 1996");
        outtextxy(170,290,"you should enter 03 05 1996.");
        outtextxy(220,450,"****Press any key to back to help****");
        scr_time2();
        getch();
        cleardevice();
        h1();
    }
    else if(ch==0)
    {
        a=getch();
        if(a==80)
            h2();
        else if(a==72)
            h4();
    }
    getch();
}

void h2()
{
    settextstyle(4,0,4);
    setcolor(9);
    outtextxy(280,100,"Help");
    setfillstyle(9,9);
    bar(280,140,380,145);
    settextstyle(3,0,4);
    setcolor(WHITE);
    outtextxy(150,200,"How to find weekday of your birth");
    setcolor(9);
    outtextxy(150,250,"How to find your age");
    setcolor(WHITE);
    outtextxy(150,300,"How to find bangla date of your birthday");
    outtextxy(150,350,"Back");
    scr_time2();

    char ch=getch();
    char a;

    if(ch==13)
    {
        cleardevice();
        settextstyle(3,0,3);
        outtextxy(170,150,"To find age from your birthday you have to enter");
        outtextxy(170,180,"the date till you want to find your age then you");
        outtextxy(170,210,"you have to enter the date of your birthday.");
        outtextxy(170,260,"For example: Suppose your birthday is 03 May 1996");
        outtextxy(170,290,"and you want to find your age till 01 January 2017");
        outtextxy(170,320,"Then you should enter 01 01 2017 and 03 05 1996.");
        outtextxy(220,450,"****Press any key to back to help****");
        scr_time2();
        getch();
        cleardevice();
        h1();
    }
    else if(ch==0)
    {
        a=getch();
        if(a==80)
            h3();
        else if(a==72)
            h1();
    }
    getch();
}

void h3()
{
    settextstyle(4,0,4);
    setcolor(9);
    outtextxy(280,100,"Help");
    setfillstyle(9,9);
    bar(280,140,380,145);
    settextstyle(3,0,4);
    setcolor(WHITE);
    outtextxy(150,200,"How to find weekday of your birth");
    outtextxy(150,250,"How to find your age");
    setcolor(9);
    outtextxy(150,300,"How to find bangla date of your birthday");
    setcolor(WHITE);
    outtextxy(150,350,"Back");
    scr_time2();

    char ch=getch();
    char a;

    if(ch==13)
    {
        cleardevice();
        settextstyle(3,0,3);
        outtextxy(170,150,"To find bangla date of your birthday you have to");
        outtextxy(170,180,"enter the date of your birthday in 3rd menu of");
        outtextxy(170,210,"main menu.");
        outtextxy(170,260,"For example: Suppose your birthday is 03 May 1996");
        outtextxy(170,290,"you should enter 03 05 1996.");
        outtextxy(220,450,"****Press any key to back to help****");
        scr_time2();
        getch();
        cleardevice();
        h1();
    }
    else if(ch==0)
    {
        a=getch();
        if(a==80)
            h4();
        else if(a==72)
            h2();
    }
    getch();
}

void h4()
{
    settextstyle(4,0,4);
    setcolor(9);
    outtextxy(280,100,"Help");
    setfillstyle(9,9);
    bar(280,140,380,145);
    settextstyle(3,0,4);
    setcolor(WHITE);
    outtextxy(150,200,"How to find weekday of your birth");
    outtextxy(150,250,"How to find your age");
    outtextxy(150,300,"How to find bangla date of your birthday");
    setcolor(9);
    outtextxy(150,350,"Back");
    scr_time2();

    char ch=getch();
    char a;

    if(ch==13)
    {
        cleardevice();
        f4();
    }
    else if(ch==0)
    {
        a=getch();
        if(a==80)
            h1();
        else if(a==72)
            h3();
    }
    getch();
}
