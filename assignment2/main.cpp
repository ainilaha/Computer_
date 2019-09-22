#include "display.h"

int main()
{

    Display display(500,500,"Programming Assignment 2 - Hello Triangle");
    display.Clear(0.0f, 0.0f, 0.4f, 0.0f);
    display.Bind();
    display.Update();

    return 0;
}
