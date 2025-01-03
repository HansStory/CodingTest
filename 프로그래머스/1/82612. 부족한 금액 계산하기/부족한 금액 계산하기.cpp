using namespace std;

long long getTotalPrice(int price, int count) {
    long long totalPrice = 0;
    for(int i = 1; i <= count; i ++)
    {
        totalPrice += price * i;
    }
    return totalPrice;
}

long long solution(int price, int money, int count)
{
    long long answer = money - getTotalPrice(price, count);

    return answer <0 ? -answer : 0;
}