#include <iostream>
using namespace std;

int count = 0;

class Store
{
public:
    string Name;
    int Quantity{0};
    int Price{0};
    int Code{0};
    void addProduct(string name, int quantity, int price, int code);
    void print();
    void updatePrice(string name, int code, int new_price);
    void updateQuantity(string name, int code, int new_quantity);
    void removeProduct(string name, int code);
};

void Store::addProduct(string name, int quantity, int price, int code)
{
    Name = name;
    Quantity = quantity;
    Price = price;
    Code = code;
}

void Store::print()
{
    cout << Name << " , Quantity = " << Quantity << "  , Price = " << Price << endl;
}
void Store::updatePrice(string name, int code, int new_price)
{
    if (name == Name && code == Code)
    {
        Price = new_price;
    }
}

void Store::updateQuantity(string name, int code, int new_quantity)
{
    if (name == Name && code == Code)
    {
        Quantity = new_quantity;
    }
}

void Store::removeProduct(string name, int code)
{
    Name = "NULL";
    Code = 0;
    Price = 0;
    Quantity = 0;
}

int main()
{
    Store *s = new Store[100];
    string n;
    int q, p, c, choice;
    int count = 0;

    int co, pri;
    string pro;

    for (int j = 0; j < 1;)
    {
        cout << "\nSelect what you want to do: " << endl;
        cout << "1. To enter product" << endl;
        cout << "2. To update price of a product" << endl;
        cout << "3. To update quantity of a product" << endl;
        cout << "4. To display all the products" << endl;
        cout << "5. To remove a product." << endl;
        cout << "6. To exit program" << endl;
        cin >> choice;

        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "Enter the values" << endl;
            cout << "Enter the product name: " << endl;
            cin >> n;
            cout << "Enter the product quantity: " << endl;
            cin >> q;
            cout << "Enter the product price: " << endl;
            cin >> p;
            cout << "Enter product code: " << endl;
            cin >> c;
            cout << endl;
            s[count].addProduct(n, q, p, c);
            count += 1;
            break;

        case 2:

            cout << "Enter the product name: ";
            cin >> pro;
            cout << "Enter the product code: ";
            cin >> co;
            cout << "Enter the product new price: ";
            cin >> pri;

            for (int i = 0; i < count; i++)
            {
                s[i].updatePrice(pro, co, pri);
            }
            break;

        case 3:
            cout << "Enter the product name: ";
            cin >> pro;
            cout << "Enter the product code: ";
            cin >> co;
            cout << "Enter the product new quantity: ";
            cin >> pri;

            for (int i = 0; i < count; i++)
            {
                s[i].updateQuantity(pro, co, pri);
            }
            break;

        case 4:
            for (int i = 0; i < count; i++)
            {
                s[i].print();
            }
            break;

        case 5:
            cout << "Enter the product name: ";
            cin >> pro;
            cout << "Enter the product code: ";
            cin >> co;
            for (int i = 0; i < count; i++)
            {
                s[i].removeProduct(pro, co);
            }
            break;

        default:
            j = 1;
            cout << "Exiting the program ......." << endl;
            break;
        }
    }
}
