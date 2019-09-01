#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

template <typename T>
void info_about_type(string info)
{
	cout << setw(22) << info << ":"
		<< setw(2) << sizeof(T) << "|"
		<< setw(2) << numeric_limits<T>::digits
		<< (numeric_limits<T>::is_signed ? "|sig|" : "|usi|") << " ["
		<< (info == "char" ? (int)numeric_limits<T>::min() : numeric_limits<T>::min()) << ", "
		<< (info == "char" ? (int)numeric_limits<T>::max() : numeric_limits<T>::max()) << "]\n";
}
int main()
{
	info_about_type<char>("char");
	cout << endl;

	info_about_type<short int>("short int");
	info_about_type<signed short int>("signed short int");
	info_about_type<unsigned short int>("unsigned short int");
	cout << endl;

	info_about_type<int>("int");
	info_about_type<signed int>("signed int");
	info_about_type<unsigned int>("unsigned int");
	cout << endl;

	info_about_type<long int>("long int");
	info_about_type<signed long int>("signed long int");
	info_about_type<unsigned long int>("unsigned long int");
	cout << endl;

	info_about_type<long long int>("long long int");
	info_about_type<signed long long int>("signed long long int");
	info_about_type<unsigned long long int>("unsigned long long int");
	cout << endl;

	info_about_type<float>("float");
	info_about_type<double>("double");
	info_about_type<long double>("long double");
	cout << endl;
}
