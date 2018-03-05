 /*****************************************************
**                                                  **
**                       Titol:                     **
**                                                  **
**                                                  **
**  NOM: Daniel Morales           DATA: 08/01/2018  **
*****************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led = 6;          // donar nom al pin 5 de l’Arduino
unsigned long retard=500;

//********** Setup ****************************************************************
void setup()
{
  pinMode(led, OUTPUT);     // definir el pin 5 com una sortida
  for (int i=0;i<3;i++)
  {
    digitalWrite (led,1);
    delay(retard);
      digitalWrite (led,0);
    delay(retard);
  }
}

//********** Loop *****************************************************************
void loop()
{
 
  
}
