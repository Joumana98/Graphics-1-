#include "Simple_window.h"
#include "Graph.h"

int main()
{
	using namepace Graph_lib;

	// Create a window object
	Simple_window win{ Point{20,100},600,400, "My window" };

	//Create graphics objects
	//Draw a Shape that doesn’t fit inside its window: it will be cut off
	Ellipse e{ Point{300,200},400,200 };
	win.attach(e);

	//Draw a Window that doesn’t fit on my screen
	Simple_window win2{ Point{40,150},1500,800,, "My window #2" };

	win.wait_for_button();
	win2.wait_for_button();


	return 0;
}