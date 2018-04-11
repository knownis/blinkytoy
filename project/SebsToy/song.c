#include <msp430.h>
#include "buzzer.h"
#include "song.h"
#include "led.h"

long longTime = 5000; //how long I want the song to last
/* Use this function to select a song */
void picAsong(char c){
    switch(c){
        case 1://currently set for button 1 on P2 board
            playSong4();
            playSong1();
            playSong4();
            playSong2();
            playSong1();
            playSong4();
            playSong3();
            break;
        case 2://currently set for button 2 on P2 board
            playSong2();
            playSong1();
            playSong3();
            playSong4();
            playSong3();
            break;
        case 3://currently set for button 3 on P2 board
            playSong3();
            playSong4();
            playSong1();
            playSong3();
            playSong2();
            playSong4();
            break;
        case 4://currently set for button 4 on P2 board
            playSong2();
            playSong4();
            playSong4();
            playSong3();
            playSong1();
            playSong3();
            playSong2();
            playSong4();
            playSong3();
            playSong4();
            playSong1();
            playSong2();
            playSong1();
            playSong3();
            playSong4();
            break;
    }
    
}
/* Function used to make the buzzer on P2 board, different notes are played
* Same structure for playSong2()... */
void playSong1(){
    int count = 0; // internal count for each while loop
    char times = 0; //variable used to repeat whole song  
    while(times < 5){// loop to control how many times his song is going o be played
        buzzer_set_period(D1);//play note D
        while(++count < longTime){}//this keeps the note playing
        count = 0;// reset count for the next ote
        // same pattern below
        buzzer_set_period(D1);
        while(++count < longTime){}
        count = 0;
        buzzer_set_period(D1);
        while(++count < longTime){}count = 0;
        while(++count < longTime){}count = 0;
        while(++count < longTime){}
        count = 0;
        buzzer_set_period(D1);
        while(++count < longTime){}
        count = 0;
        buzzer_set_period(D1);
        while(++count < longTime){}
        count = 0;
        buzzer_set_period(D1);
        while(++count < longTime){}
        count = 0;
        while(++count < longTime){}count = 0;
        buzzer_set_period(D1);
        while(++count < longTime){ }
        count = 0;
        buzzer_set_period(D1);
        while(++count < longTime){}count = 0;
        while(++count < longTime){}count = 0;
        while(++count < longTime){}
        count = 0;
        buzzer_set_period(D1);
        while(++count < longTime){}
        count = 0;
        buzzer_set_period(D1);
        while(++count < longTime){ }
        count = 0;
    
        times++;// increase how many times the song has played [very important]
    }

}

void playSong2(){
     int count = 0;
     char times = 0;
     while(times < 3){
     buzzer_set_period(C1);
    while(++count < longTime){}
    count = 0;
      buzzer_set_period(C1);
    while(++count < longTime){}count = 0;
    buzzer_set_period(C1);
    while(++count < longTime){}count = 0;
     buzzer_set_period(C1);
    while(++count < longTime){}count = 0;
     buzzer_set_period(C1);
    while(++count < longTime){}count = 0;
     buzzer_set_period(C1);
    while(++count < longTime){}count = 0;
     buzzer_set_period(C1);
    while(++count < longTime){}count = 0;
     buzzer_set_period(C1);
    while(++count < longTime){}count = 0;
    buzzer_set_period(C1);
    while(++count < longTime){ }count = 0;
    buzzer_set_period(C1);
    while(++count < longTime){}count = 0;
    buzzer_set_period(C1);
    while(++count < longTime){ }count = 0;
    buzzer_set_period(C1);
    while(++count < longTime){}count = 0;
    buzzer_set_period(C1);
    while(++count < longTime){ }count = 0;
    buzzer_set_period(C1);
    while(++count < longTime){}count = 0;
    buzzer_set_period(C1);
    while(++count < longTime){ }count = 0;
    buzzer_set_period(C1);
    while(++count < longTime){}count = 0;
     
         times++;
    }    
}
void playSong3(){
     int count = 0;
     char times = 0;
     while(times < 6){
     buzzer_set_period(B1);
     while(++count < longTime){ }
     count = 0;
     buzzer_set_period(B1);
     while(++count < longTime){ }count = 0;
     buzzer_set_period(B1);
     while(++count < longTime){}count = 0;
     buzzer_set_period(B1);
     while(++count < longTime){}
     count = 0;
     buzzer_set_period(B1);
     while(++count < longTime){}
     count = 0;
     buzzer_set_period(B1);
     while(++count < longTime){}count = 0;
     while(++count < longTime){}count = 0;
     while(++count < longTime){}count = 0;
     buzzer_set_period(B1);
     while(++count < longTime){ }count = 0;
     buzzer_set_period(B1);
     while(++count < longTime){}
     count = 0;
     buzzer_set_period(B1);
     while(++count < longTime){}
     count = 0;
     buzzer_set_period(B1);
     while(++count < longTime){}count = 0;
     times++;
     }
    
}
void playSong4(){
    int count = 0;
    char times = 0;
    while(times < 4){
        buzzer_set_period(A1);
        while(++count < longTime){}
        count = 0;
        buzzer_set_period(A1);
        while(++count < longTime){}
        count = 0;
        buzzer_set_period(A1);
        while(++count < longTime){}
        count = 0;
        while(++count < longTime){}
        count = 0;
        while(++count < longTime){}
        count = 0;
        while(++count < longTime){}
        count = 0;
        buzzer_set_period(A1);
        while(++count < longTime){}
        count = 0;
        buzzer_set_period(A1);
        while(++count < longTime){}
        count = 0;
        buzzer_set_period(A1);
        while(++count < longTime){}
        count = 0;
        buzzer_set_period(A1);
        while(++count < longTime){}
        count = 0;
        buzzer_set_period(A1);
        while(++count < longTime){}
        count = 0;
        buzzer_set_period(A1);
        while(++count < longTime){}
        count = 0;
        buzzer_set_period(A1);
        while(++count < longTime){ }
        count = 0;
        buzzer_set_period(A1);
        while(++count < longTime){}
        count = 0;
        while(++count < longTime){}
        count = 0;
        while(++count < longTime){ }
        count = 0;
        buzzer_set_period(A1);
        while(++count < longTime){}
        count = 0;
        times++;
     }
}
