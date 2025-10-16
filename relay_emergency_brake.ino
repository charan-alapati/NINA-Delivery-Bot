/* relay_emergency_brake.ino
   Ultrasonic-based emergency stop controlling 4-relay module.
   Based on "Emergency Braking using Relay Module" in the report. :contentReference[oaicite:8]{index=8}
*/

const int TRIG_PIN = 9;
const int ECHO_PIN = 10;

// Relay channels (example pins - adjust to wiring)
const int RELAY1 = 2;
const int RELAY2 = 3;
const int RELAY3 = 4;
const int RELAY4 = 5;

long duration_us;
int distance_cm;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT);

  // Ensure relays are off (LOW) on start
  digitalWrite(RELAY1, LOW);
  digitalWrite(RELAY2, LOW);
  digitalWrite(RELAY3, LOW);
  digitalWrite(RELAY4, LOW);

  Serial.begin(9600);
}

void loop() {
  // trigger ultrasonic sensor
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration_us = pulseIn(ECHO_PIN, HIGH, 30000);
  if (duration_us == 0) {
    // no echo – treat as out of range
    distance_cm = 999;
  } else {
    distance_cm = duration_us * 0.034 / 2; // cm
  }

  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  // threshold from report: 15 cm
  if (distance_cm <= 15) {
    // activate relays (engage braking / cut power)
    digitalWrite(RELAY1, HIGH);
    digitalWrite(RELAY2, HIGH);
    digitalWrite(RELAY3, HIGH);
    digitalWrite(RELAY4, HIGH);
  } else {
    // release relays
    digitalWrite(RELAY1, LOW);
    digitalWrite(RELAY2, LOW);
    digitalWrite(RELAY3, LOW);
    digitalWrite(RELAY4, LOW);
  }

  delay(100);
}
