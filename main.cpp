#include <raylib.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    const int screenWidth = 1020;
    const int screenHeight = 600;
    Vector2 centre = {500,300};
    InitWindow(screenWidth, screenHeight, "first game window by umais using raylib");
    SetTargetFPS(59);

    while (!WindowShouldClose()) {
    BeginDrawing(); 
    ClearBackground(RAYWHITE);
    DrawCircleSector(centre,300,180,360,0,RED); 
    EndDrawing();

    }

    CloseWindow();
    return 0;
}
