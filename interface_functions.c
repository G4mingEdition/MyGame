#include "mygames.h"

void mg_interface_1(char *title, int color_1, int color_2, int color_3, int text_color)
{
    /** VARIABLES **/
    int length, x, x1, x2;

    textbackground(color_1); MYclrwin(1, 1, 80, 25);
    textbackground(color_2); MYclrwin(1, 17, 80, 17);
    textbackground(color_3); MYclrwin(1, 18, 80, 25);

    length=strlen(title);

    x=(80-length)/2;
    x1=x-1;
    x2=x+length;
    textbackground(color_3); MYclrwin(x1, 1, x2, 1); gotoxy(x, 1); textcolor(color_2*16+text_color); printf("%s", title);
    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}

void mg_interface_2(char *title, int color_1, int color_2, int color_3, int text_color)
{
    /** VARIABLES **/
    int length, x;

    textbackground(color_1); MYclrwin(1, 1, 20, 25);
    textbackground(color_2); MYclrwin(21, 1, 21, 25);
    textbackground(color_3); MYclrwin(22, 1, 80, 25);
    textbackground(color_2); MYclrwin(1, 1, 80, 1);

    length=strlen(title);

    x=(20-length)/2;
    gotoxy(x, 1); textcolor(color_2*16+text_color); printf("%s", title);
    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}

void mg_interface_3(char *title, int color_1, int color_2, int color_3, int text_color)
{
    /** VARIABLES **/
    int length, x;

    textbackground(color_3); MYclrwin(1, 1, 80, 25);
    textbackground(color_1); MYclrwin(4, 6, 77, 24);
    textbackground(color_2); MYclrwin(4, 2, 77, 4);
    textbackground(color_3); MYclrwin(4, 5, 77, 5);

    length=strlen(title);

    x=(80-length)/2;
    gotoxy(x, 3); textattr(color_2*16+text_color); printf("%s", title);
    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}

void mg_interface_4(char *title, int color_1, int color_2, int color_3, int color_4, int color_5, int color_6, int color_7, int text_color)
{
    /** VARIABLES **/
    int length, x;

    textbackground(color_1); MYclrwin(1,1,80,3);
    textbackground(color_3); MYclrwin(1,4,80,25);
    textbackground(color_4); MYclrwin(3,5,20,5);
    textbackground(color_5); MYclrwin(3,6,20,9);
    textbackground(color_6); MYclrwin(23,5,78,9);
    textbackground(color_7); MYclrwin(3,11,78,24);

    length=strlen(title);
    x=(80-length)/2;
    textbackground(color_2); MYclrwin(3,2,78,2);
    gotoxy(x, 2); textattr(color_2*16+text_color); printf("%s", title);

    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}

void mg_animated_text(char *text, int speed, int x, int y, int limit, int color, int text_color)
{
    /** VARIABLES **/
    int i, newline, lenght;

    lenght = strlen(text);
    if(x>=1 && y>=1 && lenght>=1 && speed>=1 && x<=limit)
    {
        gotoxy(x, y); textattr(color*16+text_color);
        newline=0;
        for(i=0; i<lenght; i++)
        {
            Sleep(300/speed);
            printf("%c", text[i]);
            if((newline+x)==(limit))
            {
                gotoxy(x, ++y);
                newline=-1;
            }
            newline++;
        }
    }
    else if(x<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: x<1");
    }
    else if(y<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: y<1");
    }
    else if(lenght<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: lenght<1");
    }
    else if(speed<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: speed<1");
    }
    else if(x>limit)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: x<limit");
    }
    else
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error");
    }

    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}

void mg_transition_1(int speed, int color)
{
    /** VARIABLES **/
    int l, c, limit;

    if(speed>=1)
    {
        l = 0;
        limit = 79;
        while(l<=12)
        {
            c = 0;
            if(l == 12) limit = 40;
            while(c<=limit)
            {
                if(c%speed == 0) Sleep(1);
                textbackground(color); MYclrwin(1+c,1+l,1+c,1+l); MYclrwin(80-c,25-l,80-c,25-l);
                c++;
            }
            l++;
        }
    }
    else if(speed<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: speed<1");
    }
    else
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error");
    }
    Sleep(1000);

    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}
