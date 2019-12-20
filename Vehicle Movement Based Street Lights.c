#include<reg51.h>

//ldr 
void delay ( void );
sbit ir1 =P0^0;
sbit ir2 =P0^1;
sbit ir3 =P0^2;
sbit ir4 =P0^3;
sbit ir5 =P0^4;
sbit ir6 =P0^5;
sbit ir7 =P0^6;
sbit ldr =P1^0;
//leds 
sbit led1= P2^0;
sbit led2 =P2^1;
sbit led3 =P2^2;
sbit led4= P2^3;
sbit led5 =P2^4;
sbit led6 =P2^5;
sbit led7= P2^6;



void main(void )
{
P1=0xFF;
led1=0;
led2=0;
led3=0;
led4=0;
led5=0;
led6=0;
led7=0;
delay();
	while(1)
	{
	if(ldr==1)
	{
P0=0xFF; //set as input port
led1=1;
led2=0;
led3=0;
led4=0;
led5=0;
led6=0;
led7=0;
delay();delay();


while(1)
{ 

if( ir1!=1 && ir2!=1 && ir3==1 && ir4==1 && ir5==1 && ir6==1 && ir7==1 )

{

led1=1;
led2=1;
led3=1;
led4=0;
led5=0;
led6=0;
led7=0;

	delay();delay();
}
if( ir1!=1 && ir2==1 && ir3==1 && ir4==1 && ir5==1 && ir6==1 && ir7==1 )

{

led1=1;
led2=1;
led3=0;
led4=0;
led5=0;
led6=0;
led7=0;

	delay();delay();
}
if( ir2!=1 && ir3==1 && ir4==1 && ir5==1 && ir6==1 && ir7==1 )

{

led1=1;
led2=1;
led3=1;
led4=0;
led5=0;
led6=0;
led7=0;

	delay();delay();
}
if( ir2!=1 && ir3!=1 && ir4==1 && ir5==1 && ir6==1 && ir7==1 )

{

led1=1;
led2=1;
led3=1;
led4=1;
led5=0;
led6=0;
led7=0;

	delay();delay();
}

if( ir1==1 && ir2!=1 && ir3!=1 && ir4!=1 && ir5==1 && ir6==1 && ir7==1 )

{

led1=1;
led2=1;
led3=1;
led4=1;
led5=1;
led6=0;
led7=0;

	delay();delay();
}
if(ir1==1 && ir2!=1 && ir3!=1 && ir4!=1 && ir5!=1 && ir6==1 && ir7==1 )

{

led1=1;
led2=1;
led3=1;
led4=1;
led5=1;
led6=1;
led7=0;

	delay();delay();
}
if( ir1==1 && ir2!=1 && ir3!=1 && ir4!=1 && ir5!=1 && ir6!=1 && ir7==1 )

{

led1=1;
led2=1;
led3=1;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}

if( ir2==1 && ir3!=1 && ir4==1 && ir5==1 && ir6==1 && ir7==1 )

{

led1=0;
led2=1;
led3=1;
led4=1;
led5=0;
led6=0;
led7=0;

	delay();delay();
}

if( ir2==1 && ir3==1 && ir4!=1 && ir5==1 && ir6==1 && ir7==1  )

{
	
led1=0;
led2=0;
led3=1;
led4=1;
led5=1;
led6=0;
led7=0;

		delay();delay();
}

if(  ir2==1 && ir3==1 && ir4==1 && ir5!=1 && ir6==1 && ir7==1 )

{
	
led1=0;
led2=0;
led3=0;
led4=1;
led5=1;
led6=1;
led7=0;

delay();delay();
}

if(  ir2==1 && ir3==1 && ir4==1 && ir5==1 && ir6!=1 && ir7==1 )
{

led1=0;
led2=0;
led3=0;
led4=0;
led5=1;
led6=1;
led7=1;

		delay();delay();
}

if( ir2==1 && ir3==1 && ir4==1 && ir5==1 && ir6==1 && ir7!=1 )

{

led1=0;
led2=0;
led3=0;
led4=0;
led5=0;
led6=1;
led7=1;

	delay();delay();
}

 if( ir1!=1 && ir2!=1 && ir3!=1 && ir4!=1 && ir5!=1 && ir6!=1 && ir7!=1 )

{
	
led1=1;
led2=1;
led3=1;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
if( ir2!=1 && ir3==1 && ir4!=1 && ir5==1 && ir6==1 && ir7==1 )

{

led1=1;
led2=1;
led3=1;
led4=1;
led5=1;
led6=0;
led7=0;

	delay();delay();
}
if( ir2!=1 && ir3==1 && ir4==1 && ir5!=1 && ir6==1 && ir7==1 )

{

led1=1;
led2=1;
led3=1;
led4=1;
led5=1;
led6=1;
led7=0;

	delay();delay();
}
if( ir2!=1 && ir3==1 && ir4==1 && ir5==1 && ir6!=1 && ir7==1 )

{

led1=1;
led2=1;
led3=1;
led4=0;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
if( ir2!=1 && ir3==1 && ir4==1 && ir5==1 && ir6==1 && ir7!=1 )

{

led1=1;
led2=1;
led3=1;
led4=0;
led5=0;
led6=1;
led7=1;

	delay();delay();
}
if( ir2==1 && ir3!=1 && ir4!=1 && ir5==1 && ir6==1 && ir7==1 )

{

led1=0;
led2=1;
led3=1;
led4=1;
led5=1;
led6=0;
led7=0;

	delay();delay();
}
if( ir2==1 && ir3!=1 && ir4!=1 && ir5!=1 && ir6==1 && ir7==1 )

{

led1=0;
led2=1;
led3=1;
led4=1;
led5=1;
led6=1;
led7=0;

	delay();delay();
}
if( ir2==1 && ir3==1 && ir4!=1 && ir5!=1 && ir6!=1 && ir7==1 )

{

led1=0;
led2=0;
led3=1;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
if( ir2==1 && ir3!=1 && ir4!=1 && ir5!=1 && ir6!=1 && ir7!=1 )

{

led1=0;
led2=1;
led3=1;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
if( ir2==1 && ir3==1 && ir4!=1 && ir5!=1 && ir6==1 && ir7==1 )

{

led1=0;
led2=0;
led3=1;
led4=1;
led5=1;
led6=1;
led7=0;

	delay();delay();
}
if( ir2==1 && ir3==1 && ir4!=1 && ir5!=1 && ir6!=1 && ir7==1 )

{

led1=0;
led2=0;
led3=1;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
if( ir2==1 && ir3==1 && ir4!=1 && ir5!=1 && ir6!=1 && ir7!=1 )

{

led1=0;
led2=0;
led3=1;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
if( ir2==1 && ir3==1 && ir4!=1 && ir5==1 && ir6!=1 && ir7==1 )

{

led1=0;
led2=0;
led3=1;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
if( ir2==1 && ir3==1 && ir4!=1 && ir5==1 && ir6==1 && ir7!=1 )

{

led1=0;
led2=0;
led3=1;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
if( ir2==1 && ir3==1 && ir4==1 && ir5!=1 && ir6!=1 && ir7==1 )

{

led1=0;
led2=0;
led3=0;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
if(ir1!=1 &&  ir2==1 && ir3==1 && ir4==1 && ir5==1 && ir6==1 && ir7!=1 )

{

led1=1;
led2=1;
led3=0;
led4=0;
led5=0;
led6=1;
led7=1;

	delay();delay();
	delay();delay();
	delay();delay();
	
	
}if(ir1!=1 &&  ir2==1 && ir3==1 && ir4==1 && ir5==1 && ir6!=1 && ir7==1 )

{

led1=1;
led2=1;
led3=0;
led4=0;
led5=1;
led6=1;
led7=1;
delay();delay();
	delay();delay();
	delay();delay();
}
if(ir1!=1 &&  ir2==1 && ir3==1 && ir4==1 && ir5!=1 && ir6==1 && ir7==1 )

{

led1=1;
led2=1;
led3=0;
led4=1;
led5=1;
led6=1;
led7=0;

	
	delay();delay();
	delay();delay();
	delay();delay();
}
if(ir1!=1 &&  ir2==1 && ir3==1 && ir4!=1 && ir5==1 && ir6==1 && ir7==1 )

{

led1=1;
led2=1;
led3=1;
led4=1;
led5=1;
led6=0;
led7=0;
	
	delay();delay();
	delay();delay();
	delay();delay();
}

if(ir1!=1 &&  ir2==1 && ir3!=1 && ir4==1 && ir5==1 && ir6==1 && ir7==1 )

{

led1=1;
led2=1;
led3=1;
led4=1;
led5=0;
led6=0;
led7=0;

	delay();delay();
	delay();delay();
	delay();delay();
}
if(ir1==1 &&  ir2==1 && ir3==1 && ir4==1 && ir5==1 && ir6!=1 && ir7!=1 )

{

led1=0;
led2=0;
led3=0;
led4=0;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
if(ir1==1 &&  ir2==1 && ir3==1 && ir4==1 && ir5!=1 && ir6==1 && ir7!=1 )

{

led1=0;
led2=0;
led3=0;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
if(ir1==1 &&  ir2==1 && ir3!=1 && ir4==1 && ir5==1 && ir6==1 && ir7!=1 )

{

led1=0;
led2=1;
led3=1;
led4=1;
led5=0;
led6=1;
led7=1;

	delay();delay();
}
 if( ir1==1 && ir2==1 && ir3!=1 && ir4==1 && ir5!=1 && ir6==1 && ir7!=1 )

{
	
led1=0;
led2=1;
led3=1;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
 if( ir1==1 && ir2==1 && ir3==1 && ir4==1 && ir5!=1 && ir6!=1 && ir7!=1 )

{
	
led1=0;
led2=0;
led3=0;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
 if( ir1==1 && ir2==1 && ir3==1 && ir4!=1 && ir5==1 && ir6!=1 && ir7!=1 )

{
	
led1=0;
led2=0;
led3=1;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
 if( ir1==1 && ir2==1 && ir3!=1 && ir4==1 && ir5==1 && ir6!=1 && ir7!=1 )

{
	
led1=0;
led2=1;
led3=1;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}

if( ir1==1 && ir2!=1 && ir3==1 && ir4==1 && ir5==1 && ir6!=1 && ir7!=1 )

{
	
led1=1;
led2=1;
led3=1;
led4=0;
led5=1;
led6=1;
led7=1;

	delay();delay();
}

if( ir1!=1 && ir2==1 && ir3==1 && ir4==1 && ir5==1 && ir6!=1 && ir7!=1 )

{
	
led1=1;
led2=1;
led3=0;
led4=0;
led5=1;
led6=1;
led7=1;

	delay();delay();
}

if( ir1==1 && ir2==1 && ir3!=1 && ir4==1 && ir5==1 && ir6!=1 && ir7==1 )

{
	
led1=0;
led2=1;
led3=1;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}

if( ir1==1 && ir2==1 && ir3!=1 && ir4==1 && ir5!=1 && ir6!=1 && ir7==1 )

{
	
led1=0;
led2=1;
led3=1;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
if( ir1==1 && ir2!=1 && ir3==1 && ir4==1 && ir5!=1 && ir6!=1 && ir7==1 )

{
	
led1=1;
led2=1;
led3=1;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
if( ir1!=1 && ir2==1 && ir3==1 && ir4==1 && ir5!=1 && ir6!=1 && ir7==1 )

{
	
led1=1;
led2=1;
led3=0;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
if( ir1==1 && ir2==1 && ir3!=1 && ir4!=1 && ir5!=1 && ir6!=1 && ir7==1 )

{
	
led1=0;
led2=1;
led3=1;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
if( ir1==1 && ir2!=1 && ir3==1 && ir4!=1 && ir5!=1 && ir6!=1 && ir7==1 )

{
	
led1=1;
led2=1;
led3=1;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
if( ir1!=1 && ir2==1 && ir3==1 && ir4!=1 && ir5!=1 && ir6!=1 && ir7==1 )

{
	
led1=1;
led2=1;
led3=1;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
if( ir1!=1 && ir2==1 && ir3==1 && ir4!=1 && ir5!=1 && ir6==1 && ir7==1 )

{
	
led1=1;
led2=1;
led3=1;
led4=1;
led5=1;
led6=1;
led7=0;

	delay();delay();
}
if( ir1!=1 && ir2!=1 && ir3!=1 && ir4!=1 && ir5==1 && ir6==1 && ir7==1 )

{
	
led1=1;
led2=1;
led3=1;
led4=1;
led5=1;
led6=0;
led7=0;

	delay();delay();
}
if( ir1!=1 && ir2!=1 && ir3!=1 && ir4!=1 && ir5!=1 && ir6==1 && ir7==1 )

{
	
led1=1;
led2=1;
led3=1;
led4=1;
led5=1;
led6=1;
led7=0;

	delay();delay();
}
if( ir1!=1 && ir2!=1 && ir3!=1 && ir4!=1 && ir5!=1 && ir6==1 && ir7==1 )

{
	
led1=1;
led2=1;
led3=1;
led4=1;
led5=1;
led6=1;
led7=0;

	delay();delay();
}
if( ir1!=1 && ir2!=1 && ir3!=1 && ir4!=1 && ir5!=1 && ir6!=1 && ir7==1 )

{
	
led1=1;
led2=1;
led3=1;
led4=1;
led5=1;
led6=1;
led7=1;

	delay();delay();
}
 if( ir1==1 && ir2==1 && ir3==1 && ir4==1 && ir5==1 && ir6==1 && ir7==1 )

{
	
led1=1;
led2=0;
led3=0;
led4=0;
led5=0;
led6=0;
led7=0;

	delay();delay();
}
 
	delay();delay();
}}

}}
void delay(void )//5ms delay 
{


	TMOD=0x01; 
  TH0=0x0EE;
	TL0=0x00;
	TR0=1;//start
	while(TF0==0)
	{}
	TR0=0;//stop
	TF0=0;
	
}