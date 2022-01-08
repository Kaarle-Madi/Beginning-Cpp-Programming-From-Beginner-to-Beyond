#include <iostream>

using namespace std;

int main()
{
    double small_room, large_room, sum_room, sum_room_tax;
    double total_cost_small, total_cost_large;
    const double price_small_room {25};
    const double price_large_room {35};
    double tax_rate {0.06};

    cout << "How many small room need to be clean? " << "\t";
    cin >> small_room;
    cout << "How many large room need to be clean? " << "\t";
    cin >> large_room;

    total_cost_small = small_room * price_small_room;
    total_cost_large = large_room * price_large_room;
    sum_room = (total_cost_small + total_cost_large);
    sum_room_tax = (total_cost_small + total_cost_large)*tax_rate;

    cout << "\tNumber of small room: " << small_room << endl;
    cout << "\tNumber of Large room: " << large_room << endl;

    cout << "\tPrice per small room $" << price_small_room << endl;
    cout << "\tPrice per large room $" << price_large_room << endl;

    cout << "\tCost: $" << sum_room << endl;
    cout << "\tTax: $" << sum_room_tax << endl;
    cout << "============================================================" << endl;
    cout << "\t" << "Total estimate: $" << sum_room + sum_room_tax << endl;
    cout << "\t" << "This estimate is valid for 30 days" << endl;

    return 0;
}
