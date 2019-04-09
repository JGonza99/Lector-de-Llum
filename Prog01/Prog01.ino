/**********************************************************************************
**                                                                               **
**                              Lector de Llum                                   **
**                                                                               **
**  NOM: Josep González Martínez                            DATA: 25/02/2019     **
**********************************************************************************/
//Resistencia 1 = min-->1500     max-->195k   Rldr=17000
//Resistencia 2 = min-->1455     max-->472k   Rldr=26000
//Resistencia 3 = min-->1500     max-->1M     Rldr=38700
//********** Includes *************************************************************

//********** Variables ************************************************************
const int ldr0 = A0;         // donar nom al pin A0 de l’Arduino
const int ldr1 = A1;         // donar nom al pin A1 de l’Arduino
const int ldr2 = A2;         // donar nom al pin A2 de l’Arduino
const int led0 = 9;
const int led1 = 10;
const int led2 = 11;


int valLdr0, valLdr1, valLdr2;

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  
  pinMode(led0, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

//********** Loop *****************************************************************
void loop()
{
  valLdr0 = analogRead(ldr0);   // llegir valor ldr0
  valLdr1 = analogRead(ldr1);   // llegir valor ldr1
  valLdr2 = analogRead(ldr2);   // llegir valor ldr2
  
  valLdr0 = map(valLdr0, 25, 955, 255, 0); 
  valLdr1 = map(valLdr1, 25, 940, 255, 0); 
  valLdr2 = map(valLdr2, 20, 975, 255, 0); 

   analogWrite(led0, valLdr0);
   analogWrite(led1, valLdr1);
   analogWrite(led2, valLdr2);
}

//********** Funcions *************************************************************


//********** Funcions *************************************************************
