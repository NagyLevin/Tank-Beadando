#include "window.hpp"
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
