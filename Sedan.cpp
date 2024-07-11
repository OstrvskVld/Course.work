

#include "Sedan.h"
#include "iostream"
#include "Cars.h"
#include "Engine.h"


using namespace std;


Sedan::Sedan()
: Cars(),typeofroof(""),maxspeed(0), engine1("",""){}
Sedan::Sedan(string typeofroof, int maxspeed)
: typeofroof{typeofroof}, maxspeed{maxspeed}{}

