void loop() {
  delay(200);
  lcd.clear();
  lcd.setCursor(0, 0);
  
  sensors_event_t event;

  dht.humidity().getEvent(&event);
  lcd.print(F("Humidade: "));
  lcd.print(event.relative_humidity);
  lcd.print(F("%"));
  lcd.setCursor(0, 1);

  dht.temperature().getEvent(&event); 
  lcd.print(F("Temp: "));
  lcd.print(event.temperature);
  lcd.print(F("C"));
}
