#pragma once

#include <string_view>

struct WindowSettings {
    std::string_view title = "Default title";
    const int width = 800;
    const int height = 450;
    const int target_fps = 30;
};

class Window {
public:
    Window(const WindowSettings& settings);
    Window(const Window&) = delete;
    Window(Window&&) = delete;
    Window& operator=(const Window&) = delete;
    Window& operator=(Window&&) = delete;

    void RunLoop() const;
    void Draw() const;

private:
    WindowSettings m_window_settings;
};
