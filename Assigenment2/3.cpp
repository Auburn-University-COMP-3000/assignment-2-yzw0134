#include <iostream>;
#include <iomanip>;

using namespace std;

double convertToMPH(int minutes, int seconds);
double convertToMPH(double kph);

int main() {
	int minutes = 0,
	    seconds = 0;
	double kph = 0;
 

    cout << "enter the minutes" << endl;

        cin >> minutes;

    while (minutes < 0){

        cout << "please give a valid minutes" << endl;
        cin >> minutes; 
    }

        cout << "enter a seconds" << endl;

        cin >> seconds;
    while (seconds <= 0){

        cout << "please give a valud seconds" << endl;
        cin >> seconds;
} 
        cout << convertToMPH(minutes,seconds) << endl;

        cout << "enter a kph" << endl;

        cin >> kph;
        while (kph < 0){

            cout << "please give a valud kph" << endl;
            cin >> kph;
        }
        cout << convertToMPH(kph) << endl;

  

    


	return 0;

}

double convertToMPH(int minutes, int seconds) {
	// There are 3600 seconds in an hour
	return (3600.0 / ((minutes * 60) + seconds));
}

double convertToMPH(double kph) {
	return (kph / 1.61);
}