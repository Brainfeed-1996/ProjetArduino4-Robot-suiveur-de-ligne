#define sensorGauche 2
#define sensorDroit 3
#define moteurGauche 5
#define moteurDroit 6

void setup() {
  pinMode(sensorGauche, INPUT);
  pinMode(sensorDroit, INPUT);
  pinMode(moteurGauche, OUTPUT);
  pinMode(moteurDroit, OUTPUT);
}

void loop() {
  int gauche = digitalRead(sensorGauche);
  int droit = digitalRead(sensorDroit);

  if (gauche == LOW && droit == LOW) {
    // Avancer
    digitalWrite(moteurGauche, HIGH);
    digitalWrite(moteurDroit, HIGH);
  } else if (gauche == LOW && droit == HIGH) {
    // Tourner à gauche
    digitalWrite(moteurGauche, LOW);
    digitalWrite(moteurDroit, HIGH);
  } else if (gauche == HIGH && droit == LOW) {
    // Tourner à droite
    digitalWrite(moteurGauche, HIGH);
    digitalWrite(moteurDroit, LOW);
  } else {
    // Arrêter
    digitalWrite(moteurGauche, LOW);
    digitalWrite(moteurDroit, LOW);
  }
}
