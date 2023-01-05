// gyro.cpp
// 1/4/23

#include <iostream>
#include "gyro.h"
//#include "../../JoyShockLibrary/JoyShockLibrary.h"

using namespace std;

// Function definitions go here
void print_acceleration(int deviceId) {
    struct IMU_STATE imu_state = JslGetIMUState(deviceId);
    cout << "gyroX: " << imu_state.gyroX << endl;
    cout << "gyroY: " << imu_state.gyroY << endl;
    cout << "gyroZ: " << imu_state.gyroZ << endl;
}