int main(void)
{
 DDRA = 0xff;
 DDRC = 0x00;
    /* Replace with your application code */
    while (1) 
    {  
  if(PINC & (1<<PORTC)){
  PORTA = 0x46;//01000110 door opening
  _delay_ms(1000);
  PORTA = 0x8f;
  _delay_ms(200);
  PORTA = 0x89;//10001001 door closing
  _delay_ms(1000);
  PORTA = 0x00;
  
  }
    }
 
}
