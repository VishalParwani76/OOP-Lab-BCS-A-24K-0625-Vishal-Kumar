#include <iostream>
using namespace std;
class CallRecord {
    int callerID;
    int durationMinutes;
    static int count;
public:
    CallRecord(int id = 0, int duration = 0) : callerID(id), durationMinutes(duration) {
        count++;
    }
    static void getTotalCalls() {
        cout << "Total Count: " << count << endl;
    }
    void display() {
        cout << "Caller ID: " << callerID << endl;
        cout << "Duration Minutes: " << durationMinutes << endl;
    }
    ~CallRecord() {}
};

int CallRecord :: count = 0;

int main() {
    CallRecord r1[20];
    r1[0].display();
    CallRecord :: getTotalCalls();
    return 0;
}