#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of clients: ";
    cin >> N;

    int price;
    int basicCount = 0, styledCount = 0;
    int totalRevenue = 0;

    for(int i = 1; i <= N; i++) {
        cout << "Enter haircut price for client " << i << ": ";
        cin >> price;

        if(price < 400) {
            cout << "Basic Cut" << endl;
            basicCount++;
        } else {
            cout << "Styled Cut" << endl;
            styledCount++;
        }

        totalRevenue += price;
    }

    cout << "\nTotal Basic Cuts: " << basicCount << endl;
    cout << "Total Styled Cuts: " << styledCount << endl;
    cout << "Total Revenue: " << totalRevenue << endl;

    return 0;
}
