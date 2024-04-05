#include <bits/stdc++.h>
using namespace std;
string numberToString(int n){
    int a = n / 10;
    int b = n % 10;
    if(a == 0){
        switch(b){
            case 1:
                return "one";
            case 2:
                return "two";
            case 3:
                return "three";
            case 4:
                return "four";
            case 5:
                return "five";
            case 6:
                return "six";
            case 7:
                return "seven";
            case 8:
                return "eight";
            case 9:
                return "nine";
        }
    }
    else if(a == 1){
        switch(b){
            case 0:
                return "ten";
            case 1:
                return "eleven";
            case 2:
                return "twelve";
            case 3:
                return "thirteen";
            case 4:
                return "fourteen";
            case 5:
                return "fifteen";
            case 6:
                return "sixteen";
            case 7:
                return "seventeen";
            case 8:
                return "eightteen";
            case 9:
                return "nineteen";
        }
    }
    else if(b == 0){
        switch(a){
            case 2:
                return "twenty";
            case 3:
                return "thirty";
            case 4:
                return "fourty";
            case 5:
                return "fifty";
        }
    }
    else{
        string ans = "";
        ans += (numberToString(n - n % 10) + " " + numberToString(n % 10));
        return ans;
    }
}
int main(){
    int h, m;
    cin >> h >> m;
    string ans = "";
    string a = numberToString(h);
    string b = numberToString(m);
    if(m == 0){
        ans += (a + " o' clock");
        cout << ans << "\n";
    }
    else if(m <= 30){
        if(m == 30){
            ans += "half past " + a;
        }
        else if(m == 15){
            ans += "quarter past " + a;
        }
        else{
            ans += b + " minutes past " + a;
        }
        cout << ans << "\n";
    }
    else{
        if(m == 45){
            ans += "quarter to " + numberToString(h + 1);
        }
        else{
            ans += numberToString(60 - m) + " to " + numberToString(h + 1);
        }
        cout << ans << "\n";
    }
    return 0;
}