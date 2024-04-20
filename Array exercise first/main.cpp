#include <iostream>
#include <iomanip>
#include <map>


/* Given 2 arrays, create a function that let's a user know (true/false) whether these two arrays contain any common items
For Example:
const array1 = ['a', 'b', 'c', 'x'];
const array2 = ['z', 'y', 'i'];
should return false.
-----------
const array1 = ['a', 'b', 'c', 'x'];
const array2 = ['z', 'y', 'x'];
should return true.

2 parameters - arrays - no size limit
return true or false  */




bool compare(char* Arr, char* Arr2,unsigned size_uno, unsigned size_dos) {
	
	for (size_t i = 0; i < size_uno; i++) {
		for (size_t j = 0; j < size_dos; j++) {
			if (Arr[i] == Arr2[j]) {
				return true;
			}

		}

	}
	return false;
}
bool compare_fast(char* Arr, char* Arr2, unsigned size_uno, unsigned size_dos) {

	std::map<char, bool> Revision;

	for (size_t i = 0; i < size_uno; i++) {

		Revision[Arr[i]] = true;
		
	}

	for (size_t i = 0; i < size_dos; i++) {


		if (Revision.find(Arr2[i]) != Revision.end())
			return true;
	}
	return false;
	



}

//Este su time complexity es O (Arr1*Arr2)
int main(){
	
	char array1[] = { 'a', 'b', 'c', 'x' };
	char array2[] = { 'z', 'y', 'a'};
	unsigned a = sizeof(array1) / sizeof(array1[0]);
	unsigned b = sizeof(array2) / sizeof(array2[0]);
	std::cout << std::boolalpha;
	std::cout<<compare_fast(array1, array2,a,b);





	return 0;
}