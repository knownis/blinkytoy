#include <msp430.h>
#include "buzzer.h"
#include "song.h"
#include "led.h"

long longTime = 5000;
void picAsong(char c){
    switch(c){
        case 1:
         
            playSong3();
            playSong4();
        
            playSong1();
            playSong2();
            playSong1();
            playSong3();
            break;
        case 2:
    
     
            playSong2();
            playSong1();
            playSong3();
            break;
        case 3:
        
           
            playSong3();
            playSong4();
            playSong1();
            playSong3();
            playSong2();
            playSong4();
            break;
        case 4:
      
        
            playSong2();
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
            break;
    }
    
}
void playSong1(){
    int count = 0; 
    char times = 0;
    while(times < 5){
        buzzer_set_period(D1);
        while(++count < longTime){}
        count = 0;
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
    
        times++;
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
    
        //just wait until time finishes
    
    // set to zero again because button may be pressed again
    
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
     }//just wait until time finishes
// set to zero again because button may be pressed again
    
}
void playSong4(){
     int count = 0;   
     char times = 0;
     while(times < 4){
      buzzer_set_period(A1);
    while(++count < longTime){}count = 0;
          buzzer_set_period(A1);
        while(++count < longTime){}
        count = 0;
        buzzer_set_period(A1);
        while(++count < longTime){}count = 0;
        while(++count < longTime){}count = 0;
        while(++count < longTime){}
        count = 0;
     while(++count < longTime){
        
     }count = 0;
       buzzer_set_period(A1);
          while(++count < longTime){
            
          }count = 0;
           buzzer_set_period(A1);
           while(++count < longTime){
        
           }count = 0;
           buzzer_set_period(A1);
        while(++count < longTime){}
        count = 0;
        buzzer_set_period(A1);
        while(++count < longTime){}
        count = 0;
           buzzer_set_period(A1);
          while(++count < longTime){}count = 0;
           buzzer_set_period(A1);
          while(++count < longTime){}count = 0;
          buzzer_set_period(A1);
         while(++count < longTime){ }count = 0;
         buzzer_set_period(A1);
         while(++count < longTime){}count = 0;
         while(++count < longTime){}count = 0;
          while(++count < longTime){ }count = 0;
          buzzer_set_period(A1);
          while(++count < longTime){}count = 0;
          times++;
     }
         
        //just wait until time finishes
// set to zero again because button may be pressed again
    
}
