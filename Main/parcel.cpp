#include <iostream>
using namespace std;

void menu() {
	cout << "-----------------------------------" << endl;
	cout << " MAIN MENU" << endl;
	cout << " 1. Parcel List" << endl;
	cout << " 2. Register Parcel" << endl;
	cout << " 3. Delete Parcel" << endl;
	cout << " 4. Search" << endl;
	cout << "-----------------------------------" << endl;
}

int main() {
	
	// declaration
	string parcelReceiver[1000];
	string parcelID[1000];
	string parcelType[1000];
	
	//----------------------------
	bool start = true;
	while (start == true) {
		menu();
		int key;
		cout << " Please enter key : ";
		cin >> key;
		
		if (key == 1) {
			cout << "----------------------------" << endl;
			cout << " PARCEL LIST" << endl;
			cout << "----------------------------" << endl;
			int iterator = 0;
			bool continuePrint = true;
			while (continuePrint == true) {
				if (parcelReceiver[iterator].length() != 0) {
					cout << " " << iterator + 1 << ". NAME : " << parcelReceiver[iterator] << endl;
					cout << " " << "   ID   : " << parcelID[iterator] << endl;
					cout << " " << "   TYPE : " << parcelType[iterator] << endl;
					cout << "----------" << endl;
					iterator++;
				} else {
					continuePrint = false;
				}
			}
			cout << " Press \'q\' to quit : ";
			
			bool checkQuit = false;
			while (checkQuit == false) {
				char quitList;
				cin >> quitList;
				if (quitList == 'q') {
					checkQuit = true;
				}
			}
		}
		else if (key == 2) {
			cout << "------------------------------" << endl;
			cout << " Register Parcel" << endl;
			cout << "------------------------------" << endl;
			string newReceiver, newID, newType;
			
			cout << " Enter receiver\'s name: ";
			cin >> newReceiver;
			
			cout << " Enter parcel\'s ID : ";
			cin >> newID;
			
			cout << " Enter parcel type (Small, Medium, Large) : ";
			cin >> newType;
			
			int iteratorAdd = 0;
			bool continueAdd = true;
			while (continueAdd == true) {
				if (parcelReceiver[iteratorAdd].length() == 0) {
					parcelReceiver[iteratorAdd] = newReceiver;
					parcelID[iteratorAdd] = newID;
					parcelType[iteratorAdd] = newType;
					
					continueAdd = false;
				} else {
					iteratorAdd++;
				}
			}
			cout << " Data has been added successfully!" << endl;
			bool checkAdd = false;
			while(checkAdd == false) {
				cout << " Enter \'q\' to exit : ";
				char exitAdd;
				cin >> exitAdd;
				if (exitAdd == 'q') {
					checkAdd = true;
				}
			}
			
		}
	}
}
