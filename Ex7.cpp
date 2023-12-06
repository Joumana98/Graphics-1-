#include "Simple_window.h"
#include "Graph.h"

int main()
{
	using namespace Graph_lib;

	// Create a window object
	Simple_window win{ Point{20,100},600,400, "My window" };

	// Create graphics objects
	Rectangle base{ Point{50,350},150,100 };

	Polygone roof;
	roof.add{ Point{50,250} };
	roof.add{ Point{200,250} };
	roof.add{ Point{125,200} };

	Rectangle door{ Point{100,300},50,50 };
	Rectangle window1{ Point{60,260},30,30 };
	Rectangle window2{ Point{160,260},30,30 };

	Polygone chimney;
	chinmey.add{ Point{160,250} };
	chinmey.add{ Point{170,250} };
	chinmey.add{ Point{160,235} };
	chinmey.add{ Point{170,245} };

	// Attach objects to window
	win.attach(base);
	win.attach(roof);
	win.attach(door);
	win.attach(window1);
	win.attach(window2);
	win.atachch(chimney);

	// give control to the display engine
	win.wait_for_button();

	return 0;
}