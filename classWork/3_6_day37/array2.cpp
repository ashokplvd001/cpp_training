#include <iostream>
#include <array>
using namespace std; 

#if 1

template <typename T1 >

double averageCal( T1 & arr, size_t size , int offset)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += ( arr.at(i) + offset ) ;

    return sum / (double)size;
}
#else

double averageCal( array<float , 5 > & arr ,  int size )
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr.at(i) + offset;
    }
    return sum / (double) size;
}
#endif

int main()
{
    std::array<std::array<double, 5>, 3> sensor_readings = {
    std::array<double, 5>{20.0, 21.0, 22.0, 20.5, 19.8},  // Sensor 1
    std::array<double, 5>{30.0, 30.2, 29.8, 30.1, 30.3},  // Sensor 2
    std::array<double, 5>{25.0, 26.0, 24.0, 25.5, 26.2}   // Sensor 3
    };

    cout << "Sensor 1 Average(calibrated) : " 
        << averageCal(sensor_readings.at(0) ,( sensor_readings.at(0)).size() , 0.5 ) << endl;

    cout << "Sensor 2 Average(calibrated) : "
        << averageCal(sensor_readings.at(1), (sensor_readings.at(1)).size() , -0.3 ) << endl;


    cout << "Sensor 3 Average(calibrated) : "
        << averageCal(sensor_readings.at(2), (sensor_readings.at(2)).size() , 1.2) << endl;



}
