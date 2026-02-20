#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    int x, y;
    int x1 = 20, y1 = 60, x2 = 150, y2 = 200;
    int p, dx, dy;

    x = x1;
    y = y1;
    dx = x2 - x1;
    dy = y2 - y1;
    putpixel(x, y, 2);
    p = (2 * dy - dx);
    while (x <= x2)
    {
        if (p < 0)
        {
            x = x + 1;
            p = p + 2 * dy;
        }
        else
        {
            x = x + 1;
            y = y + 1;
            p = p + (2 * dy) - (2 * dx);
        }
        putpixel(x, y, 7);
    }
    getch();
    closegraph();
}