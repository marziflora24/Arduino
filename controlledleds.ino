#include <Keypad.h> //biblioteka od klawiatury
 
const byte ROWS = 4; // ile wierszy
const byte COLS = 3; //ile kolumn
 
byte rowPins[ROWS] = {5, 6, 7, 8}; //piny wierszy
byte colPins[COLS] = {2, 3, 4}; //piny kolum
 
char keys[ROWS][COLS] = { //mapowanie klawiatury
  {'*','#','0'},
  {'9','7','8'},
  {'6','4','5'},
  {'3','1','2'}
};
 
Keypad klawiatura = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS ); //inicjalizacja klawiatury

void setup() {
  pinMode(13, OUTPUT); //lampki
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
   pinMode(1, OUTPUT);

  digitalWrite(13, LOW);  //zielona
  digitalWrite(12, LOW);  //żółta
  digitalWrite(11, LOW);  //czerwona
  digitalWrite(10, LOW);  //zółta
  digitalWrite(1, LOW);  //zielona

    Serial.begin(9600);
}

void loop() {  
   char klawisz = klawiatura.getKey();
  if (klawisz){
switch(klawisz)
{
  case '2': {
  int one = 200;
  digitalWrite(10, HIGH);
  delay(one);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(one);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(one);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(400);
  digitalWrite(13, LOW);
  digitalWrite(10, HIGH);
  delay(one);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(one);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(one);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(one);
  digitalWrite(13, LOW);
  break;}

  case '3': 
  int three = 200;
  digitalWrite(10, HIGH);
  delay(three);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(three);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(three);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(three);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(three);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(three);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  delay(three);
  digitalWrite(10, LOW);
  break; 

  case '4':
    digitalWrite(1, LOW);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  break;




  default:
  Serial.println(klawisz);

}
    
  }  
    }
