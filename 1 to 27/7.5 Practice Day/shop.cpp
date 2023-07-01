#include<bits/stdc++.h>
using namespace std;
class Shop{
public:
    string product_name;
    int product_price;
    int product_quantity;

private:
    int total_income;

public:
    Shop(int q){
        product_name = new string[q];
        product_price = new int[q];
        product_quantity = new int[q];
    }

};

void set_product(Shop *shop_product){
    string name;
    int price, quantity;
    cin<<name<<price<<quantity;
    shop_product->product_name = name;
    shop_product->product_price = price;
    shop_product->product_quantity = quantity;
}


int main(){


 return 0;
}
