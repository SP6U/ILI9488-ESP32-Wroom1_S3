// ===================== User_Setup.h (ESP32-S3-WROOM-1 + ILI9488 + XPT2046 — fizyczne piny) =====================

#define USER_SETUP_LOADED

// === Sterownik TFT ===
#define ILI9488_DRIVER
#define TFT_WIDTH  320
#define TFT_HEIGHT 480


#define TFT_MOSI 11   // GPIO11 
#define TFT_SCLK 12   // GPIO12 
#define TFT_MISO 13   // GPIO13 

// === TFT — sterujące ===
#define TFT_CS   10   // GPIO10 
#define TFT_DC   9    // GPIO9  
#define TFT_RST  8    // GPIO8  

// === TFT — podświetlenie ===
#define TFT_BL   7    // GPIO7  
#define TFT_BACKLIGHT_ON HIGH

// === Dotyk XPT2046 (SPI współdzielony) ===
#define TOUCH_CS  6    // GPIO6  
#define TOUCH_IRQ 5    // GPIO5  
#define TOUCH_DO  13   // GPIO13 
#define TOUCH_DIN 11   // GPIO11 
#define TOUCH_CLK 12   // GPIO12 
#define SPI_TOUCH_FREQUENCY 2500000

// === Częstotliwości SPI ===
#define SPI_FREQUENCY        40000000
#define SPI_READ_FREQUENCY   16000000
#define SPI_TOUCH_FREQUENCY  2500000

// === Czcionki i funkcje ===
#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT
#define SUPPORT_TRANSPARENT_BACKGROUND
