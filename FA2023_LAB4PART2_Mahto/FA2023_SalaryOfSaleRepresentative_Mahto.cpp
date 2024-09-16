//FA2023_SalaryOfSaleRepresentative_Mahto.cpp 
#include <iostream> 
#include <string>
#include<iomanip>
using namespace std;
int main()
{
    //For current time
    char currentDate[10];
    _strdate_s(currentDate);
  
    //Declaring Variables
    string name, id;
    float sale_Amt, com_Amt, bon_Amt, Salary;
    float base_Salary = 2800;

    //Asking Input from keyboard
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your id: ";
    cin >> id;
    cout << "Enter your Sale Amount: ";
    cin >> sale_Amt;

    //Selection Structure
    if (sale_Amt == 0 || sale_Amt < 5000) {
        com_Amt = 0;
        bon_Amt = 0;
    }
    else if (sale_Amt >= 5000 && sale_Amt < 10000) {
        com_Amt = (1.59/100*sale_Amt);//To calulate commission amount
        bon_Amt = 0;

    }
    else if (sale_Amt >= 10000 && sale_Amt < 15000) {
        com_Amt = (2.39/100*sale_Amt);
        bon_Amt = (1.59/100*(sale_Amt-10000));//To calculate bonus amount
    }
    else {
        com_Amt = (3.19/100*sale_Amt);
        bon_Amt = (1.59/100*(sale_Amt-10000));
    }

    Salary = base_Salary + com_Amt + bon_Amt;//To calculate salary
    
    //Final Output
    cout << "File FA2023_SalaryOfSaleRepresentative_Mahto.cpp"<<endl;
    cout <<left<<setw(29)<< "FA2023 SALE COMPANY" << "-" <<right<<setw(18)<< "JAMES SMITH" << endl;
    cout << left << setw(29) << "Today: " << right << setw(19) << currentDate << endl;
    cout<< "-------------------------------------------------------------" << endl;
    cout << left << setw(29) << "Name of Sale Representative:" << right << setw(24) << name << endl;
    cout << left << setw(29) << "Employee Id:" << right << setw(24) << id << endl;
    cout << fixed << setprecision(2);//To put decimal value to 2
    cout << left << setw(29) << "Sale amount:" << right << setw(24) << sale_Amt << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << left << setw(29) << "Base Salary:" << right << setw(24) << base_Salary << endl;
    cout << left << setw(29) << "Commission Amount:" << right << setw(24) << com_Amt << endl;
    cout << left << setw(29) << "Bonus amount:" << right << setw(24) << bon_Amt << endl;
    cout << left << setw(29) << "Salary:" << right << setw(24) << Salary << endl;
    cout << "-------------------------------------------------------------" << endl;

        system("pause"); //This will pause the output to read
    return 0;
}
