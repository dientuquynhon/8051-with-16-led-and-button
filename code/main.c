#include <REGX51.H>
#define led0 P0
#define led1 P1
//delay
void Delay_ms(unsigned int t)
	{
		unsigned int x,y;
		for(x=0;x<t;x++)
		{
			for(y=0;y<123;y++);
		}	
	}
void delay(unsigned char time)
{
 unsigned char temp;
 while(time--){
  temp = 250;
  while(temp--); 
  temp = 62;
  while(temp--); 
 };
}
	
	void sangdon_in (int lan)
	{
	int i;
		for(i=0;i<lan;i++)
		{
			P0 = ~0x80; P1 = ~0x01; Delay_ms(500);
			P0 = ~0xc0; P1 = ~0x03; Delay_ms(500);
			P0 = ~0xe0; P1 = ~0x07; Delay_ms(500);
			P0 = ~0xf0; P1 = ~0x0f; Delay_ms(500);
			P0 = ~0xf8; P1 = ~0x1f; Delay_ms(500);
			P0 = ~0xfc; P1 = ~0x3f; Delay_ms(500);
			P0 = ~0xfe; P1 = ~0x7f; Delay_ms(500);
			P0 = ~0xff; P1 = ~0xff; Delay_ms(500);
		}
	}
	void sangdan (int lan)
	{
	int i;
		for(i=0;i<lan;i++)
		{
			P0 = ~0x80; P1 = ~0x00; Delay_ms(500);
			P0 = ~0xc0; P1 = ~0x00; Delay_ms(500);
			P0 = ~0xe0; P1 = ~0x00; Delay_ms(500);
			P0 = ~0xf0; P1 = ~0x00; Delay_ms(500);
			P0 = ~0xf8; P1 = ~0x00; Delay_ms(500);
			P0 = ~0xfc; P1 = ~0x00; Delay_ms(500);
			P0 = ~0xfe; P1 = ~0x00; Delay_ms(500);
			P0 = ~0xff; P1 = ~0x00; Delay_ms(500);
			P0 = ~0xff; P1 = ~0x80; Delay_ms(500);
			P0 = ~0xff; P1 = ~0xc0; Delay_ms(500);
			P0 = ~0xff; P1 = ~0xe0; Delay_ms(500);
			P0 = ~0xff; P1 = ~0xf0; Delay_ms(500);
			P0 = ~0xff; P1 = ~0xf8; Delay_ms(500);
			P0 = ~0xff; P1 = ~0xfc; Delay_ms(500);
			P0 = ~0xff; P1 = ~0xfe; Delay_ms(500);
			P0 = ~0xff; P1 = ~0xff; Delay_ms(500);
		}	
	}
	void sangdon_out (int lan)
	{
	int i;
		for(i=0;i<lan;i++)
		{
			P1 = ~0x80; P0 = ~0x01; Delay_ms(500);
			P1 = ~0xc0; P0 = ~0x03; Delay_ms(500);
			P1 = ~0xe0; P0 = ~0x07; Delay_ms(500);
			P1 = ~0xf0; P0 = ~0x0f; Delay_ms(500);
			P1 = ~0xf8; P0 = ~0x1f; Delay_ms(500);
			P1 = ~0xfc; P0 = ~0x3f; Delay_ms(500);
			P1 = ~0xfe; P0 = ~0x7f; Delay_ms(500);
			P1 = ~0xff; P0 = ~0xff; Delay_ms(500);
		}
	}
	void demlan (int lan)
	{
		int i;
		for (i=0;i<lan;i++)
		{
			P0 = ~0x80; P1 = ~0x00; Delay_ms(500);
			P0 = ~0x60; P1 = ~0x00; Delay_ms(500);
			P0 = ~0x1c; P1 = ~0x00; Delay_ms(500);
			P0 = ~0x03; P1 = ~0xc0; Delay_ms(500);
			P0 = ~0x00; P1 = ~0x3f; Delay_ms(500);
		}
	}
	void nhapnhay( int lan)
	{
		int i;
		for (i=0;i<lan;i++)
		{
			P0 = ~0xcc; P1 = ~0xcc; Delay_ms(500);
			P0 = ~0x33; P1 = ~0x33; Delay_ms(500);
		}
	}
	void sangdan1( int lan)
	{
		int i;
		for (i=0;i<lan;i++)
		{
			P0 = ~0xcc; P1 = ~0xcc; Delay_ms(500);
			P0 = ~0x33; P1 = ~0x33; Delay_ms(500);
			P0 = ~0xcc; P1 = ~0xcc; Delay_ms(500);
			P0 = ~0x33; P1 = ~0x33; Delay_ms(500);
			P0 = ~0xcc; P1 = ~0xcc; Delay_ms(500);
			P0 = ~0x33; P1 = ~0x33; Delay_ms(500);
			P0 = ~0xcc; P1 = ~0xcc; Delay_ms(500);
			P0 = ~0x33; P1 = ~0x33; Delay_ms(500);
			P0 = ~0xcc; P1 = ~0xcc; Delay_ms(500);
			P0 = ~0x33; P1 = ~0x33; Delay_ms(500);
			P0 = ~0xcc; P1 = ~0xcc; Delay_ms(500);
			P0 = ~0x33; P1 = ~0x33; Delay_ms(500);
			P0 = ~0xcc; P1 = ~0xcc; Delay_ms(500);
			P0 = ~0xcc; P1 = ~0xcc; Delay_ms(500);
			P0 = ~0xcc; P1 = ~0xcc; Delay_ms(500);
			P0 = ~0xcc; P1 = ~0xcc; Delay_ms(500);
		}
	}
	void daonguoc (int lan)
	{
			int i;
		for(i=0;i<lan;i++)
		{
			P0 = ~0xc0; P1 = ~0x03;Delay_ms(500);
			P0 = ~0x30; P1 = ~0x0c; Delay_ms(500);
			P0 = ~0x0c; P1 = ~0x30; Delay_ms(500);
			P0 = ~0x03; P1 = ~0xc0; Delay_ms(500);
			P0 = ~0x0c; P1 = ~0x30; Delay_ms(500);
			P0 = ~0x30; P1 = ~0x0c; Delay_ms(500);
			P0 =~ 0xc0; P1 = ~0x03;Delay_ms(500);		
		}
	}
	void sang4led (int lan)
	{
		int i;
		for (i=0;i<lan;i++)
		{
		P0 = ~0xf0; P1=~0x00; Delay_ms(500);
		P0 = ~0x0f; P1=~0x00; Delay_ms(500);
		P0= ~0x00; P1=~0xf0; Delay_ms(500);
		P0= ~0x00; P1=~0x0f; Delay_ms(500);
		P0 =~0x00; P1=~0xf0; Delay_ms(500);
		
		P0 = ~0x0f; P1=~0x00; Delay_ms(500);
		P0 = ~0xf0; P1=~0x00; Delay_ms(500);
		}
	}
	void random (int lan)
	{
		int i;
		for (i=0;i<lan;i++)
		{
		P0=0xaa;P1=0xaa;Delay_ms(300);
		P0=0x55;P0=0x55;Delay_ms(300);
		P0=0xcc;P1=0xcc;Delay_ms(200);
		P0=0x33;P0=0x33;Delay_ms(200);
		P0=0xee;P1=0xee;Delay_ms(100);
		P0=0x77;P0=0x77;Delay_ms(100);
		}
	}
	void nhaylientuc(int lan)
	{
		int i;
		for(i=0;i<lan;i++)
		{
			P0=0x00;P1=0x00;Delay_ms(50);
			P0=0xff;P1=0xff;Delay_ms(50);
		}
	}
	void led_dimmer(){
 unsigned char i,j;
 
 for(i=1;i<=16;i++){
  j=0;
  while(++j<5){   // tong time delay la 16*5 = 80 ms
   led0 = 0x00;
	 led1 = 0x00;
   delay(i); 
   led0 = 0xff;
	 led1 = 0xff;
   delay(16-i);
  }  
 }
 for(i=1;i<=16;i++){
  j=0;
  while(++j<5){   // tong time delay la 16*5 = 80ms
   led0 = 0x00;
		led1 = 0x00;
   delay(16-i); 
   led0 = 0xff;
		led1 = 0xff;
   delay(i);
  }  
 }
}
	void main()
	{
		    int i;
				int d=0;
		while(1)
		{
			if(P2_5==0)
		{
			Delay_ms(100);
			if(P2_5==0);
			P0=0x7f;P1=0xff;Delay_ms(300);
			P0=0xbf;P1=0xff;Delay_ms(300);
			P0=0xdf;P1=0xff;Delay_ms(300);
			P0=0xef;P1=0xff;Delay_ms(300);
			P0=0xf7;P1=0xff;Delay_ms(300);
			P0=0xfb;P1=0xff;Delay_ms(300);
			P0=0xfd;P1=0xff;Delay_ms(300);
			P0=0xfe;P1=0xff;Delay_ms(300);
			P1=0x7f;P0=0xff;Delay_ms(300);
			P1=0xbf;P0=0xff;Delay_ms(300);
			P1=0xdf;P0=0xff;Delay_ms(300);
			P1=0xef;P0=0xff;Delay_ms(300);
			P1=0xf7;P0=0xff;Delay_ms(300);
			P1=0xfb;P0=0xff;Delay_ms(300);
			P1=0xfd;P0=0xff;Delay_ms(300);
			P1=0xfe;P0=0xff;Delay_ms(300);	
			P1=0xff;P0=0xff;
		
		}
				if(P2_4==0)
			{
				
				Delay_ms(100);
				if(P2_4==0);
				sangdan(1);
				Delay_ms(100);
				sangdon_in(1);
				Delay_ms(100);
				sangdon_out(1);
				Delay_ms(100);
				demlan(1);
				Delay_ms(100);
				nhapnhay(1);
				Delay_ms(100);
				sangdan1(1);
				Delay_ms(100);
				daonguoc(1);
				Delay_ms(100);
				sang4led(1);
				Delay_ms(100);
				random(5);
				Delay_ms(100);
				P1=0xff;P0=0xff;
			}
			if(P2_3==0)
			{
				Delay_ms(100);
				if(P2_3==0);
				for(i=0;i<10;i++)
				{
				P0=0x55;P1=0x55;Delay_ms(100);
				P0=0xff;P1=0xff;Delay_ms(100);
				P0=0xaa;P1=0xaa;Delay_ms(100);
				P0=0xff;P1=0xff;Delay_ms(100);
				P0=0xcc;P1=0xcc;Delay_ms(100);
				P0=0xff;P1=0xff;Delay_ms(100);
				P0=0x33;P1=0x33;Delay_ms(100);
				P0=0xff;P1=0xff;Delay_ms(100);
				P0=0xf0;P1=0xf0;Delay_ms(100);
				P0=0xff;P1=0xff;Delay_ms(100);
				P0=0x0f;P1=0x0f;Delay_ms(100);
				P0=0xff;P1=0xff;Delay_ms(100);	
			}	
		}
		if(P2_6==0)
			{
				Delay_ms(100);
				if(P2_6==0);
				led_dimmer();
				Delay_ms(300);
			}
	}
}