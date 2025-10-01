#include <iostream>
using namespace std;
class PropertyDeed {
    int* ownerID;
public:
    PropertyDeed (int id) {
        ownerID = new int(id);
    } 

    /*IMPORTANT: 
    Initially the deep copy is commented out. After running the program,
    comment the shallow copy and remove comments on the Deep copy.
    This is to verify both copy constructors one at a time
    */

    // SHALLOW COPY

    PropertyDeed (const PropertyDeed& obj1) {
        ownerID = obj1.ownerID;
    }

    // DEEP COPY

    // PropertyDeed (const PropertyDeed& obj2) {
    //     this->ownerID = new int(*obj2.ownerID);
    // }

    void setID (int newId) {
        *ownerID = newId;
    }
    void display () {
        cout << "\nOwner ID: " << *ownerID << endl;
    }
    ~PropertyDeed () {
        delete ownerID;
    }
};
int main() {
    PropertyDeed originalDeed(100);
    PropertyDeed copiedDeed = originalDeed;
    copiedDeed.setID(55);
    cout << "Original Deed: ";
    originalDeed.display();
    cout << "\nCopied Deed: ";
    copiedDeed.display();
    return 0;
}