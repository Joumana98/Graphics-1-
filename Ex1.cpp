#include "Simple_window.h"
#include "Graph.h"

int main()
{

	using namespace Graph_lib;

	// Create a window object
	Simple_window win{ Point{20,50},600,400, "My window" };

	// Create a rectangle as a Rectangle
	Rectangle rec{ Point {100,100},200,100 };
	rec.set_color(Color::blue);

	// Create a rectangle as a Polygon
	Polygon rect_pol;
	rect_pol.add(Point{ 350,100 });
	rect_pol.add(Point{ 350,200 });
	rect_pol.add(Point{ 450,100 });
	rect_pol.add(Point{ 450,200 });
	rect_pol.set_color(Color::red);

	// Attach graphics object to window object
	win.attach(rec);
	win.attach(rect_pol);

	// Give control to display engine to draw objects
	win.wait_for_button();


	return 0;
}