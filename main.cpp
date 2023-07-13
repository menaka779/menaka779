/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/
/* 
 Weather App
 Name : R.Menaka
 College name : Vivekanandha College Of Engineering For Women
 
 Functions
 Class and Objects
 OOPS concepts
 Switch case */

#include <iostream>
#include <string>
using namespace std;
class WeatherReport {
private:
    string location;
    string condition;
    double temperature;
    int rainPossibility;
    int humidity;
public:
    WeatherReport(string loc, string cond, double temp, int rain, int hum)
        : location(loc), condition(cond), temperature(temp), rainPossibility(rain), humidity(hum) {}
    void displayReport() {
        cout << "Location: " << location << endl;
        cout << "Condition: " << condition << endl;
        cout << "Temperature: " << temperature << "°C" << endl;
        cout << "Rain Possibility: " << rainPossibility << "%" << endl;
        cout << "Humidity: " << humidity << "%" << endl;
    }
};
WeatherReport getTodayWeather(string location) {
    string condition = "Cloudy";
    double temperature = 25.5;
    int rainPossibility = 30;
    int humidity = 65;
    return WeatherReport(location, condition, temperature, rainPossibility, humidity);
}
WeatherReport getYesterdayWeather(string location) {
    string condition = "Rain";
    double temperature = 22.0;
    int rainPossibility = 75;
    int humidity = 70;
    return  WeatherReport(location, condition, temperature, rainPossibility, humidity);
}
WeatherReport getTomorrowWeather(string location) {
    string condition = "Thunderstorm";
    double temperature = 28.0;
    int rainPossibility = 60;
    int humidity = 80;
    return WeatherReport(location, condition, temperature, rainPossibility, humidity);
}
void displayWeeklyReport(string location) {
    double temperatures[] = {24.0, 25.5, 26.0, 27.5, 28.0, 27.0, 26.5};
    string conditions[] = {"Cloudy", "Rain", "Cloudy", "Sunny", "Thunderstorm", "Cloudy", "Sunny"};
    int rainPossibilities[] = {40, 60, 30, 20, 70, 40, 10};
    int humidities[] = {70, 75, 65, 60, 80, 70, 55};

    cout << "Weekly Weather Report - " << location << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Day " << i + 1 << endl;
        WeatherReport report(location, conditions[i], temperatures[i], rainPossibilities[i], humidities[i]);
        report.displayReport();
        cout << endl;
    }
}
void displayMonthlyWeather(string location) {
    double averageTemperature = 25.0;
    int averageRainPossibility = 45;
    int averageHumidity = 70;

    cout << "Monthly Weather Report - " << location << endl;
    cout << "Average Temperature: " << averageTemperature << "°C" << endl;
    cout << "Average Rain Possibility: " << averageRainPossibility << "%" << endl;
    cout << "Average Humidity: " << averageHumidity << "%" << endl;
}
int main() {
    string location;
    int option;
    
    cout << "Select an option:\n";
    cout << "1. Today's Weather\n";
    cout << "2. Yesterday's Weather\n";
    cout << "3. Tomorrow's Weather\n";
    cout << "4. Weekly Weather Report\n";
    cout << "5. Monthly Weather Report\n";
    cout << "Option: ";
    cin >> option;
   
    switch (option) {
        case 1: {
            WeatherReport todayReport = getTodayWeather(location);
            cout << "Today's Weather Report:" << endl;
            todayReport.displayReport();
            break;
        }
        case 2: {
            WeatherReport yesterdayReport = getYesterdayWeather(location);
            cout << "Yesterday's Weather Report:" << endl;
            yesterdayReport.displayReport();
            break;
        }
        case 3: {
            WeatherReport tomorrowReport = getTomorrowWeather(location);
            cout << "Tomorrow's Weather Report:" << endl;
            tomorrowReport.displayReport();
            break;
        }
        case 4:
            displayWeeklyReport(location);
            break;
        case 5:
            displayMonthlyWeather(location);
            break;
        default:
            cout << "Invalid option selected." << endl;
    }
    return 0;
}



