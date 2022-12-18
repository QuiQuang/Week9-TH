#pragma once
#include "Component.h"

class Leaf : public Component
{
public:
	string GetName() {
		return this->Name;
	}

	float GetSize() {
		return this->Size;
	}

	void SetData(string N) {
		Name = N;
	}

	vector<Component*> GetVector() {
		vector<Component*> A;
		A.clear();
		return A;
	}

	~Leaf() {}

	void Show(Component* temp) {
		cout << "- " << temp->GetName() << endl;
	}
};