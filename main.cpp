#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    double userInput = 0;
    double numberMax = -1;
    double numberMin = -1;
    double numberTotal = 0;
    double numberAverage = 0;
    int numberEntered = 0;
    
    cout << "Enter a number (enter -1 to stop): " << endl;
    cin >> userInput;
    numberMin =userInput;
    
    while (userInput != -1){
        if (userInput > numberMax)
        {
            numberMax = userInput;
        }
        if (userInput < numberMin)
        {
            numberMin = userInput;
        }
        
        numberTotal += userInput;
        numberEntered ++;
        
        cout << "Enter a number (enter -1 to stop): " << endl;
        cin >> userInput;
    }
    
    numberAverage = numberTotal / numberEntered;
    
    cout << "Maximum: " + to_string(numberMax) << endl;
    cout << "Minimum: " + to_string(numberMin) << endl;
    cout << "Average: " + to_string(numberAverage) << endl;
    
}
