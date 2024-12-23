#include <iostream>
#include <vector>
using namespace std;


void multiply(vector<int>& result, int x){
    int carry = 0;
    for (int i = 0; i < result.size(); i++) {
        int product = result[i] * x + carry;
        result[i] = product % 10;
        carry = product / 10;
    }
    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
}
void factorialRekursif(int N, vector<int>& result) {
    if (N <= 1) {
        return;
    }
    factorialRekursif(N - 1, result);
    multiply(result, N);
}
void factorial(int N){
    vector<int> result;
    result.push_back(1);
    factorialRekursif(N, result);
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;
}
int main(){
    int N;
    cout << "Rekursif ";
    cin >> N;
    cout << "Faktorial dari " << N << " adalah: ";
    factorial(N);
}
