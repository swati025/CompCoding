
#include <iostream>
#include<string>

using namespace std;
int retval();
int func();

//int main() 
//{
//    int test;
//    cin>>test;
//    for(int i = 0; i< test; i++)
//    {
//        cout<<func()<<endl;
//    }
//
//}

int func()
{
	int arr[55], k = 12, len = 1, n = 0, i = 1;
	while (len <= 8)
	{ 
		int temp = k;
		while (n < 6)
		{
			arr[i] = temp;
			--temp;
			n++;
			i++;
		}
		n = 0;
		k = k + 12;
		i = (len * 12) + 1;
	}
	return 0;
}

int retval()
{
    string str1, str2;
    int count = 0, result;
	cin >> str1;
    cin >> str2;
    for(int i = 0;i < str1.length(); i++)
    {
        for(int j = 0; j < str2.length(); j++)
     {
         if(str1[i] == str2[j])
             count++;
     }
    }
     result = (str1.length()+str2.length()+ 2)-(count * 2);
     cout <<result<<endl;

    return result;
}