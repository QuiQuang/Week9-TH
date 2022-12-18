#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Component
{
protected:
	string Name;
	float Size = 1;

public:
	virtual void SetData(string N) = 0;
	virtual string GetName() = 0;
	virtual float GetSize() = 0;
	virtual void AddComponent(Component* ifile) {}
	virtual void RemoveComponent(Component* ifile) {}
	virtual void Show(Component* temp) = 0;
	virtual vector<Component*> GetVector() = 0;
	virtual ~Component() {}
};