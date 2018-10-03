#include <iostream>
using namespace std;
class Order{
    private:
        static double minimumCharge;
        int tableNum;
        string serversName;
        int numOfPatrons;
    public:
        void getTableNum(int);
        void getNumOfPatrons(int);
        void getServersName(string);
        int displayTableNum();
        string displayServersName();
        int displayNumOfPatrons();
        double returnMinimumCharge();
        static void displayMinimumCharge();
};


double Order::minimumCharge = 4.75;


void Order::getTableNum(int num){
    tableNum = num;
}
void Order::getNumOfPatrons(int numPt){
    numOfPatrons = numPt;
}
void Order::getServersName(string name){
    serversName = name;
}
int Order::displayNumOfPatrons(){
    return numOfPatrons;
}
int Order::displayTableNum(){
    return tableNum;
}
string Order::displayServersName(){
    return serversName;
}
double Order::returnMinimumCharge(){
    return minimumCharge;
}
void Order::displayMinimumCharge(){
    cout << "Minimum charge: " << minimumCharge;
}
int main(void){

    Order::displayMinimumCharge();
    return 0;
}
