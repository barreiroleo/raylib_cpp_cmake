#include "Window.hpp"

int main(int argc, char* argv[])
{
    Window main_window { WindowSettings { .title = "Hey, this is a window" } };
    main_window.RunLoop();
    return 0;
}
