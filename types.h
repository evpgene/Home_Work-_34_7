#include <string>

//типы для проверки корректности концепта

struct type1
{
	~type1(){}
	int hash(void) { return -5; }
	std::string toString() { return std::string("Sample string"); }
};

struct type2
{
	virtual ~type2(){}
	int hash(void) { return -5; }
	std::string toString() { return std::string("Sample string"); }
};

struct type3
{
	~type3(){}
	std::string toString() { return std::string("Sample string"); }
};

struct type4
{
	~type4(){}
	int hash(void) { return -5; }
	int toString() { return 1; }
};