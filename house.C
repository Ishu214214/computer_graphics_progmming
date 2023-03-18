
// graphics.h library
#include <conio.h>
#include <graphics.h>
#include <stdio.h>


// Driver Code

void main()
{

    // Initialize of gdriver with

    // DETECT macros

    int gdriver = DETECT, gmode;

    initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");

    line(100, 100, 150, 50);
    line(150, 50, 200, 100);
    line(150, 50, 350, 50);
    line(350, 50, 400, 100);
    rectangle(100, 100, 200, 200);

    rectangle(200, 100, 400, 200);

    rectangle(130, 130, 170, 200);

    rectangle(250, 120, 350, 180);

    // Fill the shapes with colors white



    // Close the initialized gdriver
    getch();
    closegraph();

}
