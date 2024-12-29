#include "Window.hpp"

#include <raylib.h>

Window::Window(const WindowSettings& settings)
    : m_window_settings(settings)
{
    InitWindow(settings.width, settings.height, settings.title.data());
    SetTargetFPS(settings.target_fps);
}

void Window::RunLoop() const
{
    while (!WindowShouldClose()) {
        Draw();
    }
    CloseWindow();
}

void Window::Draw() const
{
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
    EndDrawing();
}
