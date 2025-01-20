#include <iostream>
#include <raylib.h>

enum Layer {
    MainMenu,
    Playing
};

int main() {
    InitWindow(1920, 1080, "RedBox");

    SetTargetFPS(60);

    // Variables for the game to work
    Layer current_layer = MainMenu;

    while (!WindowShouldClose()) {
        bool is_enter_pressed = IsKeyPressed(KEY_ENTER);

        BeginDrawing();

        if (current_layer == MainMenu) {
            ClearBackground(BLACK);

            DrawText("Press enter to start!", 960, 540, 30, WHITE);

            if (is_enter_pressed) {
                current_layer = Playing;
            }
        } else if (current_layer == Playing) {
            ClearBackground(BLACK);

            DrawText("no game yet", 960, 540, 30, WHITE);
        }

        EndDrawing();
    }

    return 0;
}