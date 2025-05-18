#include <TFT_eSPI.h>
#include <SPI.h>
#include <../TFT_eSPI_Setups/my_custom_setup.h>

TFT_eSPI tft = TFT_eSPI();  // Używa pinów z User_Setup.h

void setup() {
  Serial.begin(115200);
  tft.init();
  tft.setRotation(1);  // 0-3 (zależnie od orientacji)
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(2);
  tft.setCursor(20, 40);
  tft.println("ILI9488 OK!");
}

void loop() {
}
