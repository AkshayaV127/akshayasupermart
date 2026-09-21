#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int choice;
    string name;
    int price;
    int quantity;

    cout << "===== AkshayaMart =====\n";
    cout << "1. Add Product to Cart\n";
    cout << "2. View Cart\n";
    cout << "3. Update Quantity\n";
    cout << "4. Remove Product\n";
    cout << "5. Checkout\n";
    cout << "6. Exit\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        name = "Women's Dress";
        price = 499;

        cout << "\nProduct: " << name << endl;
        cout << "Price: Rs." << price << endl;

        cout << "Enter Quantity: ";
        cin >> quantity;

        ofstream file("src/cart.txt");
        file << name << endl;
        file << price << endl;
        file << quantity << endl;
        file.close();

        cout << "\nProduct added to cart successfully!\n";
    }
    else if (choice == 2)
    {
        ifstream file("src/cart.txt");

        if (!file)
        {
            cout << "\nCart is empty.\n";
        }
        else
        {
            getline(file, name);
            file >> price;
            file >> quantity;
            file.close();

            cout << "\n===== My Cart =====\n";
            cout << "Product: " << name << endl;
            cout << "Price: Rs." << price << endl;
            cout << "Quantity: " << quantity << endl;
            cout << "Total: Rs." << price * quantity << endl;
        }
    }
    else if (choice == 3)
    {
        ifstream file("src/cart.txt");

        if (!file)
        {
            cout << "\nCart is empty.\n";
        }
        else
        {
            getline(file, name);
            file >> price;
            file >> quantity;
            file.close();

            cout << "\nCurrent Quantity: " << quantity << endl;
            cout << "Enter New Quantity: ";
            cin >> quantity;

            ofstream update("src/cart.txt");
            update << name << endl;
            update << price << endl;
            update << quantity << endl;
            update.close();

            cout << "\nQuantity updated successfully!\n";
            cout << "New Total: Rs." << price * quantity << endl;
        }
    }
    else if (choice == 4)
    {
        ifstream file("src/cart.txt");

        if (!file)
        {
            cout << "\nCart is already empty.\n";
        }
        else
        {
            file.close();
            remove("src/cart.txt");

            cout << "\nProduct removed from cart successfully!\n";
        }
    }
    else if (choice == 5)
    {
        ifstream file("src/cart.txt");

        if (!file)
        {
            cout << "\nCart is empty. Cannot checkout.\n";
        }
        else
        {
            getline(file, name);
            file >> price;
            file >> quantity;
            file.close();

            int total = price * quantity;
            int paymentChoice;

            cout << "\n===== Checkout =====\n";
            cout << "Product: " << name << endl;
            cout << "Quantity: " << quantity << endl;
            cout << "Total Amount: Rs." << total << endl;

            cout << "\nSelect Payment Method\n";
            cout << "1. Cash on Delivery\n";
            cout << "2. UPI\n";
            cout << "3. Card\n";
            cout << "Enter choice: ";
            cin >> paymentChoice;

            if (paymentChoice >= 1 && paymentChoice <= 3)
            {
                cout << "\nPayment Successful!\n";
                cout << "Order Placed Successfully!\n";
                cout << "Order Amount: Rs." << total << endl;
                cout << "Thank you for shopping with AkshayaMart!\n";

                remove("src/cart.txt");
            }
            else
            {
                cout << "\nInvalid Payment Choice\n";
            }
        }
    }
    else if (choice == 6)
    {
        cout << "\nThank you for using AkshayaMart!\n";
    }
    else
    {
        cout << "\nInvalid Choice\n";
    }

    return 0;
}