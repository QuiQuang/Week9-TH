#include "Component.h"
#include "Composite.h"
#include "Leaf.h"

vector<Component*> DiskG;

int main() {

	//File
	Component* File1 = new Leaf;	File1->SetData("A");
	Component* File2 = new Leaf;	File2->SetData("B");
	Component* File3 = new Leaf;	File3->SetData("C");

	//Folder
	Component* Folder1 = new Composite;	Folder1->SetData("E");
	Component* Folder2 = new Composite;	Folder2->SetData("F");
	Component* Folder3 = new Composite;	Folder3->SetData("G");

	//Create
	Folder1->AddComponent(File1);
	Folder2->AddComponent(File2);
	Folder3->AddComponent(File3);

	Folder2->AddComponent(Folder3);

	DiskG.push_back(Folder1);
	DiskG.push_back(Folder2);

	/*

	- Disk : vector
		- Folder1(E) :
			- File1(A).
		- Folder2(F) :
			- File2(B).
			- Folder3(G) :
				- File3(C).

	*/
	cout << "------FOLDER------\n";
	for (int i = 0; i < DiskG.size(); ++i) {
		DiskG[i]->Show(DiskG[i]);
	}

	cout << "-------------------\n";
	float Total = 0;
	for (int i = 0; i < DiskG.size(); ++i) {
		Total += DiskG[i]->GetSize();
	}
	cout << "Size : " << Total;
	return 0;
}