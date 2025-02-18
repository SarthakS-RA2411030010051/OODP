#include <iostream>
using namespace std;

class HealthMonitor {
private:
    static int alertCount; // Declare alertCount
public:
    static int getAlertCount() {
        return alertCount;
    }
};

// Initialize alertCount outside the class definition
int HealthMonitor::alertCount = 0;

int main() {
    cout << "Alert count: " << HealthMonitor::getAlertCount() << endl;
    return 0;
};
