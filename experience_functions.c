#include "mygames.h"

void mg_small_experience_bar(float current_experience, float max_experience, int x, int y, int color_1, int color_2)
{
    /** VARIABLES **/
    int exp_bar=SMALL_BAR*current_experience/max_experience;

    if(x>=1 && y>=1 && current_experience>=0 && max_experience>0 && current_experience<=max_experience)
    {
        textbackground(color_1); MYclrwin(x, y, x+SMALL_BAR-1, y);
        if(current_experience>0)
        {
            textbackground(color_2);
        }
        else if(current_experience<=0)
        {
            textbackground(color_1);
        }
        MYclrwin(x, y, x+exp_bar-1, y);
    }
    else if(x<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: x<1");
    }
    else if(y<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: y<1");
    }
    else if(current_experience<0)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: current_experience<0");
    }
    else if(max_experience<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: max_experience<1");
    }
    else if(current_experience>max_experience)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: current_experience>max_experience");
    }
    else
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error");
    }
    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}

void mg_medium_experience_bar(float current_experience, float max_experience, int x, int y, int color_1, int color_2)
{
    /** VARIABLES **/
    int exp_bar=MEDIUM_BAR*current_experience/max_experience;

    if(x>=1 && y>=1 && current_experience>=0 && max_experience>0 && current_experience<=max_experience)
    {
        textbackground(color_1); MYclrwin(x, y, x+MEDIUM_BAR-1, y);
        if(current_experience>0)
        {
            textbackground(color_2);
        }
        else if(current_experience<=0)
        {
            textbackground(color_1);
        }
        MYclrwin(x, y, x+exp_bar-1, y);
    }
    else if(x<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: x<1");
    }
    else if(y<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: y<1");
    }
    else if(current_experience<0)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: current_experience<0");
    }
    else if(max_experience<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: max_experience<1");
    }
    else if(current_experience>max_experience)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: current_experience>max_experience");
    }
    else
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error");
    }
    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}

void mg_large_experience_bar(float current_experience, float max_experience, int x, int y, int color_1, int color_2)
{
    /** VARIABLES **/
    int exp_bar=LARGE_BAR*current_experience/max_experience;

    if(x>=1 && y>=1 && current_experience>=0 && max_experience>0 && current_experience<=max_experience)
    {
        textbackground(color_1); MYclrwin(x, y, x+LARGE_BAR-1, y);
        if(current_experience>0)
        {
            textbackground(color_2);
        }
        else if(current_experience<=0)
        {
            textbackground(color_1);
        }
        MYclrwin(x, y, x+exp_bar-1, y);
    }
    else if(x<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: x<1");
    }
    else if(y<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: y<1");
    }
    else if(current_experience<0)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: current_experience<0");
    }
    else if(max_experience<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: max_experience<1");
    }
    else if(current_experience>max_experience)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: current_experience>max_experience");
    }
    else
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error");
    }
    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}

void mg_custom_experience_bar(float current_experience, float max_experience, int x, int y, int color_1, int color_2, int length, int width)
{
    /** VARIABLES **/
    int exp_bar;

    if(x>=1 && y>=1 && length>=1 && width>=1 && current_experience>=0 && max_experience>0 && current_experience<=max_experience)
    {
        exp_bar=length*current_experience/max_experience;
        textbackground(color_1); MYclrwin(x, y, x+length-1, y+width-1);
        if(current_experience>0)
        {
            textbackground(color_2);
        }
        else
        {
            textbackground(color_1);
        }
        MYclrwin(x, y, x+exp_bar-1, y+width-1);
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
    else if(current_experience<0)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: current_experience<0");
    }
    else if(max_experience<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: max_experience<1");
    }
    else if(current_experience>max_experience)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: current_experience>max_experience");
    }
    else
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error");
    }
    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
}

unsigned int mg_update_level(float *current_experience, float *max_experience, int *level)
{
    /** VARIABLES **/
    int overflow_experience, isLevelUp;

    isLevelUp=0;
    if(*current_experience>=0 && *max_experience>=1 && *level>=0)
    {
        if(*current_experience==*max_experience)
        {
            srand(time(NULL));
            *level=(*level)+1;
            isLevelUp=1;
            *current_experience=0;
            *max_experience=*max_experience+(*level)*(rand()%(15-5+1)+5);
        }
        else if(*current_experience>*max_experience)
        {
            overflow_experience=*current_experience-*max_experience;
            srand(time(NULL));
            *level=(*level)+1;
            isLevelUp=1;
            *current_experience=overflow_experience;
            *max_experience=*max_experience+(*level)*(rand()%(15-5+1)+5);
        }
    }
    else if(*current_experience<0)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: current_experience<0");
    }
    else if(*max_experience<1)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: max_experience<1");
    }
    else if(*level<0)
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error: level<0");
    }
    else
    {
        gotoxy(1, 1); textattr(BLACK*16+LIGHTRED); printf("[MYGAMES] Error");
    }

    gotoxy(1, 1); textattr(BLACK*16+LIGHTGRAY);
    return(isLevelUp);
}
