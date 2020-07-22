// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "head.h"

using namespace std;

int compareStr(string s1, string s2);
void connectStr();
int cuntPunct(string str);
void delPunct(string str);

int main()
{
    string s1, s2;
#if 0
    string word;
    while (cin >> word)
    {
        cout << word << endl;
    }


    string line;
    while (getline(cin, line))
    {
        cout << line << endl;
    }



    cout << "Input s1: " << endl;
    cin >> s1;

    cout << "Input s2: " << endl;
    cin >> s2;
    compareStr(s1, s2);


    //connectStr();

    //rang for
    string str = "kazusa";
    for (auto c : str)
    {
        cout << c << endl;
    }

    int punct = cuntPunct(str);
    cout << punct << endl;

    punct = cuntPunct("Hello World!");
    cout << punct << endl;
#endif
    const string str = "if words, could make ,wishes come true";
    delPunct("Hello, World!");
    delPunct(str);

    return 0;
}

int compareStr(string s1, string s2)
{
    if (s1 != s2)
    {
        if (s1 > s2)
        {
            cout << s1 << endl;
        }
        else
        {
            cout << s2 << endl;
        }
    }

    auto len1 = s1.size();
    auto len2 = s2.size();
    if (len1 != len2)
    {
        if (len1 > len2)
        {
            cout << s1 << endl;
        }
        else
        {
            cout << s2 << endl;
        }
    }
    
    return 0;
}

void connectStr()
{
    string conncetWord;
    string conWordSpace;

    string word;
    while (cin >> word)
    {
        conncetWord += word;
        conWordSpace = conWordSpace + word + " ";
    }

    cout << conncetWord << endl;
    cout << conWordSpace << endl;

}

int cuntPunct(string str)
{
    int punct = 0;
    for (auto c : str)
    {
        if (ispunct(c))
        {
            ++punct;
        }
    }

    return punct;
}

void delPunct(string str)
{
    decltype(str.size()) index = 0;
#if 0
    if (!str.empty())
    {
        while (index < str.size())
        {
            if (!ispunct(str[index]))
            {
                cout << str[index];
            }
            ++index;
        }
    }
#endif
    //index = 0;
    if (!str.empty())
    {
        for (index; index < str.size(); ++index)
        {
            if (ispunct(str[index]))
            {
                auto i = index;
                for (i; i < str.size(); ++i)
                {
                    str[i] = str[i + 1];
                }
            }
        }

        cout << str << endl;
    }
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
