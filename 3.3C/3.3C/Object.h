#pragma once
class Object
{
private:
	static unsigned int count;
public:
	static unsigned int Count() { return count; };
	Object() { ++count; };
	~Object() { --count; };
};

