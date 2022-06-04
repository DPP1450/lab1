#include "bits/stdc++.h"
using namespace std;
class Window
{
public:
    virtual void draw() = 0;
    virtual string getDescription() = 0;
};

class simple_window : public Window
{
public:
    simple_window()
    {
        draw();
    }
    void draw()
    {
        // draw the window
    }

    string getDescription()
    {
        return "simple_window";
    }
};

class verticalScrollBarWindow : public simple_window
{
public:
    Window *window;
    verticalScrollBarWindow(Window *window)
    {
        this->window = window;
        draw();
    }

    void draw()
    {
        // draw the window
    }

    string getDescription()
    {
        return window->getDescription() += " has a verticalScrollBar";
    }
};

class horizontalScrollBarWindow : public simple_window
{
public:
    Window *window;
    horizontalScrollBarWindow(Window *window)
    {
        this->window = window;
        draw();
    }

    void draw()
    {
        // draw the window
    }

    string getDescription()
    {
        return window->getDescription() += " has a horizontalScrollBar";
    }
};

class closeButtonWindow : public simple_window
{
public:
    Window *window;
    closeButtonWindow(Window *window)
    {
        this->window = window;
        draw();
    }

    void draw()
    {
        // draw the window
    }

    string getDescription()
    {
        return window->getDescription() += " has a closeButton";
    }
};

class minMaxButtonWindow : public simple_window
{
public:
    Window *window;
    minMaxButtonWindow(Window *window)
    {
        this->window = window;
        draw();
    }

    void draw()
    {
        // draw the window
    }

    string getDescription()
    {
        return window->getDescription() += " has a minMaxButton";
    }
};

int main()
{
    Window *w = new simple_window();
    w = new verticalScrollBarWindow(w);
    w = new closeButtonWindow(w);
    cout << w->getDescription() << endl;
}
