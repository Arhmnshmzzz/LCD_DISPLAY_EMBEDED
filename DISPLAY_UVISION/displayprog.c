#include<reg51.h>
sbit rs=P3^0;
sbit rw=P3^1;
sbit en=P3^2;
void lcdcmd(unsigned char);
void lcddata(unsigned char);
void delay();
void main ()
{
P2=0x00;
while (1)
{
lcdcmd(0x38);
delay();
lcdcmd(0x01);
delay();
lcdcmd(0x0C);
delay();
lcdcmd(0x81);
delay();
	
lcddata('M');
delay();
	lcddata('d');
delay();

	lcddata(' ');
delay();
lcddata('A');
delay();
lcddata('b');
delay();
lcddata('d');
delay();
lcddata('u');
delay();
lcddata('r');
delay();
lcddata(' ');
delay();
lcddata('R');
delay();
lcddata('a');
delay();
lcddata('h');
delay();
lcddata('m');
delay();
lcddata('a');
delay();
lcddata('n');
delay();




}

}
void lcdcmd(unsigned char val)
{
P2=val;
  rs=0;
  rw=0;
  en=1;
  delay();
  en=0; 

}

void lcddata(unsigned char val)
{
P2=val;
  rs=1;
  rw=0;
  en=1;
  delay();
  en=0; 

}

void delay ()
{
unsigned int i;
 for(i=0; i<6000;i++);

}