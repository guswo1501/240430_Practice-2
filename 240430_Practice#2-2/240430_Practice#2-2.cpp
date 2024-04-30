#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string input1;
    std::string input2;

    std::cout << "입력 받습니다  ";
    std::cin >> input1;

    bool find_word = false;         //문자는 없을 거라고 상정하고 시작
    bool find_word2 = false;
    for (char it_1 : input1)
    {
        if (isdigit(it_1) == 0) //
        {

            find_word = true;     // 문자가 발견됐다는 시그널

        }
    }

    if (find_word == 0)
    {
        cout << "YES" << endl;
    }

    if (find_word != 0)
    {
        std::cout << "NO" << std::endl;
    }




    //두번째 입력


    cout << "입력 받습니다  ";
    cin >> input2;

    for (char it_2 : input2)
    {
        if (isdigit(it_2) == 0)
        {
            find_word = true;
        }
    }

    if (find_word2 == 0)
    {
        cout << "YES" << endl;
    }

    if (find_word2 != 0)
    {
        std::cout << "NO" << std::endl;
    }


    // 입력받은 값이 둘 다 숫자라면

    if ((find_word == 0) && (find_word2 == 0))
    {
        cout << input1 + input2 << endl;  // 두 숫자를 이어 쓰고
                                          // input1.append(input2)를 쓰면 input1 자체가 바뀌는 거라서 이후에 input1이 아예 달라져버리기 때문에
                                          // string은 사칙연산이 가능하기 때문에 '+'하면 변수가 변하지 않고 이어 쓸 수 있음. 

        int result1 = stoi(input1);
        int result2 = stoi(input2);

        int result = result1 + result2;         // 두 숫자를 string(문자열)에서 int(정수형)으로 자료형을 변환해서 더해준다.

        cout << result << endl;
    }


}