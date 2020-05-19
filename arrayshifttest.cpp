#include <iostream>

const int imu_samples_amount = 10;
float imu_samples_x[imu_samples_amount];

void arrayInsertShift(float array[imu_samples_amount], float sample);
void printArray(float array[imu_samples_amount]);



int main() {
    float x = 0;
    for (int i=0; i<=20; i++) {
        arrayInsertShift(imu_samples_x, x);
        printArray(imu_samples_x);
        x = x + 5;
        //std::cout << "x: " << x << std::endl;
    }
    //std::cout << "ENDx: " << x << std::endl;
    return 0;
}



void arrayInsertShift(float array[imu_samples_amount], float sample) {
    // for (int i=0; i<=imu_samples_amount; i++) {
    //     array[i+1] = array[i];
    // }
    for (int i=imu_samples_amount; i>=0; i--) {
        array[i] = array[i-1];
    }
    array[0] = sample;
}

void printArray(float array[imu_samples_amount]) {
    for (int i=0; i<=imu_samples_amount; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}