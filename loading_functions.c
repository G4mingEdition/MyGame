#include "mygames.h"

void mg_small_loading_bar(int x, int y, int color_1, int color_2)
{
    /** VARIABLES **/
    int i;

    if(x>=1 && y>=1)
    {
        srand(time(NULL));
        textbackground(color_1); MYclrwin(x, y, x+SMALL_BAR-1, y);
        for(i=0; i<=SMALL_BAR-1; i++)
        {
            textbackground(color_2); MYclrwin(x+i, y, x+i, y);
            Sleep(rand()%(300-40+1)+10);
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
    else
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error");
    }
    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}

void mg_medium_loading_bar(int x, int y, int color_1, int color_2)
{
    /** VARIABLES **/
    int i;

    if(x>=1 && y>=1)
    {
        srand(time(NULL));
        textbackground(color_1); MYclrwin(x, y, x+MEDIUM_BAR-1, y);
        for(i=0; i<=MEDIUM_BAR-1; i++)
        {
            textbackground(color_2); MYclrwin(x+i, y, x+i, y);
            Sleep(rand()%(150-30+1)+10);
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
    else
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error");
    }
    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}

void mg_large_loading_bar(int x, int y, int color_1, int color_2)
{
    /** VARIABLES **/
    int i;

    if(x>=1 && y>=1)
    {
        srand(time(NULL));
        textbackground(color_1); MYclrwin(x, y, x+LARGE_BAR-1, y);
        for(i=0; i<=LARGE_BAR-1; i++)
        {
            textbackground(color_2); MYclrwin(x+i, y, x+i, y);
            Sleep(rand()%(100-10+1)+10);
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
    else
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error");
    }
    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}

void mg_custom_loading_bar(int x, int y, int color_1, int color_2, int length, int width)
{
    /** VARIABLES **/
    int i;

    if(x>=1 && y>=1 && length>=1 && width>=1)
    {
        srand(time(NULL));
        textbackground(color_1); MYclrwin(x, y, x+length-1, y+width-1);
        for(i=0; i<=length-1; i++)
        {
            textbackground(color_2); MYclrwin(x+i, y, x+i, y+width-1);
            Sleep(rand()%(150-10+1)+10);
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
    else if(length<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: length<1");
    }
    else if(width<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: width<1");
    }
    else
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error");
    }
    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}
