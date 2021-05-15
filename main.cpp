#include "graphics.hpp"
#include "properties.hpp"
#include "map.hpp"
#include "window.hpp"
#include "tank.hpp"
#include "tankcso.hpp"
#include "button.hpp"
#include "textwidget.hpp"
#include "projectile.hpp"
#include <vector>
#include <iostream>


using namespace std;
using namespace genv;

const int X = 900;
const int Y = 600;



int main()
{


    Window  * win = new Window(X,Y);
    win->Gamestarter(win);





    return 0;
}
