#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
class Stock{
public:
    string symbol,name;
    double previousClossingPrice,current_Price;
    Stock(string a,string b)
    {
        symbol=a;
        name=b;
    }
    void getChangePercent()
    {
        double change;
        change=current_Price-previousClossingPrice;
        int parcentag=(change*100)/previousClossingPrice;
        cout << "The parcentage change is:"<<parcentag<<" %"<<endl;
    }
    void getSymbol()
    {
        cout << "The symbol is:"<< symbol<<endl;
    }
    void getName()
    {
        cout << "The name is:"<<name<<endl;
    }
    double previousClosingPrice()
    {
                return previousClossingPrice;
    }
    double currentPrice()
    {
                return current_Price;
    }
};
int main()
{
    Stock st("MSFT","Microsoft Corporation");
    st.current_Price=27.6;
    st.previousClossingPrice=27.5;
    st.getName();
    st.getSymbol();
    double previous=st.previousClosingPrice();
    cout << "The previous price is:"<<previous<<endl;
    double current=st.currentPrice();
    cout << "The current price is:"<<current<<endl;
    st.getChangePercent();

}
