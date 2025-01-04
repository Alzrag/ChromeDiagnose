#include <Mouse.h>
#include <Keyboard.h>

void setup() {
  // Initialize Keyboard and Mouse
  Keyboard.begin();
  Mouse.begin();
  unsigned long startTime;
  unsigned long endTime;

  startTime = millis();

  cputest();
  batterytest();
  memorieTest();
  endTime = millis();

  Keyboard.print(String((endTime - startTime)));
  // End the program
  Keyboard.end();
  Mouse.end();
}

void wifitest(){
  delay(1000);
  // Step 1: Open a new tab in Chrome
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('t');
  Keyboard.releaseAll();
  delay(1000);

  delay(1000);  // Wait for the new tab to open

  // Step 2: Type "wifi test" and press Enter
  Keyboard.print("wifi test");
  delay(1000);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(2000);

  delay(1000);
  // Step 1: Open a new tab in Chrome
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('t');
  Keyboard.releaseAll();
  delay(1000);

  delay(1000);  // Wait for the new tab to open

  // Step 2: Type "wifi test" and press Enter
  Keyboard.print("https://docs.google.com/document/d/1GPg7XnlFRQUw9Yww2fjxDaaWV-JgovkJYH8LjALxE_U/edit?tab=t.0");
  delay(1000);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(2000);

  delay(1000);
  // Step 1: Open a new tab in Chrome
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('2');
  delay(1000);
  Keyboard.releaseAll();

  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();

  delay(2000);
  // Move the cursor by small increments
  moveCursor(490, 150);

  delay(500);
  Mouse.click(MOUSE_LEFT);
  delay(35000);

  moveCursor(-270, 120);
  delay(500);
  Mouse.press(MOUSE_LEFT);
  moveCursor(510, 40);
  Mouse.release(MOUSE_LEFT);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('c');
  Keyboard.releaseAll();

  delay(1000);
  // Step 1: Open a new tab in Chrome
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('3');
  delay(1000);
  Keyboard.releaseAll();

  Mouse.click(MOUSE_LEFT);
  delay(1000);
  // Step 1: Open a new tab in Chrome
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('v');
  Keyboard.releaseAll();
  delay(1000);

}

void cputest(){
  moveCursor(-2000, 0);
  delay(200);
  moveCursor(0,2000);
  moveCursor(10, -10);
  Mouse.click(MOUSE_LEFT);
  moveCursor(420,-20);
  Mouse.click(MOUSE_LEFT);
  delay(1000);
  Keyboard.print("diagnostics");
  moveCursor(420,-680);
  Mouse.click(MOUSE_LEFT);
  delay(1000);
  Keyboard.press(KEY_RETURN);
  delay(1000);
  moveCursor(360,470);
  Mouse.click(MOUSE_LEFT);
  delay(1000);
  Mouse.click(MOUSE_LEFT);
  delay(1000);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  delay(2000);
  moveCursor(-110,200);
  Mouse.click(MOUSE_LEFT);
  delay(300000);
}

void batterytest(){
  moveCursor(0,-390);
  Mouse.click(MOUSE_LEFT);
  delay(60000);
}

void memorieTest(){
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  moveCursor(0,380);
  Mouse.click(MOUSE_LEFT);
  delay(960000);
}

void loop() {
  // No actions in loop
}

// Function to move the cursor in small steps
void moveCursor(int x, int y) {
  // Move the cursor right (x) and down (y) in increments
  if (x < 0) {
    for (int i = 0; i > x; i -= 10) {  // Increment by 10 for smoother movement
      Mouse.move(-10, 0, 0);           // Move right by 10 pixels
      delay(10);                       // Small delay to allow system to process
    }
  }

  if (x > 0) {
    for (int i = 0; i < x; i += 10) {  // Increment by 10 for smoother movement
      Mouse.move(10, 0, 0);            // Move right by 10 pixels
      delay(10);                       // Small delay to allow system to process
    }
  }

  if (y < 0) {
    for (int i = 0; i > y; i -= 10) {  // Increment by 10 for smoother movement
      Mouse.move(0, -10, 0);           // Move down by 10 pixels
      delay(10);                       // Small delay to allow system to process
    }
  }

  if (y > 0) {
    for (int i = 0; i < y; i += 10) {  // Increment by 10 for smoother movement
      Mouse.move(0, 10, 0);            // Move down by 10 pixels
      delay(10);                       // Small delay to allow system to process
    }
  }
}
