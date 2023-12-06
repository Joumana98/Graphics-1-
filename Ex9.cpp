#include "Simple_window.h"
#include "Graph.h"

int main()
{
	using namespace Graph_lib;

	Simple_window win{ Point{20,100},600,400, "A photo" };

	Image photo{ Point{50,100},"C:\Users\Administrator\Desktop\20180303_162620" };

	win.attach(photo);
	win.wait_for_button();

	return 0;
}