#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    string n, arr[] = {"keo", "bua", "bao"};
    int size = sizeof(arr) / sizeof(arr[0]);
    int mang = 0;
    srand(time(0));
    cout << "Chao mung den voi game" << endl << "\"keo bua bao\" " << endl;
    system("pause");
    while (mang < size){
        system("cls");
        int random = rand() % size;
        string bot = arr[random];
        cout << "Player: ";
        cin >> n;
        cout << "ban: " << n ;
        cout << " = bot: " << bot << endl;
        if(n == bot){
            cout << "draw" << endl;
        }
        else if((n == "keo" && bot == "bao") || (n == "bua" && bot == "keo") || (n == "bao" && bot == "bua")){
            cout << "You Win" << endl;
            mang++;
        }
        else if((n == "keo" || n == "bua" || n == "bao")){
            cout << "Game Over" << endl;
        }
        else {
            cout << "=> Nhap sai tu khoa!" << endl;
        }
        system("pause");
    }
}