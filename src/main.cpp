#include <iostream>
#include <raylib.h>

int main() {
    InitWindow(1920, 1080, "RedBox");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(BLACK);

        DrawText("no game yet", 960, 540, 30, WHITE);

        EndDrawing();
    }

    return 0;
}