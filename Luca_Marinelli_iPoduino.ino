  #include <LiquidCrystal_I2C.h> // Library for LCD
  #include "pitches.h"
  #include "Despacito.h" 
  #include "Riptide.h"
  #include "HeyYa.h"

  // Define pin numbers
  #define POTENTIOMETER A7
  #define SPEAKER 2
  #define BUTTON 3
  #define GREENLED 4
  #define REDLED 5
  #define YELLOWLED 6

  // Initialize LCD with I2C address, columns, and rows
  LiquidCrystal_I2C lcd(0x27, 16, 2); 

  // Variable to track the button state
  bool buttonStart = false; 

  // Duration of musical notes
  int NOTE_DUR = 137;

  // Function to play a note with a specified duration
  void play(int note, int dur) {
    tone(SPEAKER, note);
    delay(dur * NOTE_DUR);
    noTone(SPEAKER);
    delay(dur * NOTE_DUR / 3);
  }

  // Function to initialize pin modes
  void initializePins() {
    pinMode(POTENTIOMETER, INPUT);
    pinMode(BUTTON, INPUT);
    pinMode(SPEAKER, OUTPUT);
    pinMode(GREENLED, OUTPUT);
    pinMode(REDLED, OUTPUT);
    pinMode(YELLOWLED, OUTPUT);
  }

  // Function to display a message on the LCD
  void displayMessage(const char* line1, const char* line2) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(line1);
    lcd.setCursor(0, 1);
    lcd.print(line2);
  }

  // Setup function - runs once at the beginning
  void setup() {
    // Initialize pin modes
    initializePins();

    // Initialize LCD
    lcd.begin(16, 2);
    lcd.backlight();

    // Display starting message
    displayMessage("Starting Music ... ", "");
    delay(1500);

    // Clear the LCD and wait
    lcd.clear();
    delay(500);
  }
  
  // Loop function - runs repeatedly
  void loop() {
    // If Start Button is Clicked set buttonStart to true
    if (digitalRead(BUTTON) == HIGH && !buttonStart) {
      buttonStart = true;
      for (int i = 0; i < 1; ++i) {
        lcd.clear();
        delay(500);
      }
    }
    
    if(buttonStart) {
      int potValue = analogRead(POTENTIOMETER);

      if (potValue <= 341 ) {
        // Play Song 1 && Light GREEN LED
        digitalWrite(GREENLED, HIGH);
        digitalWrite(YELLOWLED, LOW);
        digitalWrite(REDLED, LOW);
        displayMessage("PLAYING:", "Despacito");
        Despacito();
      } else if (potValue > 341 && potValue <= 682) {
        // Play Song 2 && Light RED LED
        digitalWrite(GREENLED, LOW);
        digitalWrite(YELLOWLED, LOW);
        digitalWrite(REDLED, HIGH);
        displayMessage("PLAYING:", "Riptide");
        Riptide();
      } else {
        // play Song 3 && Light YELLOW LED
        digitalWrite(GREENLED, LOW);
        digitalWrite(YELLOWLED, HIGH);
        digitalWrite(REDLED, LOW);
        displayMessage("PLAYING:", "Hey Yah!");
        HeyYa();
      }
    } else {
        displayMessage("Music Stopped", "Push Button");
        digitalWrite(GREENLED, HIGH);
        digitalWrite(YELLOWLED, HIGH);
        digitalWrite(REDLED, HIGH);
        delay(500);  // Delay for 500 milliseconds
        digitalWrite(GREENLED, LOW);
        digitalWrite(YELLOWLED, LOW);
        digitalWrite(REDLED, LOW);
        delay(500);  // Delay for another 500 milliseconds
    }
  }