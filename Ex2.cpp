#include "Simple_window.h"
#include "Graph.h"

int main()
{
	using namespace Graph_lib;

	// Create a window object
	Simple_window win{ Point{20,100},600,400, "My window" };

	// Create graphics objects
	Rectangle rec{ Point{100,100},100,30 };
	Text t{ Point{25,15},"Howdy!" };

	//Attach graphic objects to the window object
	win.attach(rec);
	win.attach(t);

	// Give control to display engine
	win.wait_for_button();

	return 0;
}