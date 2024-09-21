#include<iostream>
#include<string.h>
using namespace std;

class Medicine
{
    private:
    char tradeName[30];
    char genericName[30];
    double unitPrice = 0;
    double discountPercentage = 5;

    public:
        void assignName(char tdN[] , char gN[])
        {
            strcpy(tradeName, tdN);
            strcpy(genericName, gN);
        }

        void assignPrice(double price)
        {
            unitPrice = price;
        }

        void setDiscountPercent(double percent)
        {
            if(percent >= 0 && percent <= 30)
                discountPercentage = percent;
        }

        double getSellingPrice()
        {
            double sellingPrice = unitPrice - (unitPrice * discountPercentage / 100);
            return sellingPrice;
        }

        double getSellingPrice(int num_of_units)
        {
            double sellingPrice = num_of_units * (unitPrice - (unitPrice * discountPercentage / 100));
            return sellingPrice;
        }

        void display()
        {
            cout << "MRP. of " << tradeName <<" (" << genericName << ") " << "is BDT " << unitPrice << ". Current discount " << discountPercentage << "%. " << "Selling price BDT " << getSellingPrice() << endl;
        }
};

int main()
{
    Medicine med1;
    med1.assignName("Napa", "Paracetamol");
    med1.assignPrice(1.00);
    med1.setDiscountPercent(10);
    med1.display();
}
