#include <iostream>
using namespace std;
class ServerSession {
    int sessionID;
public:
    ServerSession (int id) {
        sessionID = id;
        cout << "\nThe session started and resource acquired\n";
    }
    ~ServerSession () {
        cout << "\nThe session is ending and the resource is released\n";
    }
};
int main () {
    cout << "Entering main\n";
    {
        ServerSession s1(2);
    }
    cout << "\nExiting main\n";
    return 0;
}