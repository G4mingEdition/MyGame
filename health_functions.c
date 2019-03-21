#include "mygames.h"

void mg_small_health_bar(float current_health, float max_health, int x, int y, int color_1, int color_2, int color_3, int color_4)
{
    /** VARIABLES **/
    int health_bar=SMALL_BAR*current_health/max_health;

    if(x>=1 && y>=1 && current_health>=0 && max_health>0 && current_health<=max_health)
    {
        textbackground(color_1); MYclrwin(x, y, x+SMALL_BAR-1, y);
        if(current_health>=(max_health/2))
        {
            textbackground(color_2);
        }
        else if(current_health<(max_health/2) && current_health>=(max_health/4))
        {
            textbackground(color_3);
        }
        else if(current_health<(max_health/4) && current_health>0)
        {
            textbackground(color_4);
        }
        else if(current_health<=0)
        {
            textbackground(color_1);
        }
        MYclrwin(x, y, x+health_bar-1, y);
    }
    else if(x<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: x<1");
    }
    else if(y<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: y<1");
    }
    else if(current_health<0)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: current_health<0");
    }
    else if(max_health<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: max_health<1");
    }
    else if(current_health>max_health)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: current_health>max_health");
    }
    else
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error");
    }
    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}

void mg_medium_health_bar(float current_health, float max_health, int x, int y, int color_1, int color_2, int color_3, int color_4)
{
    /** VARIABLES **/
    int health_bar=MEDIUM_BAR*current_health/max_health;

    if(x>=1 && y>=1 && current_health>=0 && max_health>0 && current_health<=max_health)
    {
        textbackground(color_1); MYclrwin(x, y, x+MEDIUM_BAR-1, y);
        if(current_health>=(max_health/2))
        {
            textbackground(color_2);
        }
        else if(current_health<(max_health/2) && current_health>=(max_health/4))
        {
            textbackground(color_3);
        }
        else if(current_health<(max_health/4) && current_health>0)
        {
            textbackground(color_4);
        }
        else if(current_health<=0)
        {
            textbackground(color_1);
        }
        MYclrwin(x, y, x+health_bar-1, y);
    }
    else if(x<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: x<1");
    }
    else if(y<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: y<1");
    }
    else if(current_health<0)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: current_health<0");
    }
    else if(max_health<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: max_health<1");
    }
    else if(current_health>max_health)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: current_health>max_health");
    }
    else
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error");
    }
    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}

void mg_large_health_bar(float current_health, float max_health, int x, int y, int color_1, int color_2, int color_3, int color_4)
{
    /** VARIABLES **/
    int health_bar=LARGE_BAR*current_health/max_health;

    if(x>=1 && y>=1 && current_health>=0 && max_health>0 && current_health<=max_health)
    {
        textbackground(color_1); MYclrwin(x, y, x+LARGE_BAR-1, y);
        if(current_health>=(max_health/2))
        {
            textbackground(color_2);
        }
        else if(current_health<(max_health/2) && current_health>=(max_health/4))
        {
            textbackground(color_3);
        }
        else if(current_health<(max_health/4) && current_health>0)
        {
            textbackground(color_4);
        }
        else if(current_health<=0)
        {
            textbackground(color_1);
        }
        MYclrwin(x, y, x+health_bar-1, y);
    }
    else if(x<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: x<1");
    }
    else if(y<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: y<1");
    }
    else if(current_health<0)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: current_health<0");
    }
    else if(max_health<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: max_health<1");
    }
    else if(current_health>max_health)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: current_health>max_health");
    }
    else
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error");
    }
    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}

void mg_custom_health_bar(float current_health, float max_health, int x, int y, int color_1, int color_2, int color_3, int color_4, int length, int width)
{
    /** VARIABLES **/
    int health_bar;

    if(x>=1 && y>=1 && length>=1 && width>=1 && current_health>=0 && max_health>0 && current_health<=max_health)
    {
        health_bar=length*current_health/max_health;
        textbackground(color_1); MYclrwin(x, y, x+length-1, y+width-1);
        if(current_health>=(max_health/2))
        {
            textbackground(color_2);
        }
        else if(current_health<(max_health/2) && current_health>=(max_health/4))
        {
            textbackground(color_3);
        }
        else if(current_health<(max_health/4) && current_health>0)
        {
            textbackground(color_4);
        }
        else if(current_health<=0)
        {
            textbackground(color_1);
        }
        MYclrwin(x, y, x+health_bar-1, y+width-1);
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
    else if(current_health<0)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: current_health<0");
    }
    else if(max_health<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: max_health<1");
    }
    else if(current_health>max_health)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: current_health>max_health");
    }
    else
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error");
    }
    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}

void mg_update_health(float *current_health, float *max_health)
{
    if(*max_health>=1)
    {
        if(*current_health<0)
        {
            *current_health = 0;
        }
        else if(*current_health>*max_health)
        {
            *current_health = *max_health;
        }
    }
    else if(*max_health<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: max_health<1");
    }
    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}
