#include "Simple_window.h"
#include "Graph.h"

int main()
{
	using namespace Graph_lib;

	// Create a window object
	Simple_window win{ Point{20,100},600,400, "My window" };

	// Create grapics objects


	Rectangle cell1{ Point{100,50},100,100 };
	cell1.set_fill_color(Color::red);
	Rectangle cell2{ Point{200,50},100,100 };
	Rectangle cell3{ Point{300,50},100,100 };
	cell3.set_fill_color(Color::red);

	Rectangle cell4{ Point{100,150},100,100 };
	Rectangle cell5{ Point{200,150},100,100 };
	cell5.set_fill_color(Color::red);
	Rectangle cell6{ Point{300,350},100,100 };

	Rectangle cell7{ Point{100,250},100,100 };
	cell7.set_fill_color(Color::red);
	Rectangle cell8{ Point{200,250},100,100 };
	Rectangle cell9{ Point{300,250},100,100 };
	cell9.set_fill_color(Color::red);

	// attach grapics object to window object
	win.attach(cell1);
	win.attach(cell2);
	win.attach(cell3);
	win.attach(cell4);
	win.attach(cell5);
	win.attach(cell6);
	win.attach(cell7);
	win.attach(cell8);
	win.attach(cell9);

	// give control to the display engine
	win.wait_for_button();


	return 0;
}
