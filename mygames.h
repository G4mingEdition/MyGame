#ifndef MYGAMES_H_INCLUDED
#define MYGAMES_H_INCLUDED



/** ========== MY GAMES ========== **/
///                                ///
/// author: Denis Christopher      ///
/// name: mygames                  ///
/// kind: librairy                 ///
/// creation: 26-02-2018           ///
///                                ///
/** ============================== **/



/** ========== LIBRAIRIES ========== **/
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <conioplus.h>


/** ========== CONSTANTES ========== **/
#define SMALL_BAR 20
#define MEDIUM_BAR 40
#define LARGE_BAR 80


/** ========== PROTOTYPES ========== **/
    /// account_functions
void mg_sign_up(char pseudo[], int size_pseudo, char password[], int size_password, int isHidden, int check, int x, int y, int color, int text_color);
void mg_pseudo_creation(char pseudo[], int size_pseudo, int x, int y, int color, int text_color);
void mg_password_creation(char password[], int size_password, int isHidden, int check, int x, int y, int color, int text_color);
    /// experience_functions
void mg_small_experience_bar(float current_experience, float max_experience, int x, int y, int color_1, int color_2);
void mg_medium_experience_bar(float current_experience, float max_experience, int x, int y, int color_1, int color_2);
void mg_large_experience_bar(float current_experience, float max_experience, int x, int y, int color_1, int color_2);
void mg_custom_experience_bar(float current_experience, float max_experience, int x, int y, int color_1, int color_2, int length, int width);
unsigned int mg_update_level(float *current_experience, float *max_experience, int *level);
    /// health_functions
void mg_small_health_bar(float current_health, float max_health, int x, int y, int color_1, int color_2, int color_3, int color_4);
void mg_medium_health_bar(float current_health, float max_health, int x, int y, int color_1, int color_2, int color_3, int color_4);
void mg_large_health_bar(float current_health, float max_health, int x, int y, int color_1, int color_2, int color_3, int color_4);
void mg_custom_health_bar(float current_health, float max_health, int x, int y, int color_1, int color_2, int color_3, int color_4, int length, int width);
void mg_update_health(float *current_health, float *max_health);
    /// interface_functions
void mg_interface_1(char *title, int color_1, int color_2, int color_3, int txt_color);
void mg_interface_2(char *title, int color_1, int color_2, int color_3, int txt_color);
void mg_interface_3(char *title, int color_1, int color_2, int color_3, int txt_color);
void mg_interface_4(char *title, int color_1, int color_2, int color_3, int color_4, int color_5, int color_6, int color_7, int text_color);
void mg_animated_text(char *text, int speed, int x, int y, int limit, int color, int text_color);
void mg_transition_1(int speed, int color);
    /// loading_functions
void mg_small_loading_bar(int x, int y, int color_1, int color_2);
void mg_medium_loading_bar(int x, int y, int color_1, int color_2);
void mg_large_loading_bar(int x, int y, int color_1, int color_2);
void mg_custom_loading_bar(int x, int y, int color_1, int color_2, int length, int width);
    /// random_functions
unsigned int mg_simple_random_color(int x1, int y1, int x2, int y2, int seconds);
void mg_animated_card(char carte, int x, int y, int size_x, int size_y, int color_1, int color_2, int text_color);

#endif // MYGAMES_H_INCLUDED
