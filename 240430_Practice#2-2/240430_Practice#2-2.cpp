#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string input1;
    std::string input2;

    std::cout << "�Է� �޽��ϴ�  ";
    std::cin >> input1;

    bool find_word = false;         //���ڴ� ���� �Ŷ�� �����ϰ� ����
    bool find_word2 = false;
    for (char it_1 : input1)
    {
        if (isdigit(it_1) == 0) //
        {

            find_word = true;     // ���ڰ� �߰ߵƴٴ� �ñ׳�

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




    //�ι�° �Է�


    cout << "�Է� �޽��ϴ�  ";
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


    // �Է¹��� ���� �� �� ���ڶ��

    if ((find_word == 0) && (find_word2 == 0))
    {
        cout << input1 + input2 << endl;  // �� ���ڸ� �̾� ����
                                          // input1.append(input2)�� ���� input1 ��ü�� �ٲ�� �Ŷ� ���Ŀ� input1�� �ƿ� �޶��������� ������
                                          // string�� ��Ģ������ �����ϱ� ������ '+'�ϸ� ������ ������ �ʰ� �̾� �� �� ����. 

        int result1 = stoi(input1);
        int result2 = stoi(input2);

        int result = result1 + result2;         // �� ���ڸ� string(���ڿ�)���� int(������)���� �ڷ����� ��ȯ�ؼ� �����ش�.

        cout << result << endl;
    }


}