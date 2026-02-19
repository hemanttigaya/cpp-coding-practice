while loop

1. Write a C++ program to print the multiplication table of a given number using a while loop.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
 
     int i=1;
    while(i<=10){
        cout<<" "<<n<<"*"<<" "<<i<<"="<<n*i<<endl;
        i++;
    }
}
3.Write a C++ program to count the total number of digits in a number using a while loop.

#include<iostream>
using namespace std;
int main(){
    int number,count =0;
    cout<<"enter the number:";
    cin>>number;
 
    if(number == 0){
        count =1;
    }else{
        while(number !=0){
            number =number/10;
            count++;
        }
    }
    cout<<"total digits:"<<count;
}

4.Write a C++ program using a while loop to find the factorial of a given number.

#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the number:";
    cin>>number;
        long long factorial =1;

    int i =1;
    while(i<=number){
    factorial = factorial*i;
    i++;
}
cout<<"factorial number :"<<factorial;
  result 0;
}
5.Write a C++ program using a while loop to find the factorial of a given number.

#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the number:";
    cin>>number;
        long long factorial =1;

    int i =1;
    while(i<=number){
    factorial = factorial*i;
    i++;
}
cout<<"factorial number :"<<factorial;
 
}
7.Write a C++ program to check whether a given number is a palindrome using a while loop.

#include<iostream>
using namespace std;
int main(){
    int number,remender,original;
    int reverse=0;
    cout<<"enter the number:";
    cin>>number;
 
    original =number;
    while(number!=0){
        remender = number%10;
        reverse=reverse*10+remender;
        number=number/10;
 
    }
    if(original == reverse){
        cout<<"it is palndorme number";
    }
    else{
        cout<<"not palndorme number";
    }
}





8.Write a C++ program using a while loop to reverse the digits of a number.


#include<iostream>
using namespace std;
int main(){
    int number,remender;
    int reverse=0;
    cout<<"enter the number:";
    cin>>number;
    while(number!=0){
        remender = number%10; //get last digit
        reverse = reverse*10+remender;
        number = number/10; //remove last digit
    }
    cout<<"reverse number:"<<reverse;
}

9.Write a C++ program to count how many even and odd digits are present in a number using a while loop.
#include<iostream>
using namespace std;
int main(){
    int number, evennumber=0,oddnumber=0;
    cout<<"enter the number:";
    cin>>number;
    while(number!=0){
        int digit = number%10;
        if(digit%2==0){
            evennumber++;
        }else{
            oddnumber++;
        }
        number=number/10;
 
    }
    cout<<"evennumber:"<<evennumber<<endl;
    cout<<"oddnumber:"<<oddnumber;
}
10.Write a C++ program usin### 🧮 *Question 12: Sum of Even Numbers Between 1 and 50*
#include<iostream>
using namespace std;
int main(){
    int number,sum=0;
    number=1;
    while(number<=50){
        if(number%2==0){
            sum=sum+number;
        }
        number++;
 
    }
    cout<<"sum of even number 1to50  is:"<<sum;
}

11.Write a C++ program to print the square of each number from 1 to 10 using a while loop.

#include<iostream>
using namespace std ;
int main(){
    int number,square;
    number=1;
    while(number<=10){
        square = number*number;
        cout<<"square of"<<number<<"is:"<<square<<endl;
        number++;
 
    }
}

12.Write a C++ program to print all odd numbers from 1 to a given number N using a while loop.

#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"enter the number:";
    cin>>N;
 
    int number=1;
    while(number<=N){
        if(number%2 !=0){
            cout<<"number is"<<number<<endl;
        }
        number++;
    }
}

13.Write a C++ program using a while loop to calculate the power of a number (base^exponent).

#include<iostream>
using namespace std;
int main(){
    int base,exponent;
    long long power =1;
 
    cout<<"enter the base:";
    cin>>base;
 
    cout<<"enter the number:";
    cin>>exponent;
 
    int count = 1;
    while(count<=exponent){
        power=power*base;
        count++;
    }
    cout<<"result:"<<power;
}

14.Write a C++ program using a while loop to check whether a number is an Armstrong number or not.

#include<iostream>
using namespace std;
int main(){
    int number,tempnumber,sum=0;
    int remainder;
    cout<<"enter the number:";
    cin>>number;
 
    tempnumber = number;
    while(number !=0){
        remainder = number%10; //get last digit
        sum=sum+(remainder*remainder*remainder);
        number =number/10;
 
    }
    if(tempnumber == sum){
        cout<<"it is amstrong number";
    }else{
        cout<<"it is not amstrong number";
    }
}
15.Write a C++ program using a while loop to find the greatest (largest) digit in a given number.

#include<iostream>
using namespace std;
int main(){
    int number,largest=0;
    int remainder;
    cout<<"enter the number:";
    cin>>number;
    //make in case user take nagitive
    if(number<0){
        number=-number;
        }
        while(number!=0){
            remainder =number%10; //get last digit
            if(remainder>largest){
                largest = remainder;
            }
         number =number/10;//remove last digit

        }
        cout<<"the largest number is:"<<largest;
}
16.Write a C++ program using a while loop to find the smallest digit in a given number.
#include<iostream>
using namespace std;
int main(){
    int number,smallest=9;
    int remainder;
    cout<<"enter the number:";
    cin>>number;
    //make in case user put negitive number
 
    if(number<0){
        number = -number;
    }
    while(number!=0){
        remainder=number%10; //get last digit
        if(remainder<smallest){
            smallest = remainder;
        }
            number= number/10;//remove last digit
    }
    cout<<"smallest number is:"<<smallest;
 
}
17.Write a C++ program using a while loop to take N numbers from the user and count how many are positive and how many are negative.

#include<iostream>
using namespace std;
int main(){
    int N,positive=0,nagitive=0;
    cout<<"enter the numeber:";
    cin>>N;
 
    int number=-N;
    while(number<=N){
        if(number>0){
            positive++;
        }else if (number<0){
            nagitive++;
        }
        number++;
 
    }
    cout<<"total positive number is:"<<positive<<endl;
    cout<<"total nagitive number is:"<<nagitive;
}
18.Write a C++ program using a while loop to print even numbers from 20 to 2 in reverse order.

#include<iostream>
using namespace std;
int main(){
    int number;
 
    number=20;
    while(number>=2){
        if(number%2==0){
            cout<<" "<<number;
        }
        number--;
    }
}
19.Write a C program using a while loop to check whether a given number is a prime number.


#include<iostream>
using namespace std;
int main(){
    int number,i=2;
    cout<<"enter the number:";
    cin>>number;
 
    if(number<=1){
        cout<<"not prime";
    }
    while(i<number){
        if(number%i==0){
            cout<<"not prime";
            return 0;
        }
        i++;
    }
    cout<<"prime";
}

20.Write a C program that keeps asking for a number (1–7) and prints the day name (1=Monday, 2=Tuesday, etc.) using a while loop until the user enters 0 to stop.

#include<iostream>
using namespace std;
int main(){
    int number =-1;
    while(number !=0){
 
        cout<<"enter the number (1to7):";
        cin>>number;
        if(number == 1){
            cout<<"monday\n";
        }
        else if (number == 2){
            cout<<"tuesday\n";
        }
        else if (number == 3){
            cout<<"wednesday\n";
        }
        else if(number == 4){
            cout<<"thusday\n";
        }
        else if (number == 5){
            cout<<"friday\n";
        }
        else if(number == 6){
            cout<<"saturday\n";
        }
        else if(number== 7){
            cout<<"sunday\n";
        }
        else if(number == 0){
            cout<<"program stop\n";
        }
        else {
            cout<<"invalid";
        }
    }
}
21.Write a C program using a while loop to simulate an ATM — ask for withdrawal amounts until balance becomes less than the withdrawal amount.

#include<iostream>
using namespace std ;
int main(){
    double balance = 1000.0;
    double windrwal;
    while(true){
        cout<<"enter the windrwal amount:";
        cin>>windrwal;
        if(windrwal > balance){
            cout<<"In sufficent amount";
            break;
            
        }else if(windrwal<1){
            cout<<"the amount in invalid";
            break;
        }
        else {
        balance = balance - windrwal;
        cout<<"remaing balance :"<<balance<<endl;
    }
return 0;
}
}