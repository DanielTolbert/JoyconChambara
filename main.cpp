#include <iostream>
#include <stdexcept>
#include <vector>
#include "JoyShockLibrary.h"
#include "JoyconProcessing.h"

using namespace std;

int connectDevices();
int* getDeviceHandles(int devicesSize); 
void run(int deviceId);

int main() {
    int devicesSize = connectDevices();
    int* deviceHandles = getDeviceHandles(devicesSize);
    int selectedDeviceId = deviceHandles[0];
    while (true) {
        run(selectedDeviceId);
    }
    delete[] deviceHandles;
    return 0;
}

int connectDevices() {
    int devicesSize = JslConnectDevices();
    if (devicesSize == 0) {
        throw runtime_error("There are no connected devices");
    }
    cout << "Number of Connected Devices: " << devicesSize;
    return devicesSize;
}

int* getDeviceHandles(int devicesSize) {
    int* deviceHandles = new int[devicesSize];
    JslGetConnectedDeviceHandles(deviceHandles, devicesSize);
    cout << "Device Handles:";
    for (int i = 0; i < devicesSize; i++) {
        cout << " " << deviceHandles[i];
    }
    cout << endl;
    return deviceHandles;
}

void run(int deviceId) {
    print_acceleration(deviceId);
    print_gyroscope(deviceId);
}


