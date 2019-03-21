#include "mygames.h"

unsigned int mg_simple_random_color(int x1, int y1, int x2, int y2, int seconds)
{
    /** VARIABLES **/
    int time_limit = seconds*10;
    int i;
    unsigned int color;

    if(x1>=1 && y1>=1 && x2>=1 && y2>=1 && x2>=x1 && y2>=y1)
    {
        srand(time(NULL));
        for(i=0; i<time_limit; i++)
        {
            color = rand()%15;
            textbackground(color);
            MYclrwin(x1, y1, x2, y2);
            Sleep(100);
        }
    }
    else if (x1<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: x1<1");
    }
    else if (y1<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: y1<1");
    }
    else if (x2<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: x2<1");
    }
    else if (y2<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: y2<1");
    }
    else if(x2<x1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: x2<x1");
    }
    else if(y2<y1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: y2<y1");
    }

    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
    return(color);
}

void mg_animated_card(char carte, int x, int y, int size_x, int size_y, int color_1, int color_2, int text_color)
{
    textbackground(color_2); MYclrwin(x, y, x+size_x, y+size_y); gotoxy(x+(size_x/2), y+(size_y/2));
    Sleep(1000);
    textbackground(color_1); MYclrwin(x, y, x+size_x, y+size_y); gotoxy(x+(size_x/2), y+(size_y/2));
    textbackground(color_2); MYclrwin(x+(size_x/2), y, x+(size_x/2), y+size_y); gotoxy(x+(size_x/2), y+(size_y/2));
    Sleep(150);
    textbackground(color_2); MYclrwin(x, y, x+size_x, y+size_y); gotoxy(x+(size_x/2), y+(size_y/2)); textcolor(text_color); printf("%c", carte);

    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}
