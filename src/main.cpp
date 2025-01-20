#include <iostream>
#include <raylib.h>
#include <stdbool.h>

enum Layer {
    MainMenu,
    Playing
};

Layer current_layer = MainMenu;

bool button(char* text, int x, int y, int width, int height)
{
    DrawRectangle(x,y,width,height,GRAY);
    DrawRectangleLines(x,y,width,height,WHITE);
    DrawText(text,x + 10,y + 10,20,WHITE);
        if(GetMouseX() >= x && GetMouseX() <= x + width && GetMouseY() >= y && GetMouseY() <= y + 40 && IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
        {
            return true;
        } else return false;
}

int main() {
    InitWindow(1920, 1080, "RedBox");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        bool is_enter_pressed = IsKeyPressed(KEY_ENTER);

        BeginDrawing();

        if (current_layer == MainMenu) {
            ClearBackground(BLACK);

            DrawText("RedBox", 790, 200, 120, RED);
            if (button("Singleplayer", 830, 380, 240, 40)) {
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