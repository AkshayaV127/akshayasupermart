#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;

void addProduct()
{
    string name, category;
    int price, quantity;

    cout << "\n===== Add Product =====\n";

    cout << "Enter Product Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Category: ";
    getline(cin, category);

    cout << "Enter Price: ";
    cin >> price;

    cout << "Enter Quantity: ";
    cin >> quantity;

    ofstream file("src/products.txt", ios::app);

    file << name << endl;
    file << category << endl;
    file << price << endl;
    file << quantity << endl;

    file.close();

    cout << "\nProduct added successfully!\n";
}

void viewProducts()
{
    ifstream file("src/products.txt");

    if (!file)
    {
        cout << "\nNo products available.\n";
        return;
    }

    string name, category;
    int price, quantity;
    int count = 1;

    cout << "\n===== Seller Products =====\n";

    while (getline(file, name))
    {
        getline(file, category);
        file >> price;
        file >> quantity;
        file.ignore();

        cout << "\nProduct " << count++ << endl;
        cout << "Name: " << name << endl;
        cout << "Category: " << category << endl;
        cout << "Price: Rs." << price << endl;
        cout << "Quantity: " << quantity << endl;
    }

    file.close();
}

void updateProduct()
{
    string searchName;
    string name, category;
    int price, quantity;
    bool found = false;

    cout << "\n===== Update Product =====\n";
    cout << "Enter Product Name: ";
    cin.ignore();
    getline(cin, searchName);

    ifstream file("src/products.txt");
    ofstream temp("src/temp.txt");

    while (getline(file, name))
    {
        getline(file, category);
        file >> price;
        file >> quantity;
        file.ignore();

        if (name == searchName)
        {
            found = true;

            cout << "Enter New Price: ";
            cin >> price;

            cout << "Enter New Quantity: ";
            cin >> quantity;
        }

        temp << name << endl;
        temp << category << endl;
        temp << price << endl;
        temp << quantity << endl;
    }

    file.close();
    temp.close();

    remove("src/products.txt");
    rename("src/temp.txt", "src/products.txt");

    if (found)
        cout << "\nProduct updated successfully!\n";
    else
        cout << "\nProduct not found.\n";
}

void deleteProduct()
{
    string searchName;
    string name, category;
    int price, quantity;
    bool found = false;

    cout << "\n===== Delete Product =====\n";
    cout << "Enter Product Name: ";
    cin.ignore();
    getline(cin, searchName);

    ifstream file("src/products.txt");
    ofstream temp("src/temp.txt");

    while (getline(file, name))
    {
        getline(file, category);
        file >> price;
        file >> quantity;
        file.ignore();

        if (name == searchName)
        {
            found = true;
            continue;
        }

        temp << name << endl;
        temp << category << endl;
        temp << price << endl;
        temp << quantity << endl;
    }

    file.close();
    temp.close();

    remove("src/products.txt");
    rename("src/temp.txt", "src/products.txt");

    if (found)
        cout << "\nProduct deleted successfully!\n";
    else
        cout << "\nProduct not found.\n";
}

void addToCart()
{
    string name = "Women's Dress";
    int price = 499;
    int quantity;

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

void viewCart()
{
    ifstream file("src/cart.txt");

    if (!file)
    {
        cout << "\nCart is empty.\n";
        return;
    }

    string name;
    int price, quantity;

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

void updateCart()
{
    ifstream file("src/cart.txt");

    if (!file)
    {
        cout << "\nCart is empty.\n";
        return;
    }

    string name;
    int price, quantity;

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
}

void removeCart()
{
    ifstream file("src/cart.txt");

    if (!file)
    {
        cout << "\nCart is already empty.\n";
        return;
    }

    file.close();

    remove("src/cart.txt");

    cout << "\nProduct removed from cart successfully!\n";
}

void checkout()
{
    ifstream file("src/cart.txt");

    if (!file)
    {
        cout << "\nCart is empty. Cannot checkout.\n";
        return;
    }

    string name;
    int price, quantity;

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

int main()
{
    int choice;

    cout << "===== AkshayaMart =====\n";
    cout << "1. Add Product\n";
    cout << "2. View Products\n";
    cout << "3. Update Product\n";
    cout << "4. Delete Product\n";
    cout << "5. Add Product to Cart\n";
    cout << "6. View Cart\n";
    cout << "7. Update Cart Quantity\n";
    cout << "8. Remove Product from Cart\n";
    cout << "9. Checkout\n";
    cout << "10. Exit\n";

    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
        addProduct();
    else if (choice == 2)
        viewProducts();
    else if (choice == 3)
        updateProduct();
    else if (choice == 4)
        deleteProduct();
    else if (choice == 5)
        addToCart();
    else if (choice == 6)
        viewCart();
    else if (choice == 7)
        updateCart();
    else if (choice == 8)
        removeCart();
    else if (choice == 9)
        checkout();
    else if (choice == 10)
        cout << "\nThank you for using AkshayaMart!\n";
    else
        cout << "\nInvalid Choice\n";

    return 0;
}