/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************


//********** Variables ***********************************************************
float emisionespormetrocuadrado = 50.5; // Example value, replace it with your actual data

//********** Setup ***************************************************************
void setup() 
{
  Serial.begin(9600); // set up Serial library at 9600 bps

  
  if (emisionespormetrocuadrado < 10)
  {
    Serial.println("eficiencia energetica: A");
  } 
  else if (emisionespormetrocuadrado < 20)
  {
    Serial.println("eficiencia energetica: B");
  }
  else if (emisionespormetrocuadrado < 30)
  {
    Serial.println("eficiencia energetica: C");
  }
  else if (emisionespormetrocuadrado < 40)
  {
    Serial.println("eficiencia energetica: D");
  }
  else if (emisionespormetrocuadrado < 50)
  {
    Serial.println("eficiencia energetica: E");
  }
  else if (emisionespormetrocuadrado < 60)
  {
    Serial.println("eficiencia energetica: F");
  }
  else
  {
    Serial.println("eficiencia energetica: G");
  }
}

//********** Loop *****************************************************************
void loop() 
{
  
}
