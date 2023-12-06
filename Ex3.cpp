#include "Simple_window.h"
#include "Graph.h"

int main()
{
	using namespace Graph_lib;

	//Create a window object
	Simple_window win{ Point{100,100},600,400, "My window" };

	//Create graphics objects
	Text first{ Point {250,20},"J" };
	first.set_color(Color::cyan);
	first.set_style(Line_style(Line_style::solid, 4));

	Text last{ Point{ 250,50 }, "K" };
	last.set_color(Color::yellow);
	last.set_style(Line_style(Line_style::solid, 4));

	// Attach graphics objects to window object
	win.attach(first);
	win.attach(last);

	//Give control to display engine
	win.wait_for_button();

	return 0;
}
