#include<iostream>


template <typename T>

bool ordered(const T* arr, size_t arrSize) {

	for (size_t i = 0; i < arrSize-1; i++){
		if (arr[i] > arr[i + 1])
			return false;
	}
	return true;
}

template<typename T>
void input(T* arr, size_t sizeArr) {

	if (!arr)
		return;

	for (size_t i = 0; i < sizeArr; i++) {
		std::cin >> arr[i];
	}
}
int main() {

	constexpr int SIZE = 3;

	{
		double arr[SIZE]{};
		input(arr, SIZE);
		std::cout << ordered(arr, SIZE);
	}


	{
		int arr[SIZE]{};
		input(arr, SIZE);
		std::cout << ordered(arr, SIZE);
	}

}
