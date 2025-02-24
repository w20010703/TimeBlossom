#include <FastLED.h>
#define DATA_PIN 4
#define CLK_PIN 3
#define LED_TYPE SK9822
#define COLOR_ORDER BGR
#define NUM_LEDS 32
#define BRIGHTNESS 5
CRGB leds[NUM_LEDS];

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(115200);

  FastLED.addLeds<LED_TYPE, DATA_PIN, CLK_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);
  FastLED.clear();
  FastLED.show();
}

// the loop function runs over and over again forever
void loop() {


  // for (int i = 0; i < NUM_LEDS; i++) {
  //   leds[i] = CRGB(255, 255, 0);
  //   leds[NUM_LEDS-i] = CRGB(255, 255, 0);
  //   FastLED.show();
  //   delay(500);
  // }
  // 01 ~ 03
  // leds[14] = CRGB(255, 0, 0);
  // leds[13] = CRGB(255, 0, 0);
  // leds[12] = CRGB(255, 0, 0);
  // leds[11] = CRGB(255, 0, 0);
  // leds[10] = CRGB(255, 0, 0);

  // // 4
  // leds[15] = CRGB(255, 0, 0);

  // // 5
  // leds[9] = CRGB(255, 0, 0);

  // // 6
  // leds[16] = CRGB(255, 127, 0);

  // // 7
  // leds[8] = CRGB(255, 127, 0);

  // // 8
  // leds[17] = CRGB(255, 127, 0);

  // // 9
  // leds[7] = CRGB(255, 255, 0);

  // // 9
  // leds[18] = CRGB(255, 255, 0);

  // // 10
  // leds[6] = CRGB(255, 255, 0);

  // // 11
  // leds[19] = CRGB(0, 255, 0);

  // // 12
  // leds[5] = CRGB(0, 255, 0);

  // // 1
  // leds[20] = CRGB(0, 255, 0);

  // // 2
  // leds[4] = CRGB(0, 0, 255);

  // // 3
  // leds[21] = CRGB(0, 0, 255);

  // // 4
  // leds[3] = CRGB(0, 0, 255);

  // // 5
  // leds[22] = CRGB(75, 0, 130);

  // // 6
  // leds[2] = CRGB(75, 0, 130);

  // // 7
  // leds[23] = CRGB(75, 0, 130);

  // // 8
  // leds[1] = CRGB(148, 0, 211);

  // // 9
  // leds[24] = CRGB(148, 0, 211);

  // // 10
  // leds[31] = CRGB(148, 0, 211);

  // // 11 ~ 01
  // leds[30] = CRGB(255, 20, 147);
  // leds[29] = CRGB(255, 20, 147);
  // leds[28] = CRGB(255, 20, 147);
  // leds[27] = CRGB(255, 20, 147);
  // leds[26] = CRGB(255, 20, 147);
  // leds[25] = CRGB(255, 20, 147);
  
  
  
  FastLED.show();

  if (Serial.available() > 0) {
    char received = Serial.read(); // Read the incoming data
    Serial.println(received);
    
    if (received == '1') {
      // 01 ~ 02
      leds[14] = CRGB(0, 0, 0);
      leds[13] = CRGB(0, 0, 0);
      leds[12] = CRGB(0, 0, 0);
      leds[11] = CRGB(0, 0, 0);
      leds[10] = CRGB(0, 0, 0);

      // 3
      leds[15] = CRGB(0, 0, 0);

      // 4
      leds[9] = CRGB(0, 0, 0);

      // 5
      leds[16] = CRGB(0, 0, 0);

      // 6
      leds[8] = CRGB(0, 0, 0);

      // 7
      leds[17] = CRGB(0, 0, 0);

      // 8
      leds[7] = CRGB(255, 127, 0);

      // 9
      leds[18] = CRGB(255, 127, 0);

      // 10
      leds[6] = CRGB(255, 127, 0);

      // 11
      leds[19] = CRGB(255, 127, 0);

      // 12
      leds[5] = CRGB(0, 0, 0);

      // 1
      leds[20] = CRGB(0, 0, 0);

      // 2
      leds[4] = CRGB(0, 255, 0);

      // 3
      leds[21] = CRGB(0, 255, 0);

      // 4
      leds[3] = CRGB(0, 0, 255);

      // 5
      leds[22] = CRGB(0, 0, 255);

      // 6
      leds[2] = CRGB(75, 0, 130);

      // 7
      leds[23] = CRGB(75, 0, 130);

      // 8
      leds[1] = CRGB(0, 0, 0);

      // 9
      leds[24] = CRGB(0, 0, 0);

      // 10
      leds[31] = CRGB(255, 20, 147);

      // 11 ~ 01
      leds[30] = CRGB(0, 0, 0);
      leds[29] = CRGB(0, 0, 0);
      leds[28] = CRGB(0, 0, 0);
      leds[27] = CRGB(0, 0, 0);
      leds[26] = CRGB(0, 0, 0);
      leds[25] = CRGB(255, 20, 147);
    }

    if (received == '2') {
      // 01 ~ 02
      leds[14] = CRGB(0, 0, 0);
      leds[13] = CRGB(0, 0, 0);
      leds[12] = CRGB(0, 0, 0);
      leds[11] = CRGB(0, 0, 0);
      leds[10] = CRGB(0, 0, 0);

      // 3
      leds[15] = CRGB(0, 0, 0);

      // 4
      leds[9] = CRGB(0, 0, 0);

      // 5
      leds[16] = CRGB(0, 255, 0);

      // 6
      leds[8] = CRGB(0, 255, 0);

      // 7
      leds[17] = CRGB(0, 255, 0);

      // 8
      leds[7] = CRGB(0, 255, 0);

      // 9
      leds[18] = CRGB(0, 0, 0);

      // 10
      leds[6] = CRGB(0, 0, 0);

      // 11
      leds[19] = CRGB(0, 0, 0);

      // 12
      leds[5] = CRGB(0, 255, 0);

      // 1
      leds[20] = CRGB(0, 255, 0);

      // 2
      leds[4] = CRGB(0, 255, 0);

      // 3
      leds[21] = CRGB(0, 255, 0);

      // 4
      leds[3] = CRGB(0, 0, 0);

      // 5
      leds[22] = CRGB(255, 20, 147);

      // 6
      leds[2] = CRGB(255, 20, 147);

      // 7
      leds[23] = CRGB(255, 20, 147);

      // 8
      leds[1] = CRGB(0, 0, 0);

      // 9
      leds[24] = CRGB(0, 0, 0);

      // 10
      leds[31] = CRGB(0, 0, 255);

      // 11 ~ 01
      leds[30] = CRGB(0, 0, 0);
      leds[29] = CRGB(0, 0, 0);
      leds[28] = CRGB(0, 0, 0);
      leds[27] = CRGB(0, 0, 0);
      leds[26] = CRGB(0, 0, 0);
      leds[25] = CRGB(0, 0, 255);
    }

    if (received == '3') {
        leds[14] = CRGB(0, 0, 0);
        leds[13] = CRGB(0, 0, 0);
        leds[12] = CRGB(0, 0, 0);
        leds[11] = CRGB(0, 0, 0);
        leds[10] = CRGB(0, 0, 0);

        // 3
        leds[15] = CRGB(0, 0, 0);

        // 4
        leds[9] = CRGB(0, 0, 0);

        // 5
        leds[16] = CRGB(0, 255, 0);

        // 6
        leds[8] = CRGB(0, 255, 0);

        // 7
        leds[17] = CRGB(0, 255, 0);

        // 8
        leds[7] = CRGB(0, 255, 0);

        // 9
        leds[18] = CRGB(0, 0, 0);

        // 10
        leds[6] = CRGB(0, 0, 0);

        // 11
        leds[19] = CRGB(0, 0, 0);

        // 12
        leds[5] = CRGB(0, 255, 0);

        // 1
        leds[20] = CRGB(0, 255, 0);

        // 2
        leds[4] = CRGB(0, 255, 0);

        // 3
        leds[21] = CRGB(0, 255, 0);

        // 4
        leds[3] = CRGB(0, 0, 0);

        // 5
        leds[22] = CRGB(0, 0, 0);

        // 6
        leds[2] = CRGB(255, 20, 147);

        // 7
        leds[23] = CRGB(255, 20, 147);

        // 8
        leds[1] = CRGB(0, 0, 0);

        // 9
        leds[24] = CRGB(0, 0, 0);

        // 10
        leds[31] = CRGB(0, 0, 0);

        // 11 ~ 01
        leds[30] = CRGB(255, 0, 0);
        leds[29] = CRGB(255, 0, 0);
        leds[28] = CRGB(255, 0, 0);
        leds[27] = CRGB(255, 0, 0);
        leds[26] = CRGB(255, 0, 0);
        leds[25] = CRGB(0, 0, 0);
    }

    if (received == '4') {
      leds[14] = CRGB(255, 0, 0);
        leds[13] = CRGB(255, 0, 0);
        leds[12] = CRGB(255, 0, 0);
        leds[11] = CRGB(255, 0, 0);
        leds[10] = CRGB(255, 0, 0);

        // 3
        leds[15] = CRGB(0, 0, 0);

        // 4
        leds[9] = CRGB(0, 0, 0);

        // 5
        leds[16] = CRGB(0, 255, 0);

        // 6
        leds[8] = CRGB(0, 255, 0);

        // 7
        leds[17] = CRGB(0, 255, 0);

        // 8
        leds[7] = CRGB(0, 255, 0);

        // 9
        leds[18] = CRGB(0, 0, 0);

        // 10
        leds[6] = CRGB(0, 0, 0);

        // 11
        leds[19] = CRGB(0, 0, 0);

        // 12
      leds[5] = CRGB(0, 255, 0);

      // 1
      leds[20] = CRGB(0, 255, 0);

      // 2
      leds[4] = CRGB(0, 255, 0);

      // 3
      leds[21] = CRGB(0, 255, 0);

      // 4
      leds[3] = CRGB(0, 0, 0);

      // 5
      leds[22] = CRGB(255, 20, 147);

      // 6
      leds[2] = CRGB(255, 20, 147);

      // 7
      leds[23] = CRGB(255, 20, 147);

        // 8
        leds[1] = CRGB(0, 0, 0);

        // 9
        leds[24] = CRGB(0, 0, 0);

        // 10
        leds[31] = CRGB(0, 0, 0);

        // 11 ~ 01
        leds[30] = CRGB(0, 0, 0);
        leds[29] = CRGB(0, 0, 0);
        leds[28] = CRGB(0, 0, 0);
        leds[27] = CRGB(0, 0, 0);
        leds[26] = CRGB(0, 0, 0);
        leds[25] = CRGB(0, 0, 0);
    }

    if (received == '5') {
      leds[14] = CRGB(0, 0, 0);
        leds[13] = CRGB(0, 0, 0);
        leds[12] = CRGB(0, 0, 0);
        leds[11] = CRGB(0, 0, 0);
        leds[10] = CRGB(0, 0, 0);

        // 3
        leds[15] = CRGB(0, 0, 0);

        // 4
        leds[9] = CRGB(0, 0, 0);

        // 5
        leds[16] = CRGB(255, 20, 147);

        // 6
        leds[8] = CRGB(255, 20, 147);

        // 7
        leds[17] = CRGB(255, 20, 147);

        // 8
        leds[7] = CRGB(255, 20, 147);

        // 9
        leds[18] = CRGB(255, 20, 147);

        // 10
        leds[6] = CRGB(255, 20, 147);

        // 11
        leds[19] = CRGB(255, 20, 147);

        // 12
      leds[5] = CRGB(255, 20, 147);

      // 1
      leds[20] = CRGB(255, 20, 147);

      // 2
      leds[4] = CRGB(255, 20, 147);

      // 3
      leds[21] = CRGB(255, 20, 147);

      // 4
      leds[3] = CRGB(255, 20, 147);

      // 5
      leds[22] = CRGB(255, 20, 147);

      // 6
      leds[2] = CRGB(255, 20, 147);

      // 7
      leds[23] = CRGB(255, 20, 147);

        // 8
        leds[1] = CRGB(0, 0, 0);

        // 9
        leds[24] = CRGB(0, 0, 0);

        // 10
        leds[31] = CRGB(0, 0, 0);

        // 11 ~ 01
        leds[30] = CRGB(0, 0, 0);
        leds[29] = CRGB(0, 0, 0);
        leds[28] = CRGB(0, 0, 0);
        leds[27] = CRGB(0, 0, 0);
        leds[26] = CRGB(0, 0, 0);
        leds[25] = CRGB(0, 0, 0);
    }

    if (received == 'X') {
      FastLED.clear();
    }
    FastLED.show();
  }
           
}
