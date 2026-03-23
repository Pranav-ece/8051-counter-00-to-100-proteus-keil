#include <reg51.h>
unsigned char seg[] = {
    0xC0,0xF9,0xA4,0xB0,0x99,
    0x92,0x82,0xF8,0x80,0x90
};
sbit d1 = P3^0;   
sbit d2 = P3^1;   

void delay(){
    int i;
    for(i=0;i<500;i++);
}

void display(int num){
    int i;
    int tens = num / 10;
    int units = num % 10;

    for(i=0; i<100; i++){
        d2 = 0;  
        d1 = 1;   
        P2 = seg[tens];
        delay();
        d1 = 0;   
        d2 = 1;   
        P2 = seg[units];
        delay();
    }
		delay();
}
void main(){
    int count;
        for(count=0; count<100; count++){
            display(count);
    }
}

