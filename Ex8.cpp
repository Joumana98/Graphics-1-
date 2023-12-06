#include "Simple_window.h"
#include "Graph.h"

int main()
{
	using namespace Graph_lib;

	Simple_window win{ Point{20,100},600,400, "My window" };

	Circle c1{ Point{50,25},20 };
	Circle c2{ Point{75,50},20 };
	Circle c3{ Point{100,25},20 };
	Circle c4{ Point{125,50},20 };
	Circle c5{ Point{150,25},20 };

	c1.set_color(Color::blue);
	c2.set_color(Color::yellow);
	c3.set_Color(Color::black);
	c4.set_color(Color::green);
	c4.set_color(Color::red);

	win.attach(c1);
	win.attach(c2);
	win.attach(c3);
	win.attach(c4);
	win.attach(c5);

	win.wait_for_button();

	return 0;
}