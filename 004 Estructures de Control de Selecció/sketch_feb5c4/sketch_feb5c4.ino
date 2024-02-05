/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************


//********** Variables ***********************************************************
float eficienciaenergetica = 50.5; // Example value, replace it with your actual data

//********** Setup ***************************************************************
void setup() 
{
  Serial.begin(9600); // set up Serial library at 9600 bps

  
  if (eficienciaenergetica < 3,5)
  {
    Serial.println("eficiencia energetica: A");
  } 
  else if (eficienciaenergetica < 6.5)
  {
    Serial.println("eficiencia energetica: B");
  }
  else if (eficienciaenergetica < 11.1)
  {
    Serial.println("eficiencia energetica: C");
  }
  else if (eficienciaenergetica < 17.7)
  {
    Serial.println("eficiencia energetica: D");
  }
  else if (eficienciaenergetica < 38.2)
  {
    Serial.println("eficiencia energetica: E");
  }
  else if (eficienciaenergetica < 43.2)
  {
    Serial.println("eficiencia energetica: F");
  }
  else if (eficienciaenergetica >= 43.2)
  {
    Serial.println("eficiencia energetica: G");
  }
}

//********** Loop *****************************************************************
void loop() 
{
  
}

