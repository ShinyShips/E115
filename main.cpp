#include <iostream>
using namespace std;

class Vending_Machine{
private:
    int Sprite,Coke,Water;
    double MoneyInCashBox,SpriteCost,CokeCost,WaterCost;
public:
    Vending_Machine(int Z = 20, int A = 10,int B = 10, int C = 10){
        //Constructor: A Constructor is commonly used to initalize variables inside a class.
        MoneyInCashBox = Z;
        Sprite = A;
        Coke = B;
        Water = C;
        SpriteCost = 1.25;
        CokeCost = 1.50;
        WaterCost = 1.00;
    }
    int PrintMenu(){
        int UserInput;
        cout <<"-------------------------------" << endl;
        cout << Sprite << " cans of Sprite" << endl;
        cout << Coke << " cans of Coke" << endl;
        cout << Water << " cans of Water" << endl;
        cout << "------------------------------" << endl;
        cout << "Sprite Costs: " << SpriteCost << "\nCoke Cost: " << CokeCost << "\nWaterCost: " << WaterCost << endl;
        cout << "------------------------------" << endl;
        cout << "Press 1 for Sprite \nPress 2 for Coke \nPress 3 for Water" << endl;
        cin >> UserInput;
        return UserInput;
    }
    
    void DispenseDrink(int UserInput){
        double MoneyEntered, MoneyChange;
        if(UserInput == 1){
            if(Sprite > 0){
                cout << "Please enter your Cash Bill $ ";
                cin >> MoneyEntered;
                MoneyChange = Change(MoneyEntered,SpriteCost);
                if(MoneyChange >= 0){
                    cout << "Your change is $ " << MoneyChange << endl;
                    cout << endl << endl;
                    Sprite--;
                }
                else
                    cout << "We've refunded your money!" << endl;
            }
            else
                cout << "No more drinks left!" << endl;
        }
        else if(UserInput == 2){
            if(Coke > 0){
                cout << "Please enter your Cash Bill $ ";
                cin >> MoneyEntered;
                MoneyChange = Change(MoneyEntered,CokeCost);
                if(MoneyChange >= 0){
                    cout << "Your change is $" << MoneyChange << endl;
                    cout << endl << endl;
                    Coke--;
                }
                else
                    cout << "We've refunded your money!" << endl;
            }
            else
                cout << "No more drinks left!" << endl;
        }
        else if(UserInput == 3){
            if(Water > 0){
                cout << "Please enter your Cash Bill $ ";
                
                cin >> MoneyEntered;
                MoneyChange = Change(MoneyEntered,WaterCost);
                if(MoneyChange >= 0){
                    cout << "Your change is $" << MoneyChange << endl;
                    cout << endl << endl;
                    Water--;
                }
                else
                    cout << "We've refunded your money!" << endl;
            }
            else
                cout << "No more drinks left!" << endl;
        }
        else
            cout << "Drink not found " << endl;
    }
    
    double Change(double MoneyPaid, double DrinkCost){
        if((MoneyPaid-DrinkCost) < 0 || (MoneyPaid-DrinkCost) > MoneyInCashBox)
            return -1;
        else{
            MoneyInCashBox = MoneyInCashBox - (MoneyPaid-DrinkCost) + DrinkCost;
            return (MoneyPaid-DrinkCost);
        }
    }
};

int main(){
    int DrinkChoice;
    Vending_Machine MyVendingMachine;
    
    cout << "Welcome to my wending Machine" << endl;
    while(1){
        DrinkChoice = MyVendingMachine.PrintMenu();
        MyVendingMachine.DispenseDrink(DrinkChoice);
    }
}