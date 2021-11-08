#include "Football.h"

Football::Football()
{
	int begin = 0,
		end = 1;

}
Football::Football(int o, int c)
{
	int begin = o,
		end = c;


}
Football::Football(const Football& g)
{
	int begin = g.GetBegin(),
		end = g.GetEnd();

}
Football::~Football() { }
