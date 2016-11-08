#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    double numbers [10];
    double numInput;
    double numMax = 0;
    double numMin = 0;
    double numTotal = 0;
    double numAverage = 0;
    
    for(int i = 0; i < 10; i++){
        cout << "Enter a number: " << endl;
        cin >> numInput;
        numbers[i] = numInput;
    }
    
    for(int j = 0; j < 10; j++){
        if (numbers[j] >= numMax){
            numMax = numbers[j];
        }
    }
    
    numMin = numbers[0];
    
    for(int k = 0; k < 10; k++){
        if (numbers[k] <= numMin){
            numMin = numbers[k];
        }
    }
    
    for(int l = 0; l < 10; l++){
        numTotal += numbers[l];
    }
    
    numAverage = numTotal/10;
    
    cout << "Min: " + to_string(numMin);
    cout << "Max: " + to_string(numMax);
    cout << "Average: " + to_string(numAverage);
    
    
    
    
}
