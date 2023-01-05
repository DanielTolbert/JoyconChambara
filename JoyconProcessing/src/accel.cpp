// accel.cpp
// 1/4/23

#include <iostream>
#include "accel.h"
//#include "../../JoyShockLibrary/JoyShockLibrary.h"

using namespace std;

// Function definitions go here
void print_acceleration(int deviceId) {
    struct IMU_STATE imu_state = JslGetIMUState(deviceId);
    cout << "accelX: " << imu_state.accelX << endl;
    cout << "accelX: " << imu_state.accelY << endl;
    cout << "accelX: " << imu_state.accelZ << endl;
}
