
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  
}

void loop() {
  // liam in morse code is ._.. .. .- --
  // starting pause
  digitalWrite(LED_BUILTIN, LOW); delay(3000);   // pause

  // l
  digitalWrite(LED_BUILTIN, HIGH); delay(600);  // dot
  digitalWrite(LED_BUILTIN, LOW); delay(300);   // pause

  digitalWrite(LED_BUILTIN, HIGH); delay(1500); // long dot
 digitalWrite(LED_BUILTIN, LOW);
  delay(600);   // paue

  digitalWrite(LED_BUILTIN, HIGH); delay(500);  // dot
  digitalWrite(LED_BUILTIN, LOW); delay(600);   // pause

  digitalWrite(LED_BUILTIN, HIGH); delay(500);  // dot
  digitalWrite(LED_BUILTIN, LOW); delay(1000);  // end of letter pause

  // i
digitalWrite(LED_BUILTIN, HIGH); delay(500);  // dot
digitalWrite(LED_BUILTIN, LOW); delay(600);   // pause

  digitalWrite(LED_BUILTIN, HIGH); delay(500);  // dot
  digitalWrite(LED_BUILTIN, LOW); delay(1000);  // end o letter pause

  //a
 digitalWrite(LED_BUILTIN, HIGH); delay(500);  // dot
digitalWrite(LED_BUILTIN, LOW); delay(600);   // pause

digitalWrite(LED_BUILTIN, HIGH); delay(1500); // long dot
digitalWrite(LED_BUILTIN, LOW); delay(1000);  // end letter pause

//m
digitalWrite(LED_BUILTIN, HIGH); delay(1500); // long dot
digitalWrite(LED_BUILTIN, LOW); delay(600);   // pause

digitalWrite(LED_BUILTIN, HIGH); delay(1500); // long dot
digitalWrite(LED_BUILTIN, LOW); delay(1000);  // end letter pause


}

