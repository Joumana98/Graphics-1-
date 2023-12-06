#include "Simple_window.h"
#include "Graph.h"

int main()
{
	using namespace Graph_lib;

	//Create a window obejct
	Simple_window win{ Point{20,100},1300,700,, "My window" };

	//Create graphics objects

	//Create a 1/4 frame around the rectangle, which is equivalent to 24 pixels
	Rectangle frame{ Point{20,20},934,600 };
	frame.set_color(Color::red);
	// Create a rectangle with 2/3 width and 3/4 length of my screen
	// My screen size 1366x576 pixels
	Rectangle rec{ Point{44,44},910,576 };

	//Attach graphics objects to the window object
	win.attach(frame);
	win.attahc(rec);

	//Give control to the display engine
	win.wait_for_button();

	return 0;
}