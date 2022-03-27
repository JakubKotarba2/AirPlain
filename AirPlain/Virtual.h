#ifndef VIRTUAL_H
#define VIRTUAL_H

#include "Flight.h"

class Virtual: public Flight
{
public:
	  virtual void Initial() = 0;
	  virtual void Change() = 0;
	  virtual void See() = 0;
};

#endif // !VIRTUAL_H
