#include <iostream> 

int binarySearch(int ar[], int l, int r, int x) 
{ 
	if (r >= l) { 
		int mid = l + (r - l) / 2; 

		if (ar[mid] == x) 
			return mid; 

		if (ar[mid] > x) 
			return binarySearch(ar, l, mid - 1, x); 

		return binarySearch(ar, mid + 1, r, x); 
	} 

	return -1; 
} 

int main() 
{
	int x; 
	int ar[] = { 3, 5, 7, 8, 10 }; 
	std::cin>>x; 
	int n = 5; 
	int result = binarySearch(ar, 0, n - 1, x); 
	if(result == -1){
        std::cout << "Element is not present in array";
    }
		else{ 
            std::cout << "Element is present at index " << result; 
            }	
    return 0; 
} 
