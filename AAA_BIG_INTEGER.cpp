#include<iostream>
#include<string>
using namespace std;
int main()
{
    string num1, num2, result;

    getline(cin,num1);
    getline(cin,num2);

    if (num1.size()<num2.size()){
        num1.swap(num2);
    }

    int len = num2.size()-1;
    int carry =0;

    for(int i= num1.size()-1;i>=0;i--){
        if(len>=0){
          int a = num1[i]-'0';
          int b= num2[len]-'0';

          int ans =a+b+carry;

          if (ans>=10){
            char ch = (ans%10)+'0';
            result.push_back(ch);
            carry = 1;
          }
          else{
            char ch= ans+'0';
            result.push_back(ch);
            carry =0;
          }


          len--;
        }
        else{
            int x = num1[i]-'0';
            int ans= x+carry;

          if (ans>=10){
            char ch = (ans%10)+'0';
            result.push_back(ch);
            carry = 1;
          }
          else{
            char ch= ans+'0';
            result.push_back(ch);
            carry =0;
            }
          }

        }


        if(carry==1)
        {
            result.push_back(char(carry)+'0');
        }
        for(int i=result.size()-1;i>=0;i--){
            cout<<result[i];
        }



    return 0;
}
