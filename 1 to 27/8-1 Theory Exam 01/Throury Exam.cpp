#include<bits/stdc++.h>
using namespace std;

class Restaurant
{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    float total_tax;




public:
    Restaurant(int codes[], string names[], int prices[])
    {
        for(int i = 0; i < 12; i++)
        {
            food_item_codes[i] = codes[i];
            food_item_names[i] = names[i];
            food_item_prices[i] = prices[i];
            total_tax = 0;
        }
    }
};

Restaurant *assign_value(int n)
{
    //cout<<"Take input of all food"<<endl;
    int code[n], price[n];
    string name[n];
    char ch;
    for(int i = 0; i < n; i++)
    {
        cin>>code[i];
        cin.ignore();
        getline(cin,(name[i]));
        cin>>price[i];
    }


    Restaurant *restaurent = new Restaurant(code, name, price);
    return restaurent;
}

void take_input_form_customer(Restaurant *restaurant)
{
    int table_number, num_of_item;
    cout<<"Enter the number of table :";
    cin>>table_number;
    cout<<"Enter the number of item : ";
    cin>>num_of_item;
    int code[num_of_item], quantity[num_of_item];


    for(int j = 0; j < num_of_item; j++)
    {

        cout<<"Enter Item "<<j+1<<" code : ";
        cin>>code[j];
        cout<<"Enter Item "<<j+1<<" quantity : ";
        cin>>quantity[j];


    }


    cout<<endl<<endl;
    cout<<"\t\t\t\t\t"<< "Bill summary"<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<< "____________"<<"\t\t\t\t\t"<<endl;
    cout<<"Table No :"<<table_number<<endl;
    cout<<"Item cod \t\tItem name \t\t\t\tItem price \t\tItem quantity \t\tTotal price"<<endl;
    float tax = 0;
    float total = 0;
    for(int i = 0; i < num_of_item; i++)
    {
        int cod = code[i];
        int total_price[num_of_item] = {0};

        for(int j = 0; j<12; j++)
        {

            if(cod == restaurant->food_item_codes[j])
            {
                int indx = j;
                total_price[i] = restaurant->food_item_prices[j]*quantity[i];
                cout<<restaurant->food_item_codes[indx];
                cout<<" \t\t\t"<<restaurant->food_item_names[indx];
                cout<<" \t\t\t"<<restaurant->food_item_prices[indx];
                cout<<" \t\t\t"<<quantity[i];
                cout<<" \t\t\t"<<total_price[i]<<endl;
                tax +=restaurant->total_tax =(float(total_price[i])/100*5);
                //restaurant->total_tax =(float(total_price[i])/100*5);
                total +=float(total_price[i])+restaurant->total_tax;

            }


        }

        cod = 0;

    }
    cout<<"TAX"<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
    cout<<tax<<endl;
    cout<<"_________________________________________________________________________________________________________________________"<<endl;
    cout<<"Total"<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
    cout<<total<<" Taka"<<endl;

}


int main()
{
    int n;
    cin>>n;

    Restaurant *restaurant;


    restaurant = assign_value(n);
    cout<<endl<<endl;
    cout<<"\t\t\t\t MAKE BILL \t\t\t"<<endl;
    cout<<"\t\t\t\t _________ \t\t\t"<<endl;
    cout<<endl<<endl;
    cout<<"Item Code\t \tItrm Name\t\t\t\tItem price";
    cout<<endl<<endl;


    for(int j = 0; j < n; j++)
    {
        cout<<restaurant->food_item_codes[j]<<"\t\t\t";
        cout<<restaurant->food_item_names[j]<<"\t\t\t";
        cout<<restaurant->food_item_prices[j]<<"\t\t\t";
        cout<<endl;
    }

    cout<<endl<<endl;
Flag:
    take_input_form_customer(restaurant);
    goto Flag;



    return 0;
}
