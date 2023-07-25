#include <Wire.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(128, 64, &Wire, -1);

const unsigned char Welcome_Screen[] PROGMEM = {
  //Past your bitmap here
};

const unsigned char First_img[] PROGMEM = {
  //Past your bitmap here
};

const unsigned char Second_img[] PROGMEM = {
  //Past your bitmap here
};

const unsigned char Third_img[] PROGMEM = {
  //Past your bitmap here
};

const unsigned char Fourth_img[] PROGMEM = {
  //Past your bitmap here
};

const unsigned char Fifth_img[] PROGMEM = {
  //Past your bitmap here
};

const unsigned char Sixth_img[] PROGMEM = {
  //Past your bitmap here
};

const unsigned char Seventh_img[] PROGMEM = {
	//Past your bitmap here
};

const unsigned char Last_img[] PROGMEM = {
	//Past your bitmap here
};

unsigned const int notes[] = {
  392, 392, 440, 392, 523, 494,
  392, 392, 440, 392, 587, 523,
  392, 392, 784, 659, 523, 494,
  440, 698, 698, 659, 523, 587,
  523
  //Melody
};

byte noteDurations[] = {
  4, 4, 2, 2, 2, 1,
  4, 4, 2, 2, 2, 1,
  4, 4, 2, 2, 2, 2,
  1, 4, 4, 2, 2, 2,
  1
  //Melody Delays
};

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.drawBitmap(0, 0, Welcome_Screen, 128, 64, WHITE);
  display.display();

  for (int i = 0; i < sizeof(notes) / sizeof(notes[0]); i++) {
    int noteDuration = 1000 / noteDurations[i];
    tone(3, notes[i], noteDuration);
    delay(noteDuration * 1.3);  // Adjust the delay as needed
    noTone(3);
    delay(100);
  }
  display.clearDisplay();
  display.drawBitmap(0, 0, First_img, 128, 64, WHITE);
  display.display();
  delay(3000);
  display.clearDisplay();
  display.drawBitmap(0, 0, Second_img, 128, 64, WHITE);
  display.display();
  delay(3000);
  display.clearDisplay();
  display.drawBitmap(0, 0, Third_img, 128, 64, WHITE);
  display.display();
  delay(3000);
  display.clearDisplay();
  display.drawBitmap(0, 0, Fourth_img, 128, 64, WHITE);
  display.display();
  delay(3000);
  display.clearDisplay();
  display.drawBitmap(0, 0, Fifth_img, 128, 64, WHITE);
  display.display();
  delay(3000);
  display.clearDisplay();
  display.drawBitmap(0, 0, Sixth_img, 128, 64, WHITE);
  display.display();
  delay(5000);
  display.clearDisplay();
  display.drawBitmap(0, 0, Seventh_img, 128, 64, WHITE);
  display.display();
  delay(15000);
  display.clearDisplay();
  display.drawBitmap(0, 0, Last_img, 128, 64, WHITE);
  display.display();
  delay(8000);
  display.clearDisplay();
  display.ssd1306_command(SSD1306_DISPLAYOFF);
  display.display();
}

void loop() {
  /*Powered By Arduino classroom | Subscribe Arduino classroom Youtube Channel*/ 
}