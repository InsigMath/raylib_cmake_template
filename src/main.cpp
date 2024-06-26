#include <raylib.h>

int main(int argv, char *argc[]) {
  InitWindow(800, 600, "Raylib Window");
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("Hello World", 100, 100, 50, BLACK);
    EndDrawing();
  }
  CloseWindow();
}
