// This is the application of binary Search and expansion of code to find square root of x using binary search
#include<iostream>
using namespace std;
//Use long long int to avoid overflow of int datatype
    long long int sqrtInteger(int n){
        
        int start = 0;
        int end = n;
        long long int mid = start + (end - start)/2;
        
        long long int ans = -1;
        
        while(start <= end){
            long long int square = mid * mid;
            
            if(square == n){
                return mid;
            }
            
            //if the square is smaller than n then it could be the ans, so store otherwise it will be the nearest square root integer.
            else if(square < n){
                ans = mid;
                start = mid + 1;
            }
            
            //if the square is greater move to left part
            else{
                end = mid - 1;
            }
            
            mid = start + (end-start)/2;
        }
        return ans;
        
    }

    //The extension to integer square root problem to find square root with more precision.
    //The idea is keep on adding the factor of 0.1 , 0.01 ,0.001 to nearest perfect square root(i.e the sqrtInteger value)  till the square of the these numbers is less than the given integer.
    double morePrecisison(int n , int precision, int tempsol){
        double factor = 1;
        double ans = tempsol;

        for(int i=0 ; i<precision ; i++){
            factor = factor / 10;
            for(double j=ans ; j*j<n ; j=j+factor){
                ans = j;
            }
        }
        return ans;

    }
    

    int main() {
        int n;
        cout<<"Enter the number to find square root: ";
        cin>>n;

        int tempSol = sqrtInteger(n);
        cout<<morePrecisison(n, 3, tempSol);

        return 0;
    }