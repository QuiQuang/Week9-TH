#pragma once
#include "Component.h"

class Composite : public Component
{
private:
	vector<Component*> Disk;

public:
	void SetData(string N) {
		Name = N;
	}

	string GetName() { 
		return Name; 
	}	

	float GetSize() {
		float n = 0;
		for (int i = 0; i < Disk.size(); ++i)
			n += Disk[i]->GetSize();
		return n;
	}

	void AddComponent(Component* new_Component) {
		Disk.push_back(new_Component);
	}

	void RemoveComponent(Component* del_Component) {

	}

	void Show(Component* temp) {
		cout << "- " << temp->GetName() << endl;
		for (int i = 0; i < temp->GetVector().size(); ++i) {
			Show(temp->GetVector()[i]);
		}
	}

	vector<Component*> GetVector() { return Disk; }

	~Composite() {}
};