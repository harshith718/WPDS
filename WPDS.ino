// WPDS – pH Sensor Demonstration Code
// Purpose: Relative pH classification (Acidic / Normal / Basic)
// Note: This is NOT laboratory calibrated pH measurement

void setup() {
  Serial.begin(9600);
}

void loop() {
  int rawValue = analogRead(A0);
  float voltage = rawValue * (5.0 / 1023.0);

  // Baseline voltage for "neutral" water (adjusted from observation)
  float neutralVoltage = 3.80;

  // Approximate pH calculation (relative, not absolute)
  float pH = 7.0 + (neutralVoltage - voltage) * 3.5;

  String state;
  if (pH < 6.5) {
    state = "Acidic";
  } else if (pH > 8.5) {
    state = "Basic";
  } else {
    state = "Normal";
  }

  Serial.print("Voltage: ");
  Serial.print(voltage, 2);
  Serial.print(" V | pH: ");
  Serial.print(pH, 2);
  Serial.print(" | State: ");
  Serial.println(state);

  delay(1000);
}
