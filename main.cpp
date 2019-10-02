#include <iostream>
#include <stdlib.h>

using namespace std;

void withdrawMoney(int money) {
    int fifty_bucks;
    int twenty_bucks;

    fifty_bucks = money / 50;
    twenty_bucks = (money - fifty_bucks * 50) / 20;

    if ((fifty_bucks * 50) + (twenty_bucks * 20) != money) {
        fifty_bucks = 1;
        twenty_bucks = 0;

        while ((fifty_bucks * 50) + (twenty_bucks * 20) != money) {
            twenty_bucks++;
        }
    }

    cout << endl;
    cout << "Take " << fifty_bucks << " fifty bucks and " << twenty_bucks << " twenty bucks." << endl;
}

int main() {
    cout << "Enter the amount you want to withdraw (10$ and 30$ as well as numbers ending with 5 are invalid): ";

    int user_money;
    cin >> user_money;

    if (user_money % 10 == 5 || user_money == 10 || user_money == 30 || user_money < 10) {
        system("cls");
        cout << "Invalid input. Please enter a valid amount: " << endl;
        main();

    } else {
        withdrawMoney(user_money);
    }

    return 0;
}
