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
void factorial(int N){
    vector<int> result = {1};
    for (int i = 2; i <= N; i++) {
        multiply(result, i);
    }
    for (auto it = result.rbegin(); it != result.rend(); ++it) {
        cout << *it;
    }
    cout << endl;
}

int main(){
    int N;
    cout << "Iteratif ";
    cin >> N;
    cout << "Faktorial dari " << N << " adalah: ";
    factorial(N);
}
